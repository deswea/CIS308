#include "Square.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;


Square::Square(int length) : Rectangle(length, length) {
	this->sideLength = length;
};

void Square::print(void) {
	cout << "size " << sideLength << " square";
}