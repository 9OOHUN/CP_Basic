#include "io.h"

void Variable()
{
	int Number1; // 변수 선언만 함
	Number1 = 10;

	int Number2 = 10; // 변수 선언 및 초기화

	int Number3 = 1, Number4 = 2;

	Number3 = 5;

	// 심볼릭 상수(Constant)
	const int Number5 = 10;

	// Number5 = 30; //값을 수정 할 수 없음

	// 데이터 타입 - 숫자 데이터 타입 - 정수형, 실수형

	// 정수형 타입(int : integer)
	int NUM1 = 10;
	short NUM2 = 10;
	long NUM3 = 10;

	// 실수형 타입(float)
	float NUM10 = 1.234f;
	double NUM11 = 1.234;

	// 문자 데이터 : 문자(1개), 문자열(2개이상)
	// char : character
	// char  타입 문자 표현 : '' 사용
	// 문자열 : "" 사용
	char Letter = 'a';

	// bool 타입 데이터
	// 참/거짓 구분 : True/False, Yes/No, On/Off
	bool Condition = true;

	// auto 선언 키워드
	auto AutoNum = 10;

	cout << Number1 << endl;
}