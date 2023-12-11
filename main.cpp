#include<iostream>
#include <list>
using namespace std;

int main() {
	
	list<const char*> yamanoteLineStation2022Year = {
		"Toukyo",
		"Yurakucho",
		"Shimbashi",
		"Hamamatsucho",
		"Tamachi",
		"Takanawa Gateway",
		"Shinagawa",
		"Osaki",
		"Gotanda",
		"Meguro",
		"Ebisu",
		"Shibuya",
		"harajuku",
		"Yoyogi",
		"Shinjuku",
		"Shin-Okubo",
		"Takadanobaba",
		"Mejiro",
		"Ikebukuro",
		"Otsuka",
		"Sugamo",
		"Komagome",
		"Tabata",
		"Nishi-Nippori",
		"Nippori",
		"Uguisudai",
		"Ueno",
		"Okachimachi",
		"Akihabara",
		"Kanda",
	};

	list<const char*> yamanoteLineStation2019Year = yamanoteLineStation2022Year;
	for (auto itYamanoteLineStation2019 = yamanoteLineStation2019Year.begin(); itYamanoteLineStation2019 != yamanoteLineStation2019Year.end();) {
		if (*itYamanoteLineStation2019 == "Takanawa Gateway") {
			itYamanoteLineStation2019 = yamanoteLineStation2019Year.erase(itYamanoteLineStation2019);
		}
		else {
			itYamanoteLineStation2019++;
		}
	}
	list<const char*> yamanoteLineStation1970Year = yamanoteLineStation2019Year;
	for (auto itYamanoteLineStation1970 = yamanoteLineStation1970Year.begin(); itYamanoteLineStation1970 != yamanoteLineStation1970Year.end();) {
		if (*itYamanoteLineStation1970 == "Nishi-Nippori") {
			itYamanoteLineStation1970 = yamanoteLineStation1970Year.erase(itYamanoteLineStation1970);
		}
		else {
			itYamanoteLineStation1970++;
		}
	}

	//1970年の山手線
	printf("1970年の山手線の駅名一覧\n");
	for (auto itYamanoteLine = yamanoteLineStation1970Year.begin(); itYamanoteLine != yamanoteLineStation1970Year.end(); itYamanoteLine++) {
		printf("%s\n", *itYamanoteLine);
	}
	printf("\n\n");

	//2019年の山手線
	printf("2019年の山手線の駅名一覧\n");
	for (auto itYamanoteLine = yamanoteLineStation2019Year.begin(); itYamanoteLine != yamanoteLineStation2019Year.end(); itYamanoteLine++) {
		printf("%s\n", *itYamanoteLine);
	}
	printf("\n\n");

	//2022年の山手線
	printf("2022年の山手線の駅名一覧\n");
	for (auto itYamanoteLine = yamanoteLineStation2022Year.begin(); itYamanoteLine != yamanoteLineStation2022Year.end(); itYamanoteLine++) {
		printf("%s\n", *itYamanoteLine);
	}

	return 0;
}