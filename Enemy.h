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

private: //メンバ関数
	/// <summary>
	/// 近接
	/// </summary>
	void Proximity();
	/// <summary>
	/// 射撃
	/// </summary>
	void Shooting();
	/// <summary>
	/// 離脱
	/// </summary>
	void Elimination();
private: //メンバ変数
	static void(Enemy::*statePatternTable[])();
	void (Enemy::* statePattern)();
	
};

