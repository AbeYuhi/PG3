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
		std::wcout << nowTime << "���ԓ����ꍇ" << std::endl;
		std::wcout << "�Œ�l�̏ꍇ==>" << HourlyWageCalculation(nowTime) << "�~" << std::endl;
		std::wcout << "�ċN�l�̏ꍇ==>" << HourlyWageCalculationRecurrence(nowTime, startMoney) << "�~" << std::endl;
		std::cout << std::endl;

		if (HourlyWageCalculationRecurrence(nowTime, startMoney) > HourlyWageCalculation(nowTime)) {
			std::wcout << nowTime << "���Ԉȏ㓭������ċA�I�Ȓ����̂��ׂ���" << std::endl;
			break;
		}

		nowTime++;
	}
	return 0;
}