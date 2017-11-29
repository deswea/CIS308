#include <cstdio>
#include "person.h"
using namespace std;

int main() {

	Person p;

	p.setVals("George", 10);
	p.print();
	getchar();
	return 0;
}