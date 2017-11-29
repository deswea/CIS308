#include "node.h"
#include "linkedlist.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList(void) {
	//initialize head and tail to NULL
	head = NULL;
	tail = NULL;
}

LinkedList::~LinkedList() {
	//release the memory for each node
	delete head;
	delete tail;
}

void LinkedList::add(int val) {
	//this method is complete

	Node *cur = new Node(val);

	if (head == NULL) {
		head = cur;
		tail = cur;
	}
	else {
		tail->next = cur;
		tail = tail->next;
	}
}

void LinkedList::print(void) {
	//use a temporary node to loop through and print the value in each node
	Node* temp = this->head;
		if (temp == NULL) {
			cout << "";
		}
	int i = 1;
	while(head) {
		cout << " " << head->data;
		head = head->next;
		i++;
	}
}