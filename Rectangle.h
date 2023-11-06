#pragma once
#include<iostream>
#include <math.h>
#include "IShape.h"
class Rectangle : public IShape
{
public:
	Rectangle(float x, float y) : x_(x), y_(y){}
	~Rectangle() = default;
	void Size() override;

	void Draw() override;

private:
	float x_;
	float y_;
};

