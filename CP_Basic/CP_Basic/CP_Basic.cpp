#include "io.h"
#include "DefineFunction.h"

// �Լ� ���� ���� : main�Լ� ���� ����
void DefineFunction();

int main()
{
	/*
		// **�Ű����� ȣ��
		// ParameterFunction(10, 20);
		// ParameterFunction(30, 40);

		// **���ϰ� ȣ��
		//cout << 50 + ReturnFunction() << endl;

		// **�Ű����� + ���ϰ� ȣ��
		// cout << 30 + ParamReturn(10, 20) << endl;
		// cout << 30 + ParamReturn(30, 40) << endl;
		// cout << 30 + ParamReturn(50, 60) << endl;

		// **�迭
		// PrintArray();

		// SumArray();

		// ProcessScore();

		// **���� ����, ������ �迭
		// BubbleSort();
		// MultiArray();

		// **����ü
		// DefineStructure();
		// StructureArray();

		// **����ü
		// Enumeration();
		// EnumerationEnum();

		// 2023.11.23.
		// **�������� 01
		// **���� 162p ��� ���α׷��ֹ���
		// EvenOdd();
		// PrintEven();

		// StandardGrade();

		// **�������� 02
		// **���� 225p ��� ���α׷��ֹ���
		// ArraySum();
		// Reverse();
		// Sort();

		// 2023. 11. 24.
		// **�������� 03 ���� ����
		// cout << Absolute(-5);

		// GradeHomeWork();
		// GradeTest();

		// InputBall();
		DiceGame();

		// **2023. 11. 27.
		// **Ch11. ������

		// PonterVar();
		// PointerCalc(); // <- ������ ����
		// PointerArray(); // <- ������ �迭

		// **Ch12.���� �Ҵ�

		// DynamicAlloc();
		// DynamicAlloc2();
		// DynamicArray();
		// InputArraySize();

		// 2023. 11. 28.
		// **Ch13. Ŭ����
		// DefineClass();

		// PrintPlayer();
		// PrintAirplane();
		// DynamicAirplane();

		// **Ex06. Ŭ���� ��������
		// Score();

		// 2023. 11. 29.
		// **Ch14. �迭 Ŭ����
		// ArrayClass();

		// **Ch15. ���ڿ� Ŭ����
		// StringClass();

		// **Ch16. ���� Ŭ����
		// VectorClass();

		// **Ch17. �ߺ�����(�����ε�)
		//OverloadingFunction();

	*/

	// **Ex07. Ŭ���� ���� ��������
	// CRobotSpec();
	MemberShip();

}

// �Լ� ���� : main�Լ� �ڿ� ���Ǹ� �ؾ� ��
void DefineFunction()
{
	cout << "Hello Function" << endl;
}

	// ��Ʈ�� ����Ʈ�� ���� ����
	/*
		bit : ��ǻ�� ������ ������ �ּҴ���
		byte : ��ǻ�� ���� ������ �ּҴ���(8bit)
		1byte = 8bit

		2���� ���� ������ : 0,1
		���� ��� �⺻������ �����ϸ� ����
		1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
		2^0 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 ������ ����ϸ� ����, 256(2^8) ���̾� = 8bit(1byte)
		�����ڵ� UTF-8 : õ�ڹ����� ��� Ŀ�� ���� 2byte(16bit) = 2^16���� ������ ���� ǥ���
		Ʈ���÷� : 2^24(24bit) RGB ����ȥ��(������ �����), ������ ����ȥ��(������ ��ο���)
		- R 8bit(1byte), G 8bit, B 8bit = 24bit
		��ǥ��, ���� ǥ��, �������ּ� ǥ�� : 1byte(8bit) �������� Ȯ��

		= : ���ʿ� ����, �����ʿ� �����Ͱ����� [����, �Ҵ�(assign)]�̶�� ������ ���(����ó�� �����ϴ� �ƴ�)
		% : ����������
	*/