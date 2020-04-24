#include "vector.h"
#include <iostream>
/*
initialize nums to size dynamic array.
initialize each array element to 0.
*/
Vector::Vector(size_t sz)
	:size{ sz }, nums{new int[sz]}
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}

/*
Copy v.size to new class
Create new dynamic memory array
Initialize array elements to the v.nums array values
*/
Vector::Vector(const Vector & v)
	: size{ v.size },nums{new int[v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}

}
/*
C++ 98 method
Allocate temporay dynamic array of size v(v1)
Copy v1 elements to temp array
Deallocate old v2 nums array
Point v2 nums array to temp array
Set v2 size to v1 size
return self copy of Vector
*/

Vector & Vector::operator=(const Vector & v)
{
	int* temp = new int[v.size];

	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i];
	}

	delete nums;
	nums = temp;
	size = v.size;

	return *this;
	// TODO: insert return statement here
}

/*
Release dynammic memory
Deallocate memory
*/
Vector::~Vector()
{
	std::cout << "\nrealease memory\n";
	delete[] nums;
}

//==================
//free function
void use_vector()
{
	Vector* v1 = new Vector(3);
	delete v1;
	v1 = nullptr;
}
