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
		
		pFunc = Result;
		SetTimeOut(pFunc, 3, oddOrEven, dice);

		string proceed;
		printf("�����܂���?\n������ꍇ�́u������v�܂��́u0�v��߂�ꍇ�͂���ȊO��\n");
		cin >> proceed;
		if (proceed == "������" || proceed == "0") {
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

void SetTimeOut(PFunc pFunc, int second, string oddOrEven, int dice) {
	//�R�[���o�b�N����
	Sleep(second * 1000);
	//����s����
	pFunc(oddOrEven, dice);
}