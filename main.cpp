#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<Windows.h>
using namespace std;
typedef void (*PFunc)(string str, int num);

void Result(string str, int num);
void SetTimeOut(PFunc pFunc, int second, string oddOrEven, int dice);

int main() {
	srand(unsigned int(time(NULL)));
	cin.exceptions(ios::failbit);
	PFunc pFunc;

	while (true) {
		int dice = rand() % 6 + 1;

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
		
		pFunc = Result;
		SetTimeOut(pFunc, 3, oddOrEven, dice);

		string proceed;
		printf("続けますか?\n続ける場合は「続ける」または「0」やめる場合はそれ以外を\n");
		cin >> proceed;
		if (proceed == "続ける" || proceed == "0") {
			printf("\n");
			cin.clear();
			cin.seekg(0);
			continue;
		}
		else {
			break;
		}
	}

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

void SetTimeOut(PFunc pFunc, int second, string oddOrEven, int dice) {
	//コールバック処理
	Sleep(second * 1000);
	//正解不正解
	pFunc(oddOrEven, dice);
}