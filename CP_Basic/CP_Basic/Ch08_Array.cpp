#include "io.h"

void PrintArray()
{
	int ArrayNumber[3] = { 1,2,3 };

	cout << ArrayNumber[0] << endl;

	// 배열 인덱스 연속호출 코드 : 1~3부터, 인덱스는 0부터 시작

	for (int i = 0; i < 3; i++) {
		cout << ArrayNumber[i];
	}

	// 배열 데이터를 처음 선언이 아닌 나중에 선언하는 방법 : 반복문 활용

	int ArrayInit[3];

	for (int i = 0; i < 3; i++) {
		ArrayInit[i] = i + 10;
	}

	// ↑ 인덱스 채웟으면 출력 코드 또 작성해줘야 함

	for (int i = 0; i < 3; i++) {
		cout << ArrayInit[i];
	}

	cout << endl;  // <-줄바꿈

	// 정수배열이 아닌 문자를 다루는 캐릭터배열변수 작성방법

	char Word[] = {'H','e','l','l','o',' ','W','o','r','l','d'};
	//     인덱스 :  1   2   3   4   5   6   7   8   9   10  11

	cout << Word[0] << endl;

	for (int i = 0; i < 11; i++) {
		cout << Word[i];
	} cout << endl;
}

void SumArray()
{
	



	// Ch05 - ForFunctionEx03
	// 연습문제 : 반복횟수를 입력 받고, 반복 될때마다 두 수 A,B를 입력받아 A+B의 결과값을 표시

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

// 성적 표시 함수
char Grade(int NumTest)
{
	/* Ch04 - IfFunctionEx02 배열변수 활용안
	   시험점수 90~10 : A, 80~89:B, 70~79:C, 60~69:D, 60미만:F
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

	// ↓ 성적 처리 함수 추가
}

// 성적 처리 함수
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
	↑ 성적을 A로 표시하는 표시 함수를 미리 작성하고,
	성적 처리 함수에 실제 점수를 배열로 입력,
	성적 표시 함수에서 A로 표시 및 리턴-리턴시 A를 저장하기 위해 char 변수 선언
	다시 성적 처리 함수에서 저장된 char을 불러와서(for로 5번 반복)
	5명의 A성적으로 변환
*/ 

// 문자열 함수
void stringArray()
{
	char Word[6] = "Hello";

	char Word1[7] = "Bubble";
}

// 버블 정렬 (Sort)
void BubbleSort() {
	// 숫자 개수 10개

	int Number[10] = { 3,6,8,1,10,4,2,5,9,7 };
	int Temp = 0;

	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < i; j++) {

			if (Number[j] > Number[j+1]) {
				// 비교해서 바꾸기
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

// 2차원 배열
void MultiArray()
{
	int Number[2][3] = { {1,2,3},{4,5,6} }; // <- 앞이 행 뒤가 열
	/*
		 ↑ 위의 데이터를 표로 작성하면
			1, 2, 3
			4, 5, 6  <- 행단위로 입력(가로 줄바꿈 형식)
	*/

	// ↓ 2차원 배열 출력하는 방법
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << Number[i][j] << " : ";
		}
	}

}