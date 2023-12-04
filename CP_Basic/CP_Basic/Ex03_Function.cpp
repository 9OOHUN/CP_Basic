#include "io.h"

// Absolute 문제
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

// 6. 다음은 수학능력시험 표준 점수의 상위 비율에 따른 등급표이다 표를 기반으로 프로그램을 작성하시오
//    (1) 상위 비율을 입력받은 후 등급을 출력하는 프로그램을 if else if 문만을 이용하여 작성하시오
void GradeHomeWork()
{
	cout << "▶ Insert Your Grade : ";

	int Rate = 0;
	cin >> Rate;

	cout << "▷ Your Class is : ";

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

// 백준 과제 안내신 분..? <- 배열

void Pr5597() {

	int arr[31] = { 0 };
	int A = 0;

	for (int i = 0; i < 28; i++) {
		cin >> A;
		arr[i] = 0;
	}

	for (int i = 1; i <= 30; i++) {
		if (!arr[i]) {
			cout << i << endl;
		}

	}

}
