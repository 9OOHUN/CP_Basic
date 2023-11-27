#include "io.h"
#include <stdlib.h>

// 도전 06. 주사위 게임 https://school.programmers.co.kr/learn/courses/30/lessons/181916
/*
	4개의 주사위에서 a,b,c,d 4개의 값이 나올 때
	(if ~ else if ~else 사용)
	* 오름차순 정렬 전제(핵심)

	1. a=b=c=d
		일반 : a==B && b==c && c==d
		정렬 : 오름차순 정렬하면 첫번째와 마지막 비교(=)만 하면 확인 가능
				a==d 만 확인하면 됨

	2. a=b=c / a=c=d= / a=d=b / b=c=d
		정렬 : a==c || b==d 만 확인하면 됨

	3. a=b, c=d / a=c || b=d / a=d, b=c
		정렬 : a=b && c=d 만 확인하면 됨

	4. a=b / a=c / a=d / b=c / b=d / c=d
		정렬 : a=b || b=c || c=d

	5. a!=b!=c!=d
		: else
*/

void DiceGame()
{
	int Dice[4] = { 0,0,0,0 };

	for (int i = 0; i < 4; i++) {
		cin >> Dice[i];
	}

	int Temp = 0;

	for (int i = 3; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (Dice[j] > Dice[j + 1]) {
				Temp = Dice[j];
				Dice[j] = Dice[j + 1];
				Dice[j + 1] = Temp;
			}
		}
	}

	if (Dice[0] == Dice[3]) {
		cout << Dice[0] * 1111 << endl;
	}
	else if (Dice[0] == Dice[2]) {
		cout << (10 * Dice[0] + Dice[3]) * (10 * Dice[0] + Dice[3]) << endl;
	}
	else if (Dice[1] == Dice[3]) {
		cout << (10 * Dice[1] + Dice[0]) * (10 * Dice[1] + Dice[0]) << endl;
	}
	else if (Dice[0] == Dice[1] && Dice[2] == Dice[3]) {
		cout << (Dice[0] + Dice[2]) * abs(Dice[0] - Dice[2]) << endl;
	}
	else if (Dice[0] == Dice[1]) {
		cout << (Dice[2] * Dice[3]) << endl;
	}
	else if (Dice[1] == Dice[2]) {
		cout << (Dice[0] * Dice[3]) << endl;
	}
	else if (Dice[2] == Dice[3]) {
		cout << (Dice[1] * Dice[3]) << endl;
	}
	else {
		cout << Dice[0] << endl;
	}
}
