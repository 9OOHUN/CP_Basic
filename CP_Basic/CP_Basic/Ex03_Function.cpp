#include "io.h"

// Absolute ����
int Absolute(int Number)
{
	int Result = 0;
	
	if (Number < 0) {
		Result = Number * -1; // or return (Number * -1);
	}
	else {
		Result = Number;
	}
	return Result;
}

// 6. ������ ���дɷ½��� ǥ�� ������ ���� ������ ���� ���ǥ�̴� ǥ�� ������� ���α׷��� �ۼ��Ͻÿ�
//    (1) ���� ������ �Է¹��� �� ����� ����ϴ� ���α׷��� if else if ������ �̿��Ͽ� �ۼ��Ͻÿ�
void GradeHomeWork()
{
	cout << "�� Insert Your Grade : ";

	int Rate = 0;
	cin >> Rate;

	cout << "�� Your Class is : ";

	if (Rate > 0, Rate < 4) {
		cout << 1;
	}
	else if (Rate > 4, Rate < 11) {
		cout << 2;
	}
	else if (Rate > 11, Rate < 23) {
		cout << 3;
	}
	else if (Rate > 23, Rate < 40) {
		cout << 4;
	}
	else if (Rate > 40, Rate < 60) {
		cout << 5;
	}
	else if (Rate > 60, Rate < 77) {
		cout << 6;
	}
	else if (Rate > 77, Rate < 89) {
		cout << 7;
	}
	else if (Rate > 89, Rate < 96) {
		cout << 8;
	}
	else if (Rate > 96, Rate < 100) {
		cout << 9;
	}
	else {
		cout << "F";
	}

}

// 255p. 2. ������ �� �л��� ����, ����, ���� �����̴�. �� �л��� ������ ���ϰ�, �� ���� ����� ����Ͻÿ�.
void TotalScore()
{
	int SubK = 0;
	int SubE = 0;
	int SubM = 0;

	int Total = SubK + SubE + SubM;
	cout << Total << endl;
}

void SubAverage()
{
	int Class01 = 0;
	int Class02 = 0;
	int Class03 = 0;
}

int SubK[4];
int SubE[4];
int SubM[4];
