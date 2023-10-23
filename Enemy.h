#pragma once
#include<iostream>

class Enemy
{
public:
	Enemy();
	~Enemy();

	enum Phase {
		PROXIMITY,
		SHOOTING,
		ELIMINATION
	};

	void Initialize();

	void Update();

private: //�����o�֐�
	/// <summary>
	/// �ߐ�
	/// </summary>
	void Proximity();
	/// <summary>
	/// �ˌ�
	/// </summary>
	void Shooting();
	/// <summary>
	/// ���E
	/// </summary>
	void Elimination();
private: //�����o�ϐ�
	static void(Enemy::*statePatternTable[])();
	void (Enemy::* statePattern)();
	
};

