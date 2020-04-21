#include "dangling_pointer.h"
#include <iostream>
int main() 
{
	int* ptr_num = new int(5);
	int* ptr = ptr_num;

	std::cout << *ptr; //need to dereference * to cout

	delete ptr_num;
	ptr_num = nullptr;

	std::cout << *ptr;

	return 0;
}