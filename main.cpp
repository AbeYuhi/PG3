#include<iostream>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
	
	std::unique_ptr<Circle> circle = std::make_unique<Circle>(2.0f);
	std::unique_ptr<Rectangle> rectangle = std::make_unique<Rectangle>(3.0f, 4.0f);

	circle->Size();
	rectangle->Size();

	circle->Draw();
	rectangle->Draw();

	return 0;
}