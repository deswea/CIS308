#include "Rectangle.h";
#include "Square.h";
#include <iostream>;
using namespace std;

int main() {

	Rectangle* r = new Rectangle(3, 4);
	Square* s = new Square(5);
	cout << "The area of the rectangle is: " << r->area() <<endl;
	cout << "The area of the square is: " << s->area() <<endl;
	r->print();
	s->print();
	delete r;
	delete s;
	getchar();
	getchar();
}