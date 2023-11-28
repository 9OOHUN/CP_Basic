#include "io.h"
#include "Ch13-1_ClassHeader.h" // 클래스 선언헤더파일 포함

void Player::SetData() // 클래스 헤더의 내부
{
	ItemNum = 10;
	PlayerEnergy = 100;
	Weapon = 'G';
}

void Player::PrintItemNum() // 클래스에 포함된 함수 사용한다는 수식
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