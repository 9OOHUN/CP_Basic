#include "io.h"
#include "Ch13-1_ClassHeader.h"
#include "Ch13-2_Airplane.h"

// Ŭ������ �ν��Ͻ�/��ü�� ��� ���� û����(�Լ� �ۿ� ����)
// Ŭ���� ��ü�� ��� ���Ͽ� �־������ ��� ����!
// Ŭ���������� ���� ���� �ϰ� ��� ���Ǵ� �ٸ� ������ ���(�޼ҵ� ����, ��)
	/*
		����,�Ӽ� : ������Ƽ(����) - ũ��, ��, ���� ��
		���� : �޼ҵ�(�Լ�) - ����, ����, ��/�� ��

		*���� ����
		- ������ ������ ��𿡼� ������� ��� ���� ����
		(1) Ŭ���� ���ο����� ��밡�� ��� : private
		(2) Ŭ���� �ܺο����� ��밡�� ��� : public
		(3) ��ӵ� Ŭ�������� ��밡�� ��� : protected

		*private, public, protected Ű���� ����ؼ� ���� ����
		- Ű���带 ������� ������, default = private 
	*/

class Car // �빮�� �������� ���ֱ�(�Ľ�Į ����)
{
public: // <- �Ʒ� ���� ������ ���� Ű����
	char Size = NULL;
	char Color = NULL;
	float Weight = 0.0f; // <- f ���̴� ���� : float �ǹ�

	void MoveFoward()
	{
		cout << "Move Foward " << Size << endl;
	}
	void MoveBackward()
	{
		cout << "Move Backward" << endl;
	}
	void Break()
	{
		cout << "Break" << endl;
	}
};

void DefineClass()
{	
	Car Ray;

	Ray.Size = 'S'; // (S)mall, (M)idium, (L)arge

	Ray.MoveFoward();

}

// Ŭ���� ������� �̿� (13-1)

void PrintPlayer() // Ŭ���� ����� �ܺ�
{
	Player Pino;

	Pino.SetData();

	Pino.PrintEnergy();
	Pino.PrintItemNum();
	Pino.PrintWeapon();

	Pino.ItemNum = 5; // ���γ� �ܺγ� ����, ������ ���̷�Ʈ�� �����ϳ� ���ϳ�
	Pino.PrintItemNum();
}


// Ŭ���� Ȱ�� (13-2)

void PrintAirplane()
{
	Airplane F16;	// <- F�� �ִ� ���� ���� : ���� �ʱ�ȭ ���� ����/Ŭ���� �ʱ�ȭ �������
											// �� ������ : Ŭ���� �ʱ�ȭ '�Լ�'
	F16.SetEnergy(100);						// Constructor
	F16.SetBomb(10);

	F16.PrintEnergy();
	F16.PrintBomb();

	cout << endl;

	F16.SetEnergy(F16.GetEnergy() - 30); // ��ź������ -30
	F16.SetBomb(F16.GetBomb() - 3); // ��ź ���� -3

	F16.PrintEnergy();
	F16.PrintBomb();

	// �Ű����� ������ Ȱ��(Parameter Construct)
	Airplane KF21(100, 20); // <- ����cpp���� ������ �Ű����� �Լ����� ���� �ۼ�
	// �⺻ Ŭ���� ȣ���ϸ� �⺻������ Ȱ��, ��ó�� �Ű����� ���� �Ű����� ������ ��

	KF21.PrintEnergy();
	KF21.PrintBomb();

	cout << endl;

	KF21.SetEnergy(F16.GetEnergy() - 30);
	KF21.SetBomb(F16.GetBomb() - 3);
	
	KF21.PrintEnergy();
	KF21.PrintBomb();
}

// Ŭ���� ��/���� Ȱ��

void DynamicAirplane()
{
	Airplane Boeing(300, 2); // ���� ����

	Boeing.PrintEnergy();

//-----------------------------------------------------//

	Airplane* A10 = new Airplane; // ���� ����(Ŭ������ ���� ����)/������ ���

	A10->PrintEnergy(); // Ŭ���� ���� ���� -> ���
	A10->Temp = 0;

	// ���� Ȱ��
	Airplane* A30 = new Airplane(300,4);

	A30->PrintEnergy();
	A30->PrintBomb();

	delete A10;	// ���� ������ ���������� ������� ��.
	delete A30;
	// C++ ������ �÷��� : ���� ���� ���ؼ� ���� �޸𸮵��� �ڵ����� �������ִ� ��, ����
}