#include "io.h"

void Arithmetic()
{
	// 산술 연산자
	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;
}

void Increment()
{
	// 증감 연산자 : 증가,감소 연산으로 반복 실행의 개념이 포함
	int Inc = 30;

	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;

	Inc = Inc + 3;
	Inc += 3;

	Inc = Inc + 1;
	Inc += 1; // 개수 살때 많이 씀(카운터)
	Inc++; // C => C++ => C++++

	Inc = Inc - 1;
	Inc -= 1;
	Inc--;

	Inc = Inc * 3;
	Inc *= 3;
	Inc /= 3;
	Inc %= 3;
}

void CompareFunction()
{
	// 비교 연산자
	int Compare1 = 10;
	int Compare2 = 20;

	// > : 크다, < : 작다 => 프로그램에선 방향이 고정
	cout << (Compare1 > Compare2) << endl;
	cout << (Compare1 < Compare2) << endl;
	cout << (Compare1 >= 100) << endl;
	cout << (Compare1 == Compare2) << endl; // 같다
	cout << (Compare1 != Compare2) << endl; // 다르다

	// 참과 거짓으로 나오는 Bool데이터임, Fales : 0, True : 1로 표현됨
}

void Logical()
{
	int Compare1 = 10;
	int Compare2 = 20;

	/*
		논리 연산 : bool 데이터 연산

		AND : && ( & : ampersand )

		true && ture : true
		true && false : false
		=> bool 데이터가 모두 true일 때 결과가 true

		OR : || ( | : pipe )

		false || true :true
		false || false : false
		=> bool 데이터 중 하나만 true이면 결과가 true

		NOT : !=

		!(false) => true
		bool 데이터의 결과값을 반대로 부정
	*/

	cout << ((Compare1 < Compare2) && (Compare1 < 50)) << endl;
	cout << (!(Compare1 < Compare2)) << endl;
}