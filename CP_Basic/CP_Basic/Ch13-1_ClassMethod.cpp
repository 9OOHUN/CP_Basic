#include "io.h"
#include "Ch13-1_ClassHeader.h" // Ŭ���� ����������� ����

void Player::SetData() // Ŭ���� ����� ����
{
	ItemNum = 10;
	PlayerEnergy = 100;
	Weapon = 'G';
}

void Player::PrintItemNum() // Ŭ������ ���Ե� �Լ� ����Ѵٴ� ����
{
	cout << ItemNum << endl;
}

void Player::PrintEnergy()
{
	cout << PlayerEnergy << endl;
}

void Player::PrintWeapon()
{
	cout << Weapon << endl;
}