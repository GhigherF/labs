#include "LT.h"
#include "Error.h"
using namespace std;

namespace LT
{
	LexTable Create(int size)
	{
		LexTable table;
		table.maxsize = size;
		table.size = 0;
		table.table = new Entry[size];
		return table;
	}

	void Add(LexTable& table, Entry entry)
	{
		if (table.size < table.maxsize)
		{
			table.table[table.size] = entry;
			table.size++;
		}
		else
		{
			throw ERROR_THROW(104);
		}
	}
	Entry GetEntry(LexTable& table, int n)
	{
		return table.table[n];
	}
	void Delete(LexTable& table)
	{
		delete[] table.table;
	}
}	