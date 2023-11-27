#include "io.h"

// 2023. 11. 24. ��������(����, ���α׷��ӽ�)
// 01. ���ֱ� https://www.acmicpc.net/problem/10810
/*
	3 3 0 0 0
	3 3 4 4 0
	1 1 1 1 0
	1 2 1 1 0

	�迭�� �� �Է� : Size �ٱ��� ����
	�ݺ� Ƚ�� �Է� : LoopNum �� �ִ� ����Ŭ Ƚ��

	�ݺ� Ƚ�� ��ŭ �ݺ� �Է�
	�ٱ��Ϲ�ȣ(�迭�� ����(���۰�,���ᰪ) : StartNum, EndNum
	�Է°� : inputNum
*/
void InputBall()
{
	int Size = 0;
	cout << "�ٱ��� ���� �Է� : ";
	cin >> Size;

	int LoopNum = 0;
	cout << "�� �ִ� Ƚ�� �Է� : ";
	cin >> LoopNum;

	int* Basket = new int[Size]; // �ٽ�, ���� �迭 ���� = Basket[Size]��

	for(int i = 0; i < Size; i++) { // �ٱ��� �� 0���� �ʱ�ȭ(0�϶� ǥ����Ѵ��ؼ�)
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