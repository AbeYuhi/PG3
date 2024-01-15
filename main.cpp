#include<iostream>
#include <thread>
#include <string>

void PrintfString(std::string string) {
	printf("%s\n", string.c_str());
}

int main() {

	std::thread th1(PrintfString, "thread 1");
	th1.join();

	std::thread th2(PrintfString, "thread 2");
	th2.join();

	std::thread th3(PrintfString, "thread 3");
	th3.join();

	return 0;
}