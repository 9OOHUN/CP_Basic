#include "io.h"

/*
	정적 할당 : Static Allocation(Alloc)
	동적 할당 : Dynamic Allocation

	변수에 값을 대입 : 할당(Assign) = 배치(사전적 의미)
*/

// 동적할당
void DynamicAlloc()
{
	// 1. 생성
	int* pNumber = new int; // int type 변수 동적 생성
		// pNumber : 주소
	

	// 2. 연산
	*pNumber = 50; // <- 값만 정해준거고 pNumber는 주소이름임, 값의 이름은 없는상태
	// ↑ 대입연산 / 값의 의미

	cout << pNumber << endl; // 주소
	cout << *pNumber << endl; // 값


	// 3. 해제

	delete pNumber;
}

void DynamicAlloc2()
{
	char* pCharacter = new char;

	*pCharacter = 'A';

	cout << "주소 : " << pCharacter << endl;
	cout << "값 : " << * pCharacter << endl;

	delete pCharacter;
}

void DynamicArray() // <- 동적 '배열'
{
	int* pArray = new int[5];

	pArray[0] = 10; // <- 배열은 원래 포인터 형태이므로 *안씀

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
	// ↓ 마지막 | 없애는 거
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