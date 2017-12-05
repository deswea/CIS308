#pragma once
#include <iostream>
#ifndef Rectangle_H
#define Rectangle_H

class Rectangle {
private:
	int width;
	int height;
public:
	Rectangle(int, int);
	int area(void);
	void print(void);

};

#endif
