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
				printf("��(����)����(�)����������͂��Ă�������\n");
				cin >> oddOrEven;

				if (oddOrEven != "��" && oddOrEven != "����" && oddOrEven != "��" && oddOrEven != "�") {
					throw - 1;
				}
			}
			catch (int num) {
				printf("�G���[:%d\n\n", num);
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
		//�R�[���o�b�N����
		Sleep(second * 1000);
		//����s����
		pFunc(oddOrEven, dice); };

	pFunc = Result;
	setTimeOut(3);

	return 0;
}

void Result(string str, int num) {
	if (num % 2 == 1) {
		printf("�T�C�R���̏o�ڂ�%d�Ŋ�Ȃ̂�%s��", num, str.c_str());
		if (str == "��" || str == "�") {
			printf("�����ł�\n");
		}
		else {
			printf("�s�����ł�\n");
		}
	}

	if (num % 2 == 0) {
		printf("�T�C�R���̏o�ڂ�%d�ŋ����Ȃ̂�%s��", num, str.c_str());
		if (str == "��" || str == "����") {
			printf("�����ł�\n");
		}
		else {
			printf("�s�����ł�\n");
		}
	}
}