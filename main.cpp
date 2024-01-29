#include<iostream>
#include <string>
#include <chrono>
#include <Windows.h>

int main() {
	
	std::string strA(100000, 'a');

	std::chrono::steady_clock::time_point reference = std::chrono::steady_clock::now();
	std::string strCpy = strA;
	std::chrono::steady_clock::time_point now = std::chrono::steady_clock::now();
	std::chrono::microseconds copyTime = std::chrono::duration_cast<std::chrono::microseconds>(now - reference);

	reference = std::chrono::steady_clock::now();
	std::string strMove = std::move(strA);
	now = std::chrono::steady_clock::now();
	std::chrono::microseconds moveTime = std::chrono::duration_cast<std::chrono::microseconds>(now - reference);

	printf("100,000文字を移動とコピーで比較しました。\n");
	std::cout << "コピー : " << copyTime.count() << "μs" << std::endl;
	std::cout << "移動 : " << moveTime.count() << "μs" << std::endl;

	system("PAUSE");

	return 0;
}