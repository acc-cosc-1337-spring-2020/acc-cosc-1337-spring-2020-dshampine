//write include statemetns
#include "rectangle.h"
#include <iostream>
#include <vector>
using std::cin; using std::cout;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	Rect area();
	std::vector<Rect> area{ Rect(4, 5), area(10, 10), area(100, 10) };

		for (auto vec : area)
		{
			cout << vec;
		}
	
	return 0;
}