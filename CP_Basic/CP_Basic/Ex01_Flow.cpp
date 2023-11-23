#include "io.h"

// **���� 162p ��� ���α׷��ֹ���

// 1. if~else�� �̿��Ͽ� �Է¹��� ������ ¦��/Ȧ�� ���θ� ���
void EvenOdd()
{
	int Number = 0;
	cin >> Number;

	if (Number % 2 == 0) { // <-¦/Ȧ�� �ǰ��� �ٺ��ڵ�
		cout << "¦��" << endl;
	}
	else {
		cout << "Ȧ��" << endl;
	}
} // ���� �������� ������ ���긹��, ����� �ֱ�

/* 2. �޾ƾ���� 10������ �̷������ ���� 10���� 100�� �����̴�.
	�޾ƾ��� ������ �Է¹��� �� ����� ����ϴ� ���α׷� switch ���� �̿��Ͽ� �ۼ��Ͻÿ�!
	(A:100, B:80~90, C:50~70, D:10~40, F:0) */ 
/*
void() // homework?
{
	int NumTest = 0;
	cin >> NumTest;
}
*/

// 5. for, if, continue Ű���带 ����Ͽ� 1~100���� ¦���� ���
//	continue : continue Ű���� ������ �ڵ带 �������� �ʰ� ���(����) (break�� ���)
void PrintEven()
{
	// 1��° ��� (¦���� ����ϰ�, �ƴϸ� �ǳ� �پ�� : ��Ƽ���� ���� �ʿ����, else ���� ������ ��)
	/*
	for (int i = 1; i <= 100; i++) {
	if (i % 2 == 0) {
			cout << i << endl;
		}
		else {
			continue;
		}
	}
	*/

	// 2��° ��� (��Ƽ�� ���ػ�� ver)
	/*
	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) {
			continue;
		}
		else {
			cout << i << endl;
		}
	}
	*/
	
	// 3��° ��� (��Ƽ�� Ȱ�� best)

	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) {
			continue;
		}
		cout << i << endl;
	}
}

// 6. ������ ���дɷ½��� ǥ�� ������ ���� ������ ���� ���ǥ�̴� ǥ�� ������� ���α׷��� �ۼ��Ͻÿ�
//    (1) ���� ������ �Է¹��� �� ����� ����ϴ� ���α׷��� if else if ������ �̿��Ͽ� �ۼ��Ͻÿ�
//		-> Ex03.cpp�� ����
void Grade()
{
	cout << "�� Insert Your Rate : ";
	
}

//    (2) ǥ�� ����� �Է¹޾� 100��� ��� �� ������ ��� (4��� / ��� 31.5���Դϴ�)
//			*���۰� + ���� / 2 = �߰��� (ex. 4��� : 23% ~ 40% = 31.5 <-�߰���)
void Median(float StartNumber, float EndNumber)
{
	cout << "�� Your Average Score is : " << (StartNumber + EndNumber) / 2 << endl;
}

void StandardGrade()
{
	cout << "�� Insert Your Standard Grade : ";

	int Grade = 0;
	cin >> Grade;

	switch (Grade) {
		case 1:
			Median(0, 4);
			break;
		case 2:
			Median(4, 11);
			break;
		case 3:
			Median(11, 23);
			break;
		case 4:
			Median(23, 40);
			break;
		case 5:
			Median(40, 60);
			break;
		case 6:
			Median(60, 77);
			break;
		case 7:
			Median(77, 89);
			break;
		case 8:
			Median(89, 96);
			break;
		case 9:
			Median(96, 100);
			break;
	}
}
