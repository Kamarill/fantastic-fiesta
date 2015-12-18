#include <iostream>
#include <list>

int main()
{
	std::list <int> test;
	test.push_front(5);
	test.push_front(4);
	test.push_front(4);
	test.push_front(4);
	test.push_front(4);
	
	std::list<int>::const_iterator iterator;
	for (iterator = test.begin(); iterator != test.end(); ++iterator)
	{
		std::cout << &(*iterator) << '\n';
	}
	std::cout << '\n';
	std::cout << &test.front();

	return 0;
}

