#include "io.h"

void IfFunctionDesc()
{
	// ★2023. 11. 21. 분기문(조건문) 시작

	int Condition1 = 100;

	/*
		if가 포함하는 조건식의 원리
		: 결과값이 bool 데이터
		조건식의 종류
		- 비교연산식
		- bool 데이터
		- 산술 연산식
	*/

	if (Condition1 >= 50) {
		// 참일때 실행구문, 조건식 외에 다른 데이터도 넣을 수 잇음
		cout << Condition1 << endl;
	}

	if (true) {} //:무조건 실행
	if (false) {}
	if (1) {} //:true로 인식함
	if (0) {}
	if (20) {} // 0 : false , 이외의 정수를 모두 : true / 가능함
	int Condition2 = 10;
	if (Condition2 + 5) {}
	if (Condition1 >= 50 && Condition2 <= 10) {}
}

void IfFunctionEx01()
{
	// 연습문제1 : A,B 두 수를 입력 받아 비교해서 결과 출력
		// 출력 : A>B => ">" , A<B => "<" , A=B => "=="
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
	/* 연습문제2 :
	   시험점수 90~10 : A, 80~89:B, 70~79:C, 60~69:D, 60미만:F
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
		if(조건식1){
			// 조건식1이 참일 때 실행 구문
		}

		if(조건식2){
			// 조선식2가 참일 때 실행 구문
		} else {
			// 조건식2가 거짓일 때 실행 구문
		}

		if(조건식3){
			// 조건식3이 참일 때 실행 구문
		} else if(조건식4){
			// 조건식4가 참일 때 실행 구문
		} else if(조건식5){
			// 조건식5가 참일 때 실행 구문
		} else {
			// 조건식이 모두 거짓일 때 실행 구문
		}
	*/
}

void IfNestEx01()
{
	/* 연습문제 :
	   상점에서 도둑이 들었는데, 목격자가 인상착의를 말했다.
	   인상착의 : 키는 180 이상, 옷은 검정색이었다고 말했다.
	   범인을 찾는 조건문을 작성하시오
	   옷색 입력값 : Black = B, White = W, Red = R ...
	*/

	int TallNumber = 0;
	char ClothColor = NULL; // NULL : 문자값이 존재하지 않는 공백

	//cin >> TallNumber;
	//cin >> ClothColor;

	// TallNumber >= 180
	// ClothColor == B

	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "범인" << endl;
	}
	else if (TallNumber >= 180 || ClothColor == 'B') {
		cout << "용의자" << endl;
	}
	else {
		cout << "시민" << endl;
	}
}

void IfNestEx02()
{
	// 위 연습문제에서 둘 중 하나 조건만 해당될때 중첩예제

	/*
		if를 중첩해서 사용하는 경우 (중첩사용)

		if(조건식1){
			// 참일때 실행
			if(조건식2){
			}
		}
	*/

	int TallNumber = 0;
	char ClothColor = NULL;

	if (TallNumber >= 180) {
		if (ClothColor == 'B') {
			cout << "범인" << endl;
		}
		else {
			cout << "용의자" << endl;
		}
	}
	else {
		if (ClothColor == 'B') {
			cout << "용의자" << endl;
		}
		else {
			cout << "시민" << endl;
		}
	}
}

void SwitchEx()
{
	// switch ~ case
	/*
	*  switch가 포함하는 수식의 결과값
	* : 정수, 문자

	   switch(수식){
		   case 결과값1 :
				실행구문
		   case 결과값2
				실행구문2
		   ...
	   }
	*
	*/

	// 요일 번호를 입력받아 해당 번호의 요일 이름을 출력
	// 0:일요일 ~ 6:토요일
	int DayNum = 0;
	cout << "요일번호를 입력해주세요 [0~6] : ";
	//cin >> DayNum;

	switch (DayNum) {
	case 0:
		cout << "일요일" << endl;
		break;
	case 1:
		cout << "월요일" << endl;
		break;
	case 2:
		cout << "화요일" << endl;
		break;
	case 3:
		cout << "수요일" << endl;
		break;
	case 4:
		cout << "목요일" << endl;
		break;
	case 5:
		cout << "금요일" << endl;
		break;
	case 6:
		cout << "토요일" << endl;
	}
}