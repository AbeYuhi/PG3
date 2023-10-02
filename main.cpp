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

template<>
char Min<char>(char t1, char t2) {
	std::cout << "”ŽšˆÈŠO‚Í“ü—Í‚Å‚«‚Ü‚¹‚ñ";
	return '\0';
}

int main() {
	
	std::cout << Min<int>(5, 3) << std::endl;
	std::cout << Min<float>(5.3f, 5.1f) << std::endl;
	std::cout << Min<double>(5.5, 4.6) << std::endl;
	std::cout << Min<char>('a', 'b') << std::endl;

	return 0;
}