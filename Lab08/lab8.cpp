#include "linkedlist.h"
#include <iostream>

using namespace std;

int main() {
	//YOU DO THIS
	//create a new (dynamically allocated) linked list
	
	LinkedList* list = new LinkedList();

	//add numbers 1-10
	int count = 10;

	while (count > 0) {
		list->add(count);
		count--;
	}	 
	
	//call print
	list->print();
	getchar();
	//release all memory
	delete &list;
	return 0;
}