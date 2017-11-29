#include "person.h";
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;



void Person::setVals(char c[], int i) {
	strcpy_s(name, c);
	age = i;
}

void Person::print(void) {
	cout << "Name: " << name << "  Age:" << age << endl;
}