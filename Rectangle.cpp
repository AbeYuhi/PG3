#include "Rectangle.h"

void Rectangle::Size() {
	size_ = x_ * y_;
}

void Rectangle::Draw() {
	std::cout << size_ << std::endl;
}