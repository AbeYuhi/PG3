#include<iostream>
#include <list>
using namespace std;

int main() {
	
	list<const char*> yamanoteLineStation1970Year = {
		"Toukyo",
		"Yurakucho",
		"Shimbashi",
		"Hamamatsucho",
		"Tamachi",
		//"Takanawa Gateway",
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
		//"Nishi-Nippori",
		"Nippori",
		"Uguisudai",
		"Ueno",
		"Okachimachi",
		"Akihabara",
		"Kanda",
	};

	list<const char*> yamanoteLineStation2019Year = yamanoteLineStation1970Year;
	for (auto itYamanoteLineStation2019 = yamanoteLineStation2019Year.begin(); itYamanoteLineStation2019 != yamanoteLineStation2019Year.end();) {
		if (*itYamanoteLineStation2019 == "Tabata") {
			yamanoteLineStation2019Year.insert(++itYamanoteLineStation2019, "Nishi-Nippori");
		}

		itYamanoteLineStation2019++;
	}
	list<const char*> yamanoteLineStation2022Year = yamanoteLineStation2019Year;
	for (auto itYamanoteLineStation2022 = yamanoteLineStation2022Year.begin(); itYamanoteLineStation2022 != yamanoteLineStation2022Year.end();) {
		if (*itYamanoteLineStation2022 == "Tamachi") {
			yamanoteLineStation2022Year.insert(++itYamanoteLineStation2022, "Takanawa Gateway");
		}

		itYamanoteLineStation2022++;
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