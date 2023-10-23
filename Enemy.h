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

private: //ƒƒ“ƒoŠÖ”
	/// <summary>
	/// ‹ßÚ
	/// </summary>
	void Proximity();
	/// <summary>
	/// ËŒ‚
	/// </summary>
	void Shooting();
	/// <summary>
	/// —£’E
	/// </summary>
	void Elimination();
private: //ƒƒ“ƒo•Ï”
	static void(Enemy::*statePatternTable[])();
	void (Enemy::* statePattern)();
	
};

