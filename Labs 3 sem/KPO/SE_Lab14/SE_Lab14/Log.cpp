#pragma warning(disable:4996)
#include "Log.h"
#include <iostream>
namespace Log {
	LOG getlog(wchar_t logfile[])
	{
		LOG log;
		log.stream = new std::ofstream;
		log.stream->open(logfile);
		if (log.stream->fail())
			throw ERROR_THROW(112);
		wcscpy_s(log.logfile, logfile);
		return log;
	}

	void WriteLine(LOG log, const char* c, ...)
	{
		const char** ptr = &c;
		int i = 0;
		while (ptr[i] != "")
			*log.stream << ptr[i++];
		*log.stream << std::endl;
	}
	void WriteLine(LOG log, const wchar_t* c, ...)
	{
		const wchar_t** ptr = &c;
		char temp[100];
		int i = 0;
		while (ptr[i] != L"")
		{
			wcstombs(temp, ptr[i++], sizeof(temp));
			*log.stream << temp;
		}
		*log.stream << std::endl;
	}
	void WriteLog(LOG log) {

		char date[100];
		tm local;
		time_t currentTime;
		currentTime = time(NULL);
		localtime_s(&local, &currentTime);
		strftime(date, 100, "%d.%m.%Y %H:%M:%S", &local);
		*log.stream << "--- �������� --- " << date << std::endl;

	}
	void WriteParm(LOG log, Parm::PARM parm) {

		char buff[PARM_MAX_SIZE];
		size_t tsize = 0;

		*log.stream << "--- ��������� --- " << std::endl;
		wcstombs_s(&tsize, buff, parm.in, PARM_MAX_SIZE);
		*log.stream << "-in : " << buff << std::endl;
		wcstombs_s(&tsize, buff, parm.out, PARM_MAX_SIZE);
		*log.stream << "-out: " << buff << std::endl;
		wcstombs_s(&tsize, buff, parm.log, PARM_MAX_SIZE);
		*log.stream << "-log: " << buff << std::endl;
	}
	void WriteIn(LOG log, In::IN in) {

		*log.stream << "--- �������� ������ --- " << std::endl;
		*log.stream << "���������� �������� : " << in.size << std::endl;
		*log.stream << "���������� �����    : " << in.lines << std::endl;
		*log.stream << "���������������     : " << in.ignor << std::endl;
	}
	void WriteError(LOG log, Error::ERROR error)
	{
		if (log.stream)
		{
			*log.stream << "--- ������!!! --- " << std::endl;
			*log.stream << "������ " << error.id << ": " << error.message << std::endl;
			if (error.inext.line != -1)
			{
				*log.stream << "������: " << error.inext.line << std::endl << "�������: " << error.inext.col << std::endl <<std::endl;
			}
		}
		else
		std::cout<< "������ " << error.id << ": " << error.message << ", ������ " << error.inext.line << ", ������� " << error.inext.col << std::endl << std::endl;
	}
	void Close(LOG log) {
		log.stream->close();
		delete log.stream;
	}
}