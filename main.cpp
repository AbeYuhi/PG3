#include<iostream>

template<typename Type>
Type Min(Type t1, Type t2) {
	if (t1 <= t2) {
		return t1;
	}
	else {
		return t2;
	}
}

void Min(char t1, char t2) {
	std::cout << "”ŽšˆÈŠO‚Í“ü—Í‚Å‚«‚Ü‚¹‚ñ" << std::endl;
	return;
}

int main() {
	
	std::cout << Min<int>(5, 3) << std::endl;
	std::cout << Min<float>(5.3f, 5.1f) << std::endl;
	std::cout << Min<double>(5.5, 4.6) << std::endl;
	Min('a', 'b');

	return 0;
}