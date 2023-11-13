#include "Enemy.h"

Enemy::Enemy(){}
Enemy::~Enemy(){}

void (Enemy::* Enemy::statePatternTable[])() = {
	&Enemy::Proximity,
	&Enemy::Shooting,
	&Enemy::Elimination
};

void Enemy::Initialize() {
	statePattern = statePatternTable[PROXIMITY];
}

void Enemy::Update() {

	(this->*statePattern)();

	statePattern = statePatternTable[SHOOTING];
	(this->*statePattern)();

	statePattern = statePatternTable[ELIMINATION];
	(this->*statePattern)();
}

void Enemy::Proximity() {
	printf("現在の敵の状態は近接です\n");
}

void Enemy::Shooting() {
	printf("現在の敵の状態は射撃です\n");
}

void Enemy::Elimination() {
	printf("現在の敵の状態は離脱です\n");
}