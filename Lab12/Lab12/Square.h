 #pragma once
#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"


class Square : public Rectangle{

private:
	int sideLength;
public:
	Square(int);
	void print(void);
};

#endif