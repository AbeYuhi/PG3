#include<iostream>
#include "Comparison.h"

int main() {
	Comparison<int, int> com1(1, 2);
	Comparison<float, float> com2(1.0f, 2.0f);
	Comparison<double, double> com3(1.0, 2.0);
	//Comparison<int, float> com4(1, 0.8f);
	//Comparison<int, double> com5(1, 0.5);
	//Comparison<float, double> com6(1.3f, 1.1);

	printf("%d\n", com1.Min());
	printf("%f\n", com2.Min());
	printf("%lf\n", com3.Min());

	return 0;
}