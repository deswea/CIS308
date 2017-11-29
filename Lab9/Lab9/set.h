#ifndef SET_H
#define SET_H

#include <iostream>

class Set {
private:
	int *nums;
	int pos;
	int max;
public:
	Set(int);
	~Set();
	void add(int);
	void print(void);
};

#endif