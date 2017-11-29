#pragma once
#include <iostream>


using namespace std;

class MyString {	
public:
	char& operator[](int index);
	char strings[100];
};

ostream& operator<<(ostream&, const MyString&);
istream& operator>>(istream&, MyString&);