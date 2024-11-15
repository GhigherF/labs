#include"stdafx.h"
#include "Error.h"
#include "Parm.h"
#include "Log.h"
#include "In.h"
#include "Out.h"
#include "FST.h"

int _tmain(int argc, const _TCHAR* argv[]) {

    setlocale(LC_ALL, "RU");

    Parm::PARM parm;
    Log::LOG log = Log::INITLOG;
    Out::OUT out = Out::INIOUT;

    try {
        parm = Parm::getparm(argc, argv);
        log = Log::getlog(parm.log);
        Log::WriteLog(log);
        Log::WriteParm(log, parm);
    }
    catch (Error::ERRORS e) {
        cout << "������ " << e.id << ": " << e.message << endl << endl;
    }
    try {
        parm = Parm::getparm(argc, argv);
        In::ININ in = In::getin(parm.in);
        Log::WriteIn(log, in);
        

    }
    catch (Error::ERRORS e) {
        cout << "������ " << e.id << ": " << e.message << endl << endl;
        cout << "������ " << e.inext.line << " ������� " << e.inext.col << endl << endl;
        log = Log::getlog(parm.log);
        Log::WriteError(log, e);
        out = Out::getout(parm.out);
        Out::WriteToError(out, e);

    }
    try {
        parm = Parm::getparm(argc, argv);
        In::ININ in = In::getin(parm.in);
        LT::LexTable lextab = LT::Create(LT_MAXSIZE - 1);
        IT::IdTable idtab = IT::Create(TI_MAXSIZE - 1);
        Flexer::Exe(lextab, idtab, in);
        Log::WriteLexTable(log, lextab);
        Log::WriteIdTable(log, idtab);

        out = Out::getout(parm.out);
        Out::WriteToFile(out, in);
    }
    catch (Error::ERRORS e)
    {
        cout << "������ " << e.id << ": " << e.message << endl << endl;
        Log::WriteError(log, e);
        out = Out::getout(parm.out);
        Out::WriteToError(out, e);
    }
    

    system("pause");
    return 0;
}
