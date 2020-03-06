#include "rectangle.h"
//Write include statement


/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

int Rect::get_area()
{
	return calculate_area();
}

std::ostream & operator<<(std::ostream & out, const Rect a)
{
	
	out << "Area is: " << a.area << "\n";

	return out;
}
