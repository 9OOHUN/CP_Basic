#include "io.h"
#include <stdlib.h>

// ���� 06. �ֻ��� ���� https://school.programmers.co.kr/learn/courses/30/lessons/181916
/*
	4���� �ֻ������� a,b,c,d 4���� ���� ���� ��
	(if ~ else if ~else ���)
	* �������� ���� ����(�ٽ�)

	1. a=b=c=d
		�Ϲ� : a==B && b==c && c==d
		���� : �������� �����ϸ� ù��°�� ������ ��(=)�� �ϸ� Ȯ�� ����
				a==d �� Ȯ���ϸ� ��

	2. a=b=c / a=c=d= / a=d=b / b=c=d
		���� : a==c || b==d �� Ȯ���ϸ� ��

	3. a=b, c=d / a=c || b=d / a=d, b=c
		���� : a=b && c=d �� Ȯ���ϸ� ��

	4. a=b / a=c / a=d / b=c / b=d / c=d
		���� : a=b || b=c || c=d

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
