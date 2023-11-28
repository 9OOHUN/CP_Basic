#pragma once

class Airplane
{
private:				// ���� ������ �����̺�����(����Ʈ �����̺� ������ ����)
	int Energy;
	int SpecialBombNum;
	int Distance;

public:					// �Լ��� �ۺ�, �Լ� �����ؾ��ϱ� ������
	
	int Temp;
	// Ŭ���� ���� ����� ����1�� ���� => Ŭ������ ���� �ʱ�ȭ
	Airplane();	// <- �⺻ ������(Default Constructor) Ÿ�� �Ⱦ�
	// �� �Լ� ���� cpp���� ���� ���� �ʱ�ȭ �� �ۼ��ؾ���

	// �� �Ű����� ������ / ���� �⺻�����ڵ� ���� ���ֱ�
	Airplane(int EnergyNumber01, int BombNumber01);
	// �� �Ű����� ���� �޾Ƽ� Ŭ���� �ʱ�ȭ �� �� ���

	~Airplane(); // <- �Ҹ���(Destuctor) ���� ������� ������ ����,�Ҹ� ����

	void SetEnergy(int EnergyNumber);	// <- �����̺��̶� �Ϲ��Լ����� ������ ������ �������ؼ� Set�� Get ���
	int GetEnergy();	// <- �� ��ȿ�� üũ ��� ���� �� ���� (���� ����)����
	// ex. ������� �ܰ� 10���ε� 100�� ������ �Ҷ� üũ�ϴ� ��ó��
	void SetBomb(int BombNumber);
	int GetBomb();

	void PrintEnergy();
	void PrintBomb();
}; // <- Ŭ���� �ڿ��� ;�� ��