#include "io.h"

/*
	형변환
	- 각각의 변수 타입을 변환
	- 변수에 저장되는 데이터의 타입이 변환된 것처럼 보
	  보이도록 표시하는 것
*/

void Type()
{
	int Kor = 90;
	int Eng = 80;
	int Math = 75;

	float Average = 0;

	// 1. 변수, 데이터값 타입이 동일
	// 2. 연산 결과가 현실화 되는 결과값 고려
	// 형변환(Type Cast)/계산식의 타입을 바꿈

	//Average = float(Kor + Eng + Math) / 3);
	// ↑ 뒤에 kor~ 이미 int로 계산 되어 소수값 삭제, 정수로 나옴

	Average = ( float(Kor) + float(Eng) + float(Math) ) / 3;
	// ↑ 각각의 값에 형변환 대입
	// 줄여쓰면 Average = float(Kor + Eng + Math) / 3;

	cout << Average << endl;
}