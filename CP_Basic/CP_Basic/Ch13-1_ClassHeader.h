#pragma once

class Player
{
public:
	int ItemNum = 0;
	int PlayerEnergy = 0;
	char Weapon = ' '; // iostream / include ¾ÈÇÒ¶§ NULL ´ë½Å ºóÄ­À¸·Î

	void SetData();
	void PrintItemNum();
	void PrintEnergy();
	void PrintWeapon();
};