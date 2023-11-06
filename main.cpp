#include<iostream>
#include "Comparison.h"

int main() {
	Comparison<int, int> com1(1, 2);
	Comparison<float, float> com2(2.0f, 3.0f);
	Comparison<double, double> com3(4.0, 3.0);
	Comparison<int, float> com4(1, 0.8f);
	Comparison<int, double> com5(1, 0.5);
	Comparison<float, double> com6(1.3f, 1.1);

	std::cout << com1.Min() << std::endl;
	std::cout << com2.Min() << std::endl;
	std::cout << com3.Min() << std::endl;
	std::cout << com4.Min() << std::endl;
	std::cout << com5.Min() << std::endl;
	std::cout << com6.Min() << std::endl;

	return 0;
}