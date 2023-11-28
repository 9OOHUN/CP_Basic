#include "io.h"
#include "Ex06_ScoreClass.h"

/*
	Ex03_Function�� 255p. 2. �������� => Ŭ���� + ����ü + ������
	- �� �л��� ��,��,�� ������ �̿��ؼ� �� �л��� ������ ����� ���

	������� : 90~100 : A, 80~89 : B, 70~79 : C, 60~69 : D, ������ F

	  St | Ko  | En  | Ma |
	  W  | 100 | 100 | 50 |
	  X  |  90 |  70 | 80 |
	  Y  |  70 |  80 | 90 |
	  Z  |  80 | 100 | 90 |
*/

void Score()
{
	Student st01('W', 100, 100, 50);
	Student st02('X', 90, 70, 80);
	Student st03('Y', 70, 80, 90);
	Student st04('Z', 80, 100, 90);

	st01.OperationTotal();
	st01.OperationAverage();
	st01.OperationGrade();
	st01.PrintScore();
	cout << endl;

	st02.OperationTotal();
	st02.OperationAverage();
	st02.OperationGrade();
	st02.PrintScore();
	cout << endl;

	st03.OperationTotal();
	st03.OperationAverage();
	st03.OperationGrade();
	st03.PrintScore();
	cout << endl;

	st04.OperationTotal();
	st04.OperationAverage();
	st04.OperationGrade();
	st04.PrintScore();
}

// �ڵ� => ����/���� => Refactoring