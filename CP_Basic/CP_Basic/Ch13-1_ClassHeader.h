#pragma once

class Player
{
public:
	int ItemNum = 0;
	int PlayerEnergy = 0;
	char Weapon = ' '; // iostream / include ���Ҷ� NULL ��� ��ĭ����

	void SetData();
	void PrintItemNum();
	void PrintEnergy();
	void PrintWeapon();
};