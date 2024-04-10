//#include<iostream> 
//#include <fstream>
//#include <string>
//using namespace std;
//struct Queue//задание очереди
//{
//    //int info;Для основы
//    //float info;
//    char info[100];
//    Queue* next;
//};
//
////int n;
//
////void add(Queue** begin, Queue** end) //Формирование элементов очереди
////{
////    //int p;
////    char p;
////    cout << "Enter number= ";
////    cin >> p;
////    Queue* t = new Queue;
////    t->next = NULL;
////    if (*begin == NULL)
////        *begin = *end = t;
////    else
////    {
////        t->info = p;
////        (*end)->next = t;
////        *end = t;
////    }
////}
////int show(Queue* begin) //Вывод элементов очереди 
////{
////    int count = 0,position=0;//,max=-500;
////    float max=-500;
////    Queue* t = begin;
////    if (t == NULL)
////    {
////        cout << "Queue is empty\n";
////        return 0;
////    }
////    else
////        while (t != NULL)
////        {
////            cout << t->info <<" ";
////            if (t->info > max)  { max = t->info; position = count; }
////            t = t->next;
////            count += 1;
////        }
////    cout << endl;
////    return position;
////}
//void Delete(Queue* *begin)//Удаление всей очереди
//{
//    Queue* t;
//    t = new Queue;
//    while (*begin != NULL)
//    {
//        t = *begin;
//        *begin = (*begin)->next;
//        delete t;
//    }
//}
//void execution(/*Queue* *begin,int position*/)//выполнение
//{//Доп 2
////    cout << endl;
////    Queue* *lastHalf =begin,**t=begin;
////    float a[1000];
////    int j = 0;
//// //тут происходит вся магия
//// for (int i = 0; i < n; i++)
//// {
////     if (i >= position)
////     {
//// cout << (*t)->info<<" ";
////     }
////     else 
////     {
////a[j] = (*t)->info;
////     j+=1;
////     }
////     
////     *t = (*t)->next;
//// }
////
////for (int i = 0; i <j; i++)
////    {
////   cout << a[i]<<" ";
////    }
//// cout << endl;
//    /////////////////////////////
//    //Доп 3
//    Queue* begin = NULL, *end=NULL;
//    ifstream in("gg.txt");
//    ofstream fout("out.txt");
//    string a;
//    int j = 0;
//    Queue* t = new Queue;
//
//    while (getline(in, a))
//    {
//        j = 0;
//                t->next = NULL;
//                
//        for (int i = 0; i < size(a); i++)
//        {
//                    t->info[j] = a[i];
//                    j += 1;
//        }
//
//string gg,digits,letters;
//    for (int i = 0; i < j; i++)
//    {
// gg = gg + t->info[i];
//    }
//    for (int i = 0; i < size(gg); i++)
//    {
//        if (t->info[i] >= '0' && t->info[i] <= '9') { digits += t->info[i]; }
//        else { letters += t->info[i];}
//    }
//
//    fout << endl<<letters + digits << endl;
// } 
//    
//   
//     /*   if (begin == NULL) {
//begin = end = t;
//        }
//        else{
//            end->next = t;
//            end = t;}
//             
//
//        Queue* t = begin;
//                while (t != NULL)
//                {
//                    cout << t->info <<" ";
//                    t = t->next;
//                }
//            cout << endl;
//    }
//    */
//}
//
//void Delete3(Queue* *begin)//Удаление только 3 первых элементов для основного варианта
//{
//    Queue* t;
//    t = new Queue;
//  for (int i=0;i<3;i++)
//    {
//        t = *begin;
//        *begin = (*begin)->next;
//         delete t;
//    }
//}
//
//void main()
//{
//    int position;
//    Queue* begin = NULL, * end, * t;
//    t = new Queue;
//
//
//
//    while (true)
//    { cout << "1.Add" << endl << "2.Show" << endl<<"3.Full delete"<<endl<</*"4.Delete 3"*/"4.Execution"<< endl;
//        int choice;
//        cin >> choice;
//        switch (choice)
//        {
//           
//        case 1:
//        {
//           
//            //    cout << "n:";
//            //    cin >> n;
//            //    for (int i = 0; i < n; i++)
//            //    {
//            //if (begin == NULL)
//            //{
//            //    
//            //        int p;
//            //        cout << "Enter number:";
//            //        cin >> p;
//            //        t->info = p;        //первый элемент
//            //        t->next = NULL;
//            //        begin = end = t;
//            //    }
//            //else
//            //{
//            //  //  add(&begin, &end);
//            //}
//            //}
//            break;
//        }
//
//      case 2:
//         {
//          int count=0;
//          //count=show(begin);//Для основы
//         // position = show(begin);//Для допа 2
//          break;
//         }
//      case 3:
//      {
//          Delete(&begin);
//          break;
//      }
//      case 4:
//      {
//        //  Delete3(&begin);
//        execution(/*&begin,position*/);
//          break;
//      }
//
//        }
//    }
//}
//
//
//

#include<iostream>
using namespace std;
int num = 0;
struct Item
{
	int data;
	Item* next;
};
Item* head, * tail;

bool isNull(void)    //Проверка на пустоту
{
	return (head == NULL);
}
void deletFirst()   //Извлечение элемента из начала(FIFO)
{
	if (isNull())
		cout << "Очередь пуста" << endl;
	else
	{
		Item* p = head;
		head = head->next;
		delete p;
	}
	num -= 1;
}

void deletlast()   //Извлечение элемента из конца(LIFO)
{
	if (isNull())
		cout << "Очередь пуста" << endl;
	else
	{
		Item* temp = new Item;
		Item* begin=head;
		for (int i = 0; i < num-2; i++)
		{
			temp = begin;
			temp = temp->next;
			begin = begin->next;
		}
		temp->next = NULL;
		tail = temp;
		num -= 1;
}
}

void getFromHead()  //Получение элемента из начала
{
	if (isNull())
		cout << "Очередь пуста" << endl;
	else
		cout << "Начало = " << head->data << endl;
}
bool flag = false;



void insertToQueue(int x)  //Добавление элемента в очередь 
{
	Item* p = new Item;      //новый указатель 
	p->data = x;
	p->next = NULL;
	Item* v = new Item;      //указатель для нового числа
	Item* p1 = new Item;
	Item* p2 = new Item;
	int i = 0;               //флажок
	 num+= 1;
	if (isNull())
		head = tail = p;
	else
	{
		p2 = head; p1 = head;
		while (p1 != NULL)  //пока очередь не закончится
		{
			if (i == 1)
			{
				if (x >= p1->data)  //число больше, чем в очереди
				{
					if (x == p1->data)flag = true;
					v->data = x;
					v->next = p1;
					p2->next = v;
					return;
				}
				p2 = p2->next;      // следующее число
			}
			else
			{
				if (x >= p1->data)
				{
					if (x == p1->data)flag = true;
					v->data = x;
					v->next = p1;
					head = v;
					return;
				}
			}
			p1 = p1->next;
			i = 1;
		}
		if (p1 == NULL)
		{
			tail->next = p;
			tail = p;
		}
	}
}




void printQueue()             //Вывод очереди
{
	Item* p = new Item;
	if (isNull())
		cout << "Очередь пуста" << endl;
	else
	{
		cout << endl << flag << endl;
		cout << "Очередь = ";
		p = head;
		while (!isNull())
		{
			if (p != NULL)
			{
				cout << p->data << " "; cout << "->";
				p = p->next;
			}
			else
			{
				cout << "NULL" << endl;
				return;
			}
		}
	}
	

}

void clrQueue()           //Очистка очереди
{
	while (!isNull()) deletFirst();
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int i = 1, choice = 1, z; head = NULL;  tail = NULL;
	while (choice != 0)
	{
		cout << "1 - добавить элемент" << endl;
		cout << "2 - получить элемент с начала" << endl;
		cout << "3 - извлечь элемент" << endl;
		cout << "4 - вывести элементы" << endl;
		cout << "5 - очистить очередь" << endl;
		cout << "0 - выход" << endl;
		cout << "Выберите действие  ";  cin >> choice;
		switch (choice)
		{
		case 1: cout << "Введите элемент:  "; cin >> z;
			insertToQueue(z); printQueue();  break;
		case 2: getFromHead(); break;
		case 3: 
		{if (flag == true)deletFirst();
		else deletlast();
		  break;
		}
		case 4: printQueue();  break;
		case 5: clrQueue();    break;
		}
	}
	return 0;
}
