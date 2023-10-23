#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<functional>
#include<Windows.h>
using namespace std;
typedef void (*PFunc)(string str, int num);

void Result(string str, int num);

int main() {
	srand(unsigned int(time(NULL)));
	cin.exceptions(ios::failbit);
	PFunc pFunc;

	int dice = rand() % 6 + 1;

	std::function<string()> inputOddorEven = []() {
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
		};

	string oddOrEven = inputOddorEven();
		
	std::function<void(int second)> setTimeOut = [&](int second) {
		//コールバック処理
		Sleep(second * 1000);
		//正解不正解
		pFunc(oddOrEven, dice); };

	pFunc = Result;
	setTimeOut(3);

	return 0;
}

void Result(string str, int num) {
	if (num % 2 == 1) {
		printf("サイコロの出目は%dで奇数なので%sで", num, str.c_str());
		if (str == "半" || str == "奇数") {
			printf("正解です\n");
		}
		else {
			printf("不正解です\n");
		}
	}

	if (num % 2 == 0) {
		printf("サイコロの出目は%dで偶数なので%sで", num, str.c_str());
		if (str == "丁" || str == "偶数") {
			printf("正解です\n");
		}
		else {
			printf("不正解です\n");
		}
	}
}