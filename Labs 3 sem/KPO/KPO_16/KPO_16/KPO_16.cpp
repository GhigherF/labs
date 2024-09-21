#include "FST.h"
#include <windows.h>
FST::FST fst1(
	"aaabbbabbabbabbbaaabaabaaa",
	4,
	FST::NODE(3, FST::RELATION('a', 0), FST::RELATION('b', 0), FST::RELATION('a', 1)),
	FST::NODE(1,FST::RELATION('b',2)),
	FST::NODE(1,FST::RELATION('a',3)),
	FST::NODE()
	);
void main()
{
	SetConsoleOutputCP(1251);
	if (FST::execute(fst1)) std::cout << "Цепочка " << fst1.string << " распознана" << std::endl;
	else  std::cout << "Цепочка " << fst1.string << " не распознана" << std::endl;
}
