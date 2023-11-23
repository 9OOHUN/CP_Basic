#include "io.h"

// **교재 162p 제어문 프로그래밍문제

// 1. if~else를 이용하여 입력받은 정수의 짝수/홀수 여부를 출력
void EvenOdd()
{
	int Number = 0;
	cin >> Number;

	if (Number % 2 == 0) { // <-짝/홀수 판가름 근본코드
		cout << "짝수" << endl;
	}
	else {
		cout << "홀수" << endl;
	}
} // 나눔 나머지로 나오는 연산많음, 기억해 주기

/* 2. 받아쓰기는 10문제로 이루어지고 각각 10점씩 100점 만점이다.
	받아쓰기 점수를 입력받은 후 등급을 출력하는 프로그램 switch 문만 이용하여 작성하시오!
	(A:100, B:80~90, C:50~70, D:10~40, F:0) */ 
/*
void() // homework?
{
	int NumTest = 0;
	cin >> NumTest;
}
*/

// 5. for, if, continue 키워드를 사용하여 1~100까지 짝수만 출력
//	continue : continue 키워드 이후의 코드를 실행하지 않고 통과(점프) (break랑 비슷)
void PrintEven()
{
	// 1번째 방식 (짝수면 출력하고, 아니면 건너 뛰어라 : 컨티뉴가 딱히 필요없음, else 이후 지워도 댐)
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

	// 2번째 방식 (컨티뉴 적극사용 ver)
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
	
	// 3번째 방식 (컨티뉴 활용 best)

	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) {
			continue;
		}
		cout << i << endl;
	}
}

// 6. 다음은 수학능력시험 표준 점수의 상위 비율에 따른 등급표이다 표를 기반으로 프로그램을 작성하시오
//    (1) 상위 비율을 입력받은 후 등급을 출력하는 프로그램을 if else if 문만을 이용하여 작성하시오
//		-> Ex03.cpp에 잇음
void Grade()
{
	cout << "▶ Insert Your Rate : ";
	
}

//    (2) 표준 등급을 입력받아 100명당 평균 몇 등인지 출력 (4등급 / 평균 31.5등입니다)
//			*시작값 + 끝값 / 2 = 중간값 (ex. 4등급 : 23% ~ 40% = 31.5 <-중간값)
void Median(float StartNumber, float EndNumber)
{
	cout << "▶ Your Average Score is : " << (StartNumber + EndNumber) / 2 << endl;
}

void StandardGrade()
{
	cout << "▶ Insert Your Standard Grade : ";

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
