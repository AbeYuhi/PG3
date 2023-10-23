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
	printf("���݂̓G�̏�Ԃ͋ߐڂł�\n");
}

void Enemy::Shooting() {
	printf("���݂̓G�̏�Ԃ͎ˌ��ł�\n");
}

void Enemy::Elimination() {
	printf("���݂̓G�̏�Ԃ͗��E�ł�\n");
}