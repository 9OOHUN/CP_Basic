#include "io.h"
#include "Ch13-2_Airplane.h"

// 13-2 Ŭ���� ����� �޼ҵ� ����

Airplane::Airplane()	// ������
{
	Energy = 0;
	SpecialBombNum = 0;	// <- ���⼭ ���� �ʱ�ȭ
	Distance = 0;

	cout << "Class Contruct" << endl;
}

Airplane::Airplane(int EnergyNumber01, int BombNumber01) // �Ű����� ������
{
	Energy = EnergyNumber01;
	SpecialBombNum = BombNumber01;

	cout << "Class Parameter Construct" << endl;
}

Airplane::~Airplane()	// �Ҹ���
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