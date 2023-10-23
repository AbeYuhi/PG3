#include<iostream>

int HourlyWageCalculation(int workTime) {
	return 1072 * workTime;
}

int HourlyWageCalculationRecurrence(int workTime, int money) {
	if (workTime <= 0) {
		return 0;
	}
	return (money + HourlyWageCalculationRecurrence(--workTime, (money * 2) - 50));
}

int main() {
	
	int nowTime = 1;
	int startMoney = 100;
	while(true){
		std::wcout << nowTime << "時間働く場合" << std::endl;
		std::wcout << "固定値の場合==>" << HourlyWageCalculation(nowTime) << "円" << std::endl;
		std::wcout << "再起値の場合==>" << HourlyWageCalculationRecurrence(nowTime, startMoney) << "円" << std::endl;
		std::cout << std::endl;

		if (HourlyWageCalculationRecurrence(nowTime, startMoney) > HourlyWageCalculation(nowTime)) {
			std::wcout << nowTime << "時間以上働いたら再帰的な賃金のが儲かる" << std::endl;
			break;
		}

		nowTime++;
	}
	return 0;
}