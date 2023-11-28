#include "io.h"
#include "Ch13-2_Airplane.h"

// 13-2 클래스 헤더의 메소드 정의

Airplane::Airplane()	// 생성자
{
	Energy = 0;
	SpecialBombNum = 0;	// <- 여기서 변수 초기화
	Distance = 0;

	cout << "Class Contruct" << endl;
}

Airplane::Airplane(int EnergyNumber01, int BombNumber01) // 매개변수 생성자
{
	Energy = EnergyNumber01;
	SpecialBombNum = BombNumber01;

	cout << "Class Parameter Construct" << endl;
}

Airplane::~Airplane()	// 소멸자
{
	cout << "Class Destruct" << endl;
}

void Airplane::SetEnergy(int EnergyNumber)
{
	Energy = EnergyNumber;
}

int Airplane::GetEnergy()
{
	return Energy;
}


void Airplane::SetBomb(int BombNumber)
{
	SpecialBombNum = BombNumber;
}

int Airplane::GetBomb()
{
	return SpecialBombNum;
}

void Airplane::PrintEnergy()
{
	cout << Energy << endl;
}

void Airplane::PrintBomb()
{
	cout << SpecialBombNum << endl;
}