#include "set.h"
#include <iostream>

Set::Set(int max) {
	nums = new int[max];
	pos = 0;
	this->max = max;
}

Set::~Set() {
	delete[] nums;
}

void Set::add(int elem) {
	int i;
	if (pos >= max) {
		int* newArr = new int[max * 2];
		memcpy(newArr, nums, max * sizeof(int));
		nums = newArr;
	}
	for (i = 0; i < pos; i++) {
		if (nums[i] == elem) return;
	}
	nums[pos++] = elem;
}

void Set::print(void) {

	int i;
	for (i = 0; i < pos; i++) {
		std::cout << nums[i];
		}
	}