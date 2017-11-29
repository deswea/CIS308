#include <iostream>
#include "MyString.h"

using namespace std;
int main() {

	MyString mystr;

	cout << "Please enter in whatever string you would like: ";
	cin >> mystr;
	mystr[0] = 'B';
	
	cout << mystr.strings;
	getchar();
	getchar();
}