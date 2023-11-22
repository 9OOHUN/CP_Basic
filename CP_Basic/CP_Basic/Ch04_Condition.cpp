#include "io.h"

void IfFunctionDesc()
{
	// ��2023. 11. 21. �б⹮(���ǹ�) ����

	int Condition1 = 100;

	/*
		if�� �����ϴ� ���ǽ��� ����
		: ������� bool ������
		���ǽ��� ����
		- �񱳿����
		- bool ������
		- ��� �����
	*/

	if (Condition1 >= 50) {
		// ���϶� ���౸��, ���ǽ� �ܿ� �ٸ� �����͵� ���� �� ����
		cout << Condition1 << endl;
	}

	if (true) {} //:������ ����
	if (false) {}
	if (1) {} //:true�� �ν���
	if (0) {}
	if (20) {} // 0 : false , �̿��� ������ ��� : true / ������
	int Condition2 = 10;
	if (Condition2 + 5) {}
	if (Condition1 >= 50 && Condition2 <= 10) {}
}

void IfFunctionEx01()
{
	// ��������1 : A,B �� ���� �Է� �޾� ���ؼ� ��� ���
		// ��� : A>B => ">" , A<B => "<" , A=B => "=="
	int NumA = 0;
	int NumB = 0;

	//cin >> NumA;
	//cin >> NumB;

	if (NumA > NumB) {
		cout << ">" << endl;
	}
	else if (NumA < NumB) {
		cout << "<" << endl;
	}
	else {
		cout << "==" << endl;
	}
}

void IfFunctionEx02(int NumTest)
{
	/* ��������2 :
	   �������� 90~10 : A, 80~89:B, 70~79:C, 60~69:D, 60�̸�:F
	*/

	//int NumTest = 0;
	//cin >> NumTest;

	if (NumTest >= 90) {
		cout << "A" << endl;
	}
	else if (NumTest >= 80) {
		cout << "B" << endl;
	}
	else if (NumTest >= 70) {
		cout << "C" << endl;
	}
	else if (NumTest >= 60) {
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}
}

void IfNestDesc()
{
	/*
		if(���ǽ�1){
			// ���ǽ�1�� ���� �� ���� ����
		}

		if(���ǽ�2){
			// ������2�� ���� �� ���� ����
		} else {
			// ���ǽ�2�� ������ �� ���� ����
		}

		if(���ǽ�3){
			// ���ǽ�3�� ���� �� ���� ����
		} else if(���ǽ�4){
			// ���ǽ�4�� ���� �� ���� ����
		} else if(���ǽ�5){
			// ���ǽ�5�� ���� �� ���� ����
		} else {
			// ���ǽ��� ��� ������ �� ���� ����
		}
	*/
}

void IfNestEx01()
{
	/* �������� :
	   �������� ������ ����µ�, ����ڰ� �λ����Ǹ� ���ߴ�.
	   �λ����� : Ű�� 180 �̻�, ���� �������̾��ٰ� ���ߴ�.
	   ������ ã�� ���ǹ��� �ۼ��Ͻÿ�
	   �ʻ� �Է°� : Black = B, White = W, Red = R ...
	*/

	int TallNumber = 0;
	char ClothColor = NULL; // NULL : ���ڰ��� �������� �ʴ� ����

	//cin >> TallNumber;
	//cin >> ClothColor;

	// TallNumber >= 180
	// ClothColor == B

	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "����" << endl;
	}
	else if (TallNumber >= 180 || ClothColor == 'B') {
		cout << "������" << endl;
	}
	else {
		cout << "�ù�" << endl;
	}
}

void IfNestEx02()
{
	// �� ������������ �� �� �ϳ� ���Ǹ� �ش�ɶ� ��ø����

	/*
		if�� ��ø�ؼ� ����ϴ� ��� (��ø���)

		if(���ǽ�1){
			// ���϶� ����
			if(���ǽ�2){
			}
		}
	*/

	int TallNumber = 0;
	char ClothColor = NULL;

	if (TallNumber >= 180) {
		if (ClothColor == 'B') {
			cout << "����" << endl;
		}
		else {
			cout << "������" << endl;
		}
	}
	else {
		if (ClothColor == 'B') {
			cout << "������" << endl;
		}
		else {
			cout << "�ù�" << endl;
		}
	}
}

void SwitchEx()
{
	// switch ~ case
	/*
	*  switch�� �����ϴ� ������ �����
	* : ����, ����

	   switch(����){
		   case �����1 :
				���౸��
		   case �����2
				���౸��2
		   ...
	   }
	*
	*/

	// ���� ��ȣ�� �Է¹޾� �ش� ��ȣ�� ���� �̸��� ���
	// 0:�Ͽ��� ~ 6:�����
	int DayNum = 0;
	cout << "���Ϲ�ȣ�� �Է����ּ��� [0~6] : ";
	//cin >> DayNum;

	switch (DayNum) {
	case 0:
		cout << "�Ͽ���" << endl;
		break;
	case 1:
		cout << "������" << endl;
		break;
	case 2:
		cout << "ȭ����" << endl;
		break;
	case 3:
		cout << "������" << endl;
		break;
	case 4:
		cout << "�����" << endl;
		break;
	case 5:
		cout << "�ݿ���" << endl;
		break;
	case 6:
		cout << "�����" << endl;
	}
}