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

		// **�������� 01 23.11.23.
		// **���� 162p ��� ���α׷��ֹ���
		// EvenOdd();
		// PrintEven();
	
		// StandardGrade();
	
		// **�������� 02 23. 11. 23.
		// **���� 225p ��� ���α׷��ֹ���
		// ArraySum();
		// Reverse();
		// Sort();
	*/	

	// **�������� 03 ���� ����
	// cout << Absolute(-5);

	// GradeHomeWork();
	// GradeTest();

	

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
		- R 8bit, G 8bit, B 8bit = 24bit
		��ǥ��, ���� ǥ��, �������ּ� ǥ�� : 1byte(8bit) �������� Ȯ��

		= : ���ʿ� ����, �����ʿ� �����Ͱ����� [����, �Ҵ�(assign)]�̶�� ������ ���(����ó�� �����ϴ� �ƴ�)
		% : ����������
	*/