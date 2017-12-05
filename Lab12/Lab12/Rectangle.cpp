#include <iostream>
#include "Rectangle.h"

using namespace std;



Rectangle::Rectangle(int width, int height) {
	this->width = width;
	this->height = height;
}

int Rectangle::area(void) {
	return width * height;
}

void Rectangle::print(void) {
	cout << width <<" x " << height << " rectangle" << endl;
}



