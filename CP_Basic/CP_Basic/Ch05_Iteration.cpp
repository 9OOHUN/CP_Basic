#include "io.h"

void ForFunctionDesc()
{
	// 반복문 for : 반복 횟수를 정해서 반복 실행
	// 반복 : iterate, 정수 : interger -> for 변수 i,j로 많이 씀
	/*
		for(구문1; 구문2; 구문3){}

		구문1
		- for 구문이 처음 실행될 때 최초 한번 실행되는 구문
		- 반복 횟수를 결정하는 변수 선언

		구문2
		- 반복 실행될 때 조건 비교식 구문
		- 조건비교식의 결과값이 참일때 반복 실행

		구문3
		- 코드블럭이 반복 실행될 때 마다 코드블럭 실행 이후에 실행되는 구문

		for(int i = 0; i < 10; i+=2){}  // i++ 로 보통 많이 씀, 1개씩 증감되게
		for실행하면 [구문1] i가 0으로 초기화, [구문2] 비교식 실행, {}코드블럭 실행하고 끝나면 [구문3]으로 다시 실행
	*/
	// 조건식에 사용되는 범위 숫자가 반복 횟수를 나타내도록
	for (int i = 0; i < 10; i++) {
		cout << "Hello" << endl;
	}

	int Total = 0;

	for (int i = 1; i < 10; i++) {  // <- 개수 중요할때 i<10
		Total += i;
		cout << Total << endl; // <- 누계
	}
	cout << Total << endl; // <- 합계
}

void ForFunctionEx01()
{
	// 구구단2단 = for 예제
	int Dan2 = 0;
	for (int i = 1; i <= 9; i++) {  // <- 개수보다는 횟수 중요할 때 <= 사용
		Dan2 = 2 * i;
		cout << "2 X " << i << " = ";
		cout << Dan2 << endl;
	}
}

void ForFunctionEx02()
{
	// 중첩 for : 중첩 해야하면 무조건 중첩 해야함
// 구구단 전체 : 2차원 반복
	int Dan = 0;
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			Dan = i * j; // <- 이런 중첩 식이 중요
			cout << i << " X " << j << " = ";
			cout << Dan << endl;
		}
		cout << endl;
	}
}

void ForFunctionEx03()
{
	// 연습문제 : 반복횟수를 입력 받고, 반복 될때마다 두 수 A,B를 입력받아 A+B의 결과값을 표시

	int IterNumber = 0;
	int IterA = 0;
	int IterB = 0;

	//cin >> IterNumber;
	for (int i = 0; i < IterNumber; i++) {
		cin >> IterA;
		cin >> IterB;
		cout << IterA + IterB << endl;
	}
}

void ForFunctionEx04()
{
	// 연습문제 : 백준 25304번 '영수증'
/*
	분해
	1. 총 금액 입력
	2. 물건 종류의 수 입력 -> 반복 횟수
	3. 반복실행
	3-1. 각 물건 개당 가격 입력
	3-2. 각 물건 개수 입력
	3-3. 각 물건 개당 가격 * 물건개수
	3-4. 각 물건 전체 가격을 모두 더하기
	4. 입력받은 총 금액과 계산 결과 총합 비교
	5. 4번의 결과가 true -> yes / false -> no
*/

// 1
	int TotalPrice = 0;
	cout << "Typing Total Price : ";
	//cin >> TotalPrice;

	// 2
	int SortNumber = 0;
	cout << "Typing Sort Number : ";
	//cin >> SortNumber;

	// 3
	int ProductPrice = 0;
	int ProductNumber = 0;
	int ProductTotalPrice = 0;
	int SumTotalPrice = 0; // <- 누적

	for (int i = 0; i < SortNumber; i++) { // <- 원하는 반복횟수 얻으려면 i=0, i<회수 입력
		// 3-1
		cout << "Typing Product Price : ";
		//cin >> ProductPrice;
		// 3-2
		cout << "Typing Product Number : ";
		//cin >> ProductNumber;
		// 3-3
		ProductTotalPrice = ProductPrice * ProductNumber;
		// 3-4
		SumTotalPrice = SumTotalPrice + ProductTotalPrice;
	}
	// 4, 5
	if (TotalPrice == SumTotalPrice) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}

void WhileFunctionDesc()
{
	/*
	while : 조건식이 참인 경우에 반복 실행하는 구문 <- 무한 반복한다 / 무한루프에 빠진다

	while(조건비교식:bool){}

	while(Total >= 200){}
	while(true){}
	while(1){}
*/

	int iter = 0;
	while (iter < 10) {
		cout << "Hello world" << endl;  // <- 안쓰는 예제 for랑 같음
		iter++;
	}

	do {
		cout << "Hello world" << endl; // <- 처음 한번 먼저 시도하고 이후에 조건 비교, 많이 안씀
		iter++;
	} while (iter < 10);

	/*  true 값이 나올때까지 무한 반복

		while (true) {
			로그인 시도
			아이디/비번 체크
			로그인 성공
			+ break; 으로 블럭 밖으로 나가게
			로그인 실패
		}
	*/
}

void WhileFunctionEx01()
{
	// while 로 구분 물건 가지수가 없을때 계산법 (총액과 물건가격, 개수로만)
/*
	분해
	1. 총 금액 입력
	2. 반복실행 (while) : 조건비교 (총금액 != 0)
	2-1. 각 물건 개당 가격 입력
	2-2. 각 물건 개수 입력
	2-3. 각 물건 개당 가격 * 물건개수 = 물건당 금액
	2-4. 총 금액 - 물건당 금액, 0이 될때가지
	3. 블럭 나왔을 때 yes 출력
*/

	int TotalPrice1 = 0;
	cout << "Please Typing Total Price : ";
	cin >> TotalPrice1;

	int ProductPrice1 = 0;
	int ProductNumber1 = 0;
	int ProductTotalPrice1 = 0;
	bool Zero = true;

	while (TotalPrice1 != 0) { // <- while 조건이 참일때 무한반복되므로 오히려 참을 !=로 써서 블럭 밖으로 나가게 작성

		// 참이 아닐때 추가코드
		if (TotalPrice1 < 0) {
			Zero = false;
			break;
		}

		// 참 코드
		cout << "Please Typing Product Price : ";
		cin >> ProductPrice1;

		cout << "Please Typing Product Number : ";
		cin >> ProductNumber1;

		ProductTotalPrice1 = ProductPrice1 * ProductNumber1;
		TotalPrice1 = TotalPrice1 - ProductTotalPrice1;
	}
	if (Zero == false) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}
}