#include<iostream>

int HourlyWageCalculation(int workTime) {
	return 1072 * workTime;
}

int HourlyWageCalculationRecurrence(int workTime, int money) {
	if (workTime <= 1) {
		return 0;
	}
	int Salary = money * 2 - 50;
	HourlyWageCalculationRecurrence()
}

int main() {
	
	for (int i = 0; i <= 100; i++) {
		std::wcout << i << "時間働く場合" << std::endl;
		std::wcout << "固定値の場合==>" << HourlyWageCalculation(i) << "円" << std::endl;

		
		std::cout << std::endl;
	}
	return 0;
}