#include "set.h"
#include <iostream>
using namespace std;


void expandSet(Set *s) {
	int num;
	std::cout << "Please enter in 10 numbers: " ;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		s->add(num);
	}
}

int main() {

	Set *s = new Set(5);
	expandSet(s);
	s->print();
	getchar();
	delete &s;
}



