#include "IT.h"
#include "Error.h"
#include <cstring>

using namespace std;

namespace IT
{
	IdTable Create(int size)
	{
		IdTable table;
		table.maxsize = size;
		table.size = 0;
		table.table = new Entry[size];
		return table;
	}
	void Add(IdTable& table, Entry entry)
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
		Entry GetEntry(IdTable& table, int n)
		{
			return table.table[n];
		}
		int IsId(IdTable& table, char* id)
		{
			for (int i = 0; i < table.size; i++)
			{
				if (strcmp(table.table[i].id, id) == 0)
					return i;
			}
			return -1;
		}
		void Delete(IdTable& table)
		{
			delete[] table.table;
		}
	}