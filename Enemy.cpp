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
	printf("Œ»İ‚Ì“G‚Ìó‘Ô‚Í‹ßÚ‚Å‚·\n");
}

void Enemy::Shooting() {
	printf("Œ»İ‚Ì“G‚Ìó‘Ô‚ÍËŒ‚‚Å‚·\n");
}

void Enemy::Elimination() {
	printf("Œ»İ‚Ì“G‚Ìó‘Ô‚Í—£’E‚Å‚·\n");
}