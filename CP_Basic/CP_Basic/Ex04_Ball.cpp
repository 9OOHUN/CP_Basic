#include "io.h"

// 2023. 11. 24. 과제문제(백준, 프로그래머스)
// 01. 공넣기 https://www.acmicpc.net/problem/10810
/*
	3 3 0 0 0
	3 3 4 4 0
	1 1 1 1 0
	1 2 1 1 0

	배열의 수 입력 : Size 바구니 개수
	반복 횟수 입력 : LoopNum 공 넣는 싸이클 횟수

	반복 횟수 만큼 반복 입력
	바구니번호(배열의 범위(시작값,종료값) : StartNum, EndNum
	입력값 : inputNum
*/
void InputBall()
{
	int Size = 0;
	cout << "바구니 개수 입력 : ";
	cin >> Size;

	int LoopNum = 0;
	cout << "공 넣는 횟수 입력 : ";
	cin >> LoopNum;

	int* Basket = new int[Size]; // 핵심, 동적 배열 생성 = Basket[Size]임

	for(int i = 0; i < Size; i++) { // 바구니 값 0으로 초기화(0일때 표기안한다해서)
		Basket[i] = 0;
	}

	int StartNum, EndNum, InputNum = 0;

	for (int i = 0; i < LoopNum; i++) {
		cin >> StartNum >> EndNum >> InputNum;
		for (int j = StartNum-1; j <= EndNum-1; j++) {
			Basket[j] = InputNum;
		}
	}

	for (int i = 0; i < Size; i++) {
		cout << Basket[i] << " | ";
		}
}