#include "io.h"

void PrintArray()
{
	int ArrayNumber[3] = { 1,2,3 };

	cout << ArrayNumber[0] << endl;

	// �迭 �ε��� ����ȣ�� �ڵ� : 1~3����, �ε����� 0���� ����

	for (int i = 0; i < 3; i++) {
		cout << ArrayNumber[i];
	}

	// �迭 �����͸� ó�� ������ �ƴ� ���߿� �����ϴ� ��� : �ݺ��� Ȱ��

	int ArrayInit[3];

	for (int i = 0; i < 3; i++) {
		ArrayInit[i] = i + 10;
	}

	// �� �ε��� ä�m���� ��� �ڵ� �� �ۼ������ ��

	for (int i = 0; i < 3; i++) {
		cout << ArrayInit[i];
	}

	cout << endl;  // <-�ٹٲ�

	// �����迭�� �ƴ� ���ڸ� �ٷ�� ĳ���͹迭���� �ۼ����

	char Word[] = {'H','e','l','l','o',' ','W','o','r','l','d'};
	//     �ε��� :  1   2   3   4   5   6   7   8   9   10  11

	cout << Word[0] << endl;

	for (int i = 0; i < 11; i++) {
		cout << Word[i];
	} cout << endl;
}

void SumArray()
{
	



	// Ch05 - ForFunctionEx03
	// �������� : �ݺ�Ƚ���� �Է� �ް�, �ݺ� �ɶ����� �� �� A,B�� �Է¹޾� A+B�� ������� ǥ��

	int IterNumber = 5;
	int IterA = 0;
	int IterB = 0;

	//cin >> IterNumber;

	int IterArray[5];


	for (int i = 0; i < IterNumber; i++) {
		cin >> IterA;
		cin >> IterB;
		
		IterArray[i] = IterA + IterB;
	}

	for (int i = 0; i < IterNumber; i++) {
		cout << IterArray[i] << " : ";
	}
}

// ���� ǥ�� �Լ�
char Grade(int NumTest)
{
	/* Ch04 - IfFunctionEx02 �迭���� Ȱ���
	   �������� 90~10 : A, 80~89:B, 70~79:C, 60~69:D, 60�̸�:F
	*/
	
	char GradeCharacter = NULL;

	if (NumTest >= 90) {
		GradeCharacter = 'A';
	}
	else if (NumTest >= 80) {
		GradeCharacter = 'B';
	}
	else if (NumTest >= 70) {
		GradeCharacter = 'C';
	}
	else if (NumTest >= 60) {
		GradeCharacter = 'D';
	}
	else {
		GradeCharacter = 'F';
	}
	
	return GradeCharacter;

	// �� ���� ó�� �Լ� �߰�
}

// ���� ó�� �Լ�
void ProcessScore()
{
	int Score[5] = { 95, 85, 55, 67, 73 };
	char GradeChracter1[5];

	for (int i = 0; i < 5; i++) {
		GradeChracter1[i] = Grade(Score[i]);
	}

	for (int i = 0; i < 5; i++) {
		cout << GradeChracter1[i] << " = ";
	}
}

/*
	�� ������ A�� ǥ���ϴ� ǥ�� �Լ��� �̸� �ۼ��ϰ�,
	���� ó�� �Լ��� ���� ������ �迭�� �Է�,
	���� ǥ�� �Լ����� A�� ǥ�� �� ����-���Ͻ� A�� �����ϱ� ���� char ���� ����
	�ٽ� ���� ó�� �Լ����� ����� char�� �ҷ��ͼ�(for�� 5�� �ݺ�)
	5���� A�������� ��ȯ
*/ 

// ���ڿ� �Լ�
void stringArray()
{
	char Word[6] = "Hello";

	char Word1[7] = "Bubble";
}

// ���� ���� (Sort)
void BubbleSort() {
	// ���� ���� 10��

	int Number[10] = { 3,6,8,1,10,4,2,5,9,7 };
	int Temp = 0;

	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < i; j++) {

			if (Number[j] > Number[j+1]) {
				// ���ؼ� �ٲٱ�
				Temp = Number[j];
				Number[j] = Number[j + 1];
				Number[j + 1] = Temp;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << Number[i] << " | ";
	}
}

// 2���� �迭
void MultiArray()
{
	int Number[2][3] = { {1,2,3},{4,5,6} }; // <- ���� �� �ڰ� ��
	/*
		 �� ���� �����͸� ǥ�� �ۼ��ϸ�
			1, 2, 3
			4, 5, 6  <- ������� �Է�(���� �ٹٲ� ����)
	*/

	// �� 2���� �迭 ����ϴ� ���
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << Number[i][j] << " : ";
		}
	}

}