#include "Header.h"
#include <iostream>
#include <iomanip>
void AAA::print()
{
	std::cout << x;
}
namespace heap
{
	Heap create(int maxsize, CMP(*f)(void*, void*))
	{
		return *(new Heap(maxsize, f));
	}
	int Heap::left(int ix)
	{
		return (2 * ix + 1 >= size) ? -1 : (2 * ix + 1);
	}
	int Heap::right(int ix)
	{
		return (2 * ix + 2 >= size) ? -1 : (2 * ix + 2);
	}
	int Heap::parent(int ix)
	{
		return (ix + 1) / 2 - 1;
	}
	void Heap::swap(int i, int j)
	{
		void* buf = storage[i];
		storage[i] = storage[j];
		storage[j] = buf;
	}
	void Heap::heapify(int ix)
	{
		int l = left(ix), r = right(ix), irl = ix;
		if (l > 0)
		{
			if (isGreat(storage[l], storage[ix])) irl = l;
			if (r > 0 && isGreat(storage[r], storage[irl])) 	irl = r;
			if (irl != ix)
			{
				swap(ix, irl);
				heapify(irl);
			}
		}
	}
	void Heap::insert(void* x)
	{
		int i;
		if (!isFull())
		{
			storage[i = ++size - 1] = x;
			while (i > 0 && isLess(storage[parent(i)], storage[i]))
			{
				swap(parent(i), i);
				i = parent(i);
			}
		}
	}
	void* Heap::extractMax()
	{
		void* rc = nullptr;
		if (!isEmpty())
		{
			rc = storage[0];
			storage[0] = storage[size - 1];
			size--;
			heapify(0);
		} return rc;
	}
	void* Heap::extractI(int i)
	{
		void* rc = nullptr;
		
			rc = storage[0];
			storage[i-1] = storage[size-1];
			size--;
			heapify(0);
		return rc;
		}
	void* Heap::sum()
	{
	float Sum = 0;
		float avrg = 0;
		float sumLeaves = 0;
		float cntrlsize;
		float cntrlsum;
		void* rc = nullptr;
		cntrlsize = size;
		cntrlsum= ((AAA*)storage[0])->x;
		while (!isEmpty())
		{
			rc = storage[0]; 
			Sum+=((AAA*)storage[0])->x;
			storage[0] = storage[size - 1];
			size--;
			heapify(0);
		}
		std::cout << std::endl << "SUM:" << Sum<<std::endl;
		std::cout << std::endl << "Average:" <<Sum/cntrlsize<<std::endl;
		std::cout << std::endl << "Sum of leaves:" << Sum -cntrlsum<<std::endl;
		return rc;

		
		
		//cout << endl << "Sum of leaves:" << leavesSum;
	}
	
	void* Heap::extractMin()
	{
		void* rc = nullptr;
		if (!isEmpty())
		{
			rc = storage[0];
			size--;
			heapify(0);
		} return rc;
	}
	void unionHeap(heap::Heap h1, heap::Heap h2)
	{
		void* rc = nullptr;
		std::cout << std::endl << "GG:" << h1.size << std::endl;
		for (int i = 0; i < h1.size; h1.size--)
		{
			
h2.insert(h1.storage[h1.size-1]);
		}
			
		
	h2.heapify(0);
	h2.scan(0);
	}

	void Heap::scan(int i) const     //Вывод значений элементов на экран
	{
		int probel = 20;
		std::cout << '\n';
		if (size == 0)
			std::cout << "Куча пуста";
		for (int u = 0, y = 0; u < size; u++)
		{
			std::cout << std::setw(probel + 10) << std::setfill(' ');
			((AAA*)storage[u])->print();
			if (u == y)
			{
				std::cout << '\n';
				if (y == 0)
					y = 2;
				else
					y += y * 2;
			}
			probel /= 2;
		}
		std::cout << '\n';
	}
}

