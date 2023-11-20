#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<functional>
#include<Windows.h>
using namespace std;

string InputOddorEven();
void SetTimeOut(std::function<void()> pFunc, int second);

int main() {
	srand(unsigned int(time(NULL)));
	cin.exceptions(ios::failbit);

	int dice = rand() % 6 + 1;
	string oddOrEven = InputOddorEven();
		
	std::function<void()> diceRoll = [dice, oddOrEven]() {

		if (dice % 2 == 1) {
			printf("サイコロの出目は%dで奇数なので%sで", dice, oddOrEven.c_str());
			if (oddOrEven == "半" || oddOrEven == "奇数") {
				printf("正解です\n");
			}
			else {
				printf("不正解です\n");
			}
		}
		if (dice % 2 == 0) {
			printf("サイコロの出目は%dで偶数なので%sで", dice, oddOrEven.c_str());
			if (oddOrEven == "丁" || oddOrEven == "偶数") {
				printf("正解です\n");
			}
			else {
				printf("不正解です\n");
			}
		}
	};

	SetTimeOut(diceRoll, 3);

	return 0;
}

string InputOddorEven() {
	string oddOrEven;
	while (true) {
		try {
			printf("丁(偶数)か半(奇数)か文字を入力してください\n");
			cin >> oddOrEven;

			if (oddOrEven != "丁" && oddOrEven != "偶数" && oddOrEven != "半" && oddOrEven != "奇数") {
				throw - 1;
			}
		}
		catch (int num) {
			printf("エラー:%d\n\n", num);
			cin.clear();
			cin.seekg(0);
			continue;
		}
		break;
	}
	return oddOrEven;
}

void SetTimeOut(std::function<void()> pFunc, int second) {
	//コールバック処理
	Sleep(second * 1000);
	//正解不正解
	pFunc();
}