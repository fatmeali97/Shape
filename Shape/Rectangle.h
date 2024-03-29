#pragma once
#include "TwoDemShape.h"
#include <iostream>
using namespace std;

class Rectangles : public TwoDemShape {
public:

	Rectangles(int sideA,
		int b,
		string position,
		int size,
		string fill);

	virtual double getArea();
	virtual void print();
	void setB(int b);
	int getB();

private:
	int b;
};
