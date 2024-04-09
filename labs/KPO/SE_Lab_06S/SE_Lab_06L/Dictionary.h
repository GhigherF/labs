#pragma once
#include <cstring>
#define DICTNAMEMAXSIZE 20
#define DICTMAXSIZE 100
#define ENTRYNAMEMAXSIZE 30
#define THROW01 "ErORr"
#define THROW02 "ErORr"
#define THROW03 "ErORr"
#define THROW04 "ErORr"
#define THROW05 "ErORr"
#define THROW06 "ErORr"
#define THROW07 "ErORr"
#define THROW08 "ErORr"
//Лютое изменение
namespace Dictionary
{
	struct Entry
	{
		int id;
		char name[ENTRYNAMEMAXSIZE];
	};
	struct Instance
	{
		char name[DICTNAMEMAXSIZE];
		int maxsize;
		int size;
		Entry* dictionary;
	};
	Instance Create(const char name[DICTNAMEMAXSIZE], int size);
	void AddEntry(Instance& inst, Entry ed);
	void DelEntry(Instance& inst, int id);
	void UpdEntry(Instance& inst, int id, Entry new_ed);
	Entry GetEntry(Instance& inst, int id);
	void Print(Instance d);
	void Delete(Instance& d);

};