#include "io.h"

/*
	���� �Ҵ� : Static Allocation(Alloc)
	���� �Ҵ� : Dynamic Allocation

	������ ���� ���� : �Ҵ�(Assign) = ��ġ(������ �ǹ�)
*/

// �����Ҵ�
void DynamicAlloc()
{
	// 1. ����
	int* pNumber = new int; // int type ���� ���� ����
		// pNumber : �ּ�
	

	// 2. ����
	*pNumber = 50; // <- ���� �����ذŰ� pNumber�� �ּ��̸���, ���� �̸��� ���»���
	// �� ���Կ��� / ���� �ǹ�

	cout << pNumber << endl; // �ּ�
	cout << *pNumber << endl; // ��


	// 3. ����

	delete pNumber;
}

void DynamicAlloc2()
{
	char* pCharacter = new char;

	*pCharacter = 'A';

	cout << "�ּ� : " << pCharacter << endl;
	cout << "�� : " << * pCharacter << endl;

	delete pCharacter;
}

void DynamicArray() // <- ���� '�迭'
{
	int* pArray = new int[5];

	pArray[0] = 10; // <- �迭�� ���� ������ �����̹Ƿ� *�Ⱦ�

	cout << pArray[0] << endl;

	for (int i = 0; i < 10; i++) {
		pArray[i] = i;
	}

	for (int i = 0; i < 5; i++) {
		cout << pArray[i] << endl;
	}

	delete pArray;
}

void InputArraySize()
{
	int Size;
	cin >> Size;

	float* pValue = new float[Size];

	for (int i = 0; i < Size; i++) {
		pValue[i] = i * 1.5;
	}

	for (int i = 0; i < Size; i++) {
		cout << pValue[i] << " : ";
	}

	cout << endl; 
	// �� ������ | ���ִ� ��
	for (int i = 0; i < Size; i++) {
		if (i < Size - 1) {
			cout << pValue[i] << " | ";
		}
		else {
			cout << pValue[i];
		}
	}

	delete[] pValue;
}