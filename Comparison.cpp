#include "Comparison.h"

template <typename T1, typename T2>
Comparison<T1, T2>::Comparison(T1 num1, T2 num2){
	num1_ = num1;
	num2_ = num2;
}

template <typename T1, typename T2>
Comparison<T1, T2>::~Comparison(){}

template <typename T1, typename T2>
auto Comparison<T1, T2>::Min() {
	if (num1_ <= num2_) {
		return static_cast<T1>(num1_);
	}
	else {
		return static_cast<T1>(num2_);
	}
}