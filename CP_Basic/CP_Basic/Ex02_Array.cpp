#include "io.h"

// **교재 225p 배열 프로그래밍문제

//1. 배열 int arr[] = {1,6,9,7,3,2,0,4,8,5}를 가지고 다음 프로그램을 작성하시오
int arr[] = { 1,6,9,7,3,2,0,4,8,5 };

	// ↑ 배열 사이즈(개수) 모를때 비트 개수 구하는 코드, 비트로 나오기 때문에 나눠줘야 함 ↓
int ArrSize = sizeof(arr)/sizeof(arr[0]); 
	// ↑배열 첫번째로 나누기로 선언 예약어에 따라 나누는 수가 바뀌기 때문에 숫자말고 배열 첫번째 비트로 나눠줌
	// ex. long:4bit, shot:2bit

	//	(1) arr 모든 원소의 합
void ArraySum()
{
	int Sum = 0; // <- 원소를 모두 더하는 변수 선언

	for (int i = 0; i < ArrSize; i++) {
		Sum += arr[i];
	}

	cout << Sum; // <- endl; 생략해도 상관은 X 출력코드블럭대로 알아서 바뀜
}	
	
	//	(3) arr 의 원소들을 역순으로 '재구성'하는 프로그램 <- 출력말고 전역범위의 arr의 배열을 바꾸는게 포커스
void Reverse()
{
	int TempArr[10];

	// 역순 방법 1 - 직관적
	for (int i = 0; i < 10; i++) {
		TempArr[i] = arr[9-i];
	}

	for (int i = 0; i < 10; i++) {
		arr[i] = TempArr[i];
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " | ";
	}
	cout << endl;
}	
	
	//	(4) arr 의 원소들을 오름차순으로 정렬하여 재구성하는 프로그램
void Sort()
{
	int Temp = 0; // <- 임시변수(임시저장공간) 1:1 데이터 교환이 안되기 때문
	
	// *버블 정렬 : 반복-전체사이클, 인접한 원소 비교
	for (int i = 9; i > 0; i--) { // <- 반복 회수의 의미, 단순 회수이기 때문에 별도의 변수대신 역순으로 바꿔줌
		for (int j = 0; j < i; j++) { // <- 인덱스 끼리 비교 회수 의미(중요)
			if (arr[j] > arr[j+1]) { // <-진정한 비교 의미, 만약 데이터가 데이터+1보다 크다면,
				Temp = arr[j];		   // <- 별도로 선언한 임시변수에 넣어주고,
				arr[j] = arr[j + 1];   // <- j에다 비교해서 얻어진 값을 넣어주고,
				arr[j + 1] = Temp;     // <- 다시 임시변수에 넣어준다
			}
		}
	}

	// ↓ 출력 및 출력 사이 "|"문자 마지막에 안 넣는 방법, if 써야함
	for (int i = 0; i < 10; i++) {
		if (i == 9) {
			cout << arr[i];
		}
		else {
			cout << arr[i] << " | ";
		}
	}
	cout << endl;
	//	(2) arr 의 최솟값과 최대값을 구하는 프로그램
	cout << "최소값 : " << arr[0] << endl;
	cout << "최소값 : " << arr[ArrSize - 1] << endl;
}