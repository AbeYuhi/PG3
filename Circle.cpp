#include "Circle.h"

void Circle::Size(){
	size_ = 3.14f * powf(radius_, 2);
}

void Circle::Draw() {
	std::cout << size_ << std::endl;
}