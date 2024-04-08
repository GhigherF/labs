#include <iostream>
#include "Dictionary.h"
using namespace std;
using namespace Dictionary;

namespace Dictionary
{
    Instance Create(const char name[DICTNAMEMAXSIZE], int size)
    {
        if (size >= DICTMAXSIZE)
        {
            throw THROW02;
        }
        if (strlen(name) >= DICTNAMEMAXSIZE)
        {
            throw THROW01;
        }

        Instance* instance = new Instance;
        instance->dictionary = new Entry[size];
        strcpy_s(instance->name, name);
        instance->maxsize = size;
        instance->size = 0;
        return *instance;
    };
    void AddEntry(Instance& inst, Entry ed)
    {
        if (inst.size >= inst.maxsize)
        {
            throw THROW03;
        }
        for (int i = 0; i < inst.size; i++)
        {
            if (inst.dictionary[i].id == ed.id)
            {
                throw THROW04;
            }
        }
        inst.dictionary[inst.size] = ed;
        inst.size += 1;
    }

    Entry GetEntry(Instance inst, int id)
    {
        for (int i = 0; i < inst.size; i++)
        {
            if (id == inst.dictionary[i].id)
            {

                cout << "-------------------------" << endl << inst.dictionary[i].id << " " << inst.dictionary[i].name << endl;
                return inst.dictionary[i];
            }
        }
        throw THROW05;
    };

    void DelEntry(Instance& inst, int id)
    {

        for (int i = 0; i < inst.size; i++)
        {
            if (inst.dictionary[i].id == id)
            {

                for (int j = i; j < inst.maxsize - 1; j++)
                {
                    inst.dictionary[j] = inst.dictionary[j + 1];
                }
                inst.size--;
                return;
            }
        }

        throw THROW06;
    };

    void UpdEntry(Instance& inst, int id, Entry new_ed)
    {

        for (int i = 0; i < inst.size; i++)
        {
            if (inst.dictionary[i].id == new_ed.id && inst.dictionary[i].id != id)
            {
                throw THROW08;
            }
        }
        for (int i = 0; i < inst.size; i++)
        {
            if (inst.dictionary[i].id == id)
            {

                inst.dictionary[i] = new_ed;
                return;
            }
        }

        throw THROW07;
    };


    void Delete(Instance& d)
    {

        delete[] d.dictionary;
    };
    void Print(Instance d)
    {
        cout << "-------------------" << d.name << "----------------------" << endl;
        for (int i = 0; i < d.size; i++)
        {
            cout << d.dictionary[i].id << " " << d.dictionary[i].name << endl;
        }

    }
}