#include "Stdafx.h"
#include <iostream>
#include "Dictionary.h"

using namespace Dictionary;
using namespace std;
//#include "stdafx.h"

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
        inst.dictionary[inst.size]= ed;  
        inst.size += 1;       
    }
    
     Entry GetEntry(Instance inst, int id)
     {
         for (int i = 0; i < inst.size; i++)
         {
             if (id == inst.dictionary[i].id)
             {
                
                 cout <<"-------------------------"<<endl <<inst.dictionary[i].id << " " << inst.dictionary[i].name <<endl;
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
        for (int i = 0; i <d.size; i++)
        {
      cout << d.dictionary[i].id << " "<<d.dictionary[i].name << endl;
        }
  
    }
}

    int main()
    {
        try
        { 
            setlocale(LC_ALL, "rus");

#if defined(TEST_CREATE_01)+defined(TEST_CREATE_02)+defined(TEST_ADDENTRY_03)+ defined(TEST_ADDENTRY_04) + defined(TEST_GETENTRY_05) + defined(TEST_GETENTRY_06) + defined(TEST_UPDENTRY_07) + defined(TEST_UPDENTRY_08)>1
#error  Больно уж занадта макросов
#endif

#ifdef TEST_CREATE_01 
            Instance d1 = Create("abcdefghigklmnopqrstuvwxyz", 5);
#endif 



#ifdef TEST_CREATE_02
            Instance d1 = Create("Library", 500);
#endif 


#ifdef TEST_ADDENTRY_03   
            Instance d1 = Create("Library", 3);
            Entry e1 = { 1,"gg" }, e2 = { 2,"ggg" }, e3 = { 3,"gggg" }, e4 = { 4,"ggggg" };
            AddEntry(d1, e1);
            AddEntry(d1, e2);
            AddEntry(d1, e3);
            AddEntry(d1, e4);

#endif 

#ifdef TEST_ADDENTRY_04   
            Instance d1 = Create("Library", 3);
            Entry e1 = { 1,"gg" }, e2 = { 1,"ggg" };
            AddEntry(d1, e1);
            AddEntry(d1, e2);
#endif 
            
#ifdef TEST_GETENTRY_05  
            Instance d1 = Create("Library", 3);
            Entry e1 = { 1,"gg" };
            GetEntry(d1,2);
        
#endif 

#ifdef TEST_GETENTRY_06 
            Instance d1 = Create("Library", 3);
            Entry e1 = { 1,"gg" };
            DelEntry(d1, 2);

#endif 

#ifdef TEST_UPDENTRY_07
            Instance d1 = Create("Library", 3);
            Entry e1 = { 1,"gg" }, e2 = { 2,"ff" };
            UpdEntry(d1,2,e2);

#endif 

#ifdef TEST_UPDENTRY_08
            Instance d1 = Create("Library", 3);
            Entry e1 = { 1,"gg" }, e2 = { 2,"ff" }, e3 = {1,"gg"};
            AddEntry(d1, e1);
            AddEntry(d1, e2);
            UpdEntry(d1, 2, e3);
#endif 


#ifdef TEST_DICTIONARY
            Instance d1 = Create("Студенты",10), d2 = Create("Преподаватели", 10);
            Entry d1e1 = { 1,"Мишка Фреде" }, d1e2 = { 2,"Тайлер Дерден" }, d1e3 = { 3,"Джорно Джованно" }, d1e4 = { 4,"Вито Скалетте" }, d1e5 = { 5,"Данте" }, d1e6 = { 69,"Текила Сансет" }, d1e7 = { 7,"ДЖОН СИНА!!!" };
            Entry d2e1 = { 1,"Чайковский" }, d2e2 = { 2,"Наркевич" }, d2e3 = { 3,"Белый Дед" }, d2e4 = { 4,"Папа Шиман" }, d2e5 = { 5,"Гринюк" }, d2e6 = { 69,"Тульский пряник" }, d2e7 = { 7,"Смелов" };
           
            AddEntry(d1, d1e1);
            AddEntry(d1, d1e2);
            AddEntry(d1, d1e3);
            AddEntry(d1, d1e4);
            AddEntry(d1, d1e5);
            AddEntry(d1, d1e6);
            AddEntry(d1, d1e7);

            AddEntry(d2, d2e1);
            AddEntry(d2, d2e2);
            AddEntry(d2, d2e3);
            AddEntry(d2, d2e4);
            AddEntry(d2, d2e5);
            AddEntry(d2, d2e6);
            AddEntry(d2, d2e7);
        
            Print(d1);
            Print(d2);

                
#endif 


        }
        catch(const char *error)
        {
            cout << endl<< error<<endl;
        }
     return 0;

}


