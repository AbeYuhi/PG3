#include<iostream>
#include<memory>
#include "Enemy.h"

int main() {
	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();
	enemy->Initialize();

	enemy->Update();

	return 0;
}