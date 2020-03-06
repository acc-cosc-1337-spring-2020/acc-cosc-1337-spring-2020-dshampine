#include <iostream>
/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/
class Rect
{
	int height;
	int length;
	int area;
	int calculate_area()
	{
		return area = height * length;
	}
	friend std::ostream& operator<<(std::ostream& out, const Rect a);
public:
	Rect(int h, int l) { height = h; length = l; calculate_area(); }
	int get_area();
};