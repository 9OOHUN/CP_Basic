// Ch01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Input/Output Stream

#define Number 100 // 넘버 대문자인 이유는 변수와 구분짓기 위해

using namespace std;
// std::cout => cout

int main()
{
	std::cout << "Hello World!\n";

	// std : standard
	cout << "Hello C++\n";
	cout << "C++ Programming\n";
	cout << 500 << endl; // endl : endline
	cout << Number + 50 << endl;

	// 키워드, 예약어 : 선언문, 명령문
	// 키워드 : 변수 타입 선언

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

	// 산술 연산자
	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

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

// 비트와 바이트에 대한 이해
/*
	bit : 컴퓨터 데이터 저장의 최소단위
	byte : 컴퓨터 정보 저장의 최소단위(8bit)
	1byte = 8bit

	2진수 숫자 데이터 : 0,1
	진법 계산 기본적으로 가능하면 좋음
	1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
	2^0 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 정도는 기억하면 좋다, 256(2^8) 많이씀 = 8bit(1byte)
	유니코드 UTF-8 : 천자문같은 언어 커버 위해 2byte(16bit) = 2^16으로 설정한 문자 표기법
	트루컬러 : 2^24(24bit) RGB 가상혼합(섞으면 밝아짐), 물감은 감상혼합(섞으면 어두워짐)
	- R 8bit, G 8bit, B 8bit = 24bit
	색표현, 문자 표현, 아이피주소 표현 : 1byte(8bit) 기준으로 확장

	= : 왼쪽에 변수, 오른쪽에 데이터값으로 [대입, 할당(assign)]이라는 뜻으로 사용(수학처럼 동등하다 아님)
	% : 나머지연산
*/