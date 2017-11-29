#include <stdio.h>
#include "MyString.h"
#include <iostream>


using namespace std;


char & MyString::operator[](int index)
{
	return strings[index];
}

ostream & operator<<(ostream& out, const MyString& strObj)
{
	out << strObj.strings;
	return out;
}

istream & operator >> (istream& in, MyString& strObj)
{
	in >> strObj.strings;
	return in;
}
