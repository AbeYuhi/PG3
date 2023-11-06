#pragma once
#include <math.h>
#include<iostream>
#include "IShape.h"
class Circle : public IShape
{
public:
	Circle(float radius) : radius_(radius){}
	~Circle() = default;

	void Size() override;

	void Draw() override;

private:
	float radius_;
};

