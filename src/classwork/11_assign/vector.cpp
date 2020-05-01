#include "vector.h"
#include <iostream>
/*
initialize nums to size dynamic array.
initialize each array element to 0.
*/
Vector::Vector(size_t sz)
	:size{ sz }, nums{ new int[sz], space{sz} }
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
get the dynamic memory from v
Get size from v
Point the v.nums to nullptr
*/
Vector::Vector(Vector && v)
	:size{ v.size }, nums{v.nums}
{
	v.size = 0;
	v.nums = nullptr;
}

/*
deallocate original dynamic memory
get the dynamic memory from v
get size from v
point v.num to nullptr
set v.size to 0
*/
Vector & Vector::operator=(Vector && v)
{
	delete nums;
	nums = v.nums;
	size = v.size;
	v.nums = nullptr;
	v.size = 0;

	return *this;
}
/*
make sure allocation is greater than space
create temp dynanic array of size new allocation
copy values from old memory array to temp array
delete the old memory array (nums)
set nums to temp memory array
set space = new allocation
*/
void Vector::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}
	int* temp = new int[new_allocation];

	for (size_t i = 0; i < size; ++i)
	{
		temp[i] = nums[i];
	}
	delete[] nums;
	nums = temp;
	space = new_allocation;
}

/*
Reserve space
Initialize value beyone size to 0

*/
void Vector::Resize(size_t new_size)
{
	Reserve(new_size);
	for (size_t i = size; i < new_size; ++i)
	{
		nums[i] = 0;
	}
	size = new_size;
}

void Vector::Push_Back(int value)
{
	if (space == 0)
	{
		Reserve(RESERVE_DEFAULT_SIZE);
	}
	else if (size == space)
	{
		Reserve(space * RESERVE_DEFAULT_MULTIPLIER);
	}
	nums[size] = value;
	++size;
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

Vector get_vector()
{
	Vector v(3);
	return v;
}

