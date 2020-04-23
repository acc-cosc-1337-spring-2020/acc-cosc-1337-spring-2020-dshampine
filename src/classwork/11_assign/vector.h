//
//TODO 7 add template
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>

class Vector 
{
public:
	Vector(size_t sz);
	Vector(const Vector& v); //copy constructor
	size_t Size()const { return size; }
	//void set_size(size_t sz) { size = sz; }
	int& operator[](int i) { return nums[i]; } //allows modification of array
	int& operator[](int i)const { return nums[i]; }
	~Vector();//destructor
private:
	size_t size;
	int* nums; 
};

#endif // !MY_VECTOR_H

//does not belong to the class
//free function

void use_vector();

