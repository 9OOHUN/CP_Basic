#include "io.h"
#include "DefineFunction.h"

int main()
{
	// 함수 호출
	DefineFunction();
	CppBasic();
	

	// ★2023. 11. 21. 제어문 시작

	int Condition1 = 100;

	/*
		if가 포함하는 조건식의 원리
		: 결과값이 bool 데이터
		조건식의 종류
		- 비교연산식
		- bool 데이터
		- 산술 연산식
	*/

	if (Condition1 >= 50) {
		// 참일때 실행구문, 조건식 외에 다른 데이터도 넣을 수 잇음
		cout << Condition1 << endl;
	}

	if (true) {} //:무조건 실행
	if (false) {}
	if (1) {} //:true로 인식함
	if (0) {}
	if (20) {} // 0 : false , 이외의 정수를 모두 : true / 가능함
	int Condition2 = 10;
	if (Condition2 + 5) {}
	if (Condition1 >= 50 && Condition2 <= 10) {}

	/*
		if(조건식1){
			// 조건식1이 참일 때 실행 구문
		}

		if(조건식2){
			// 조선식2가 참일 때 실행 구문
		} else {
			// 조건식2가 거짓일 때 실행 구문
		}

		if(조건식3){
			// 조건식3이 참일 때 실행 구문
		} else if(조건식4){
			// 조건식4가 참일 때 실행 구문
		} else if(조건식5){
			// 조건식5가 참일 때 실행 구문
		} else {
			// 조건식이 모두 거짓일 때 실행 구문
		}
	*/

	// 연습문제1 : A,B 두 수를 입력 받아 비교해서 결과 출력
	// 출력 : A>B => ">" , A<B => "<" , A=B => "=="
	int NumA = 0;
	int NumB = 0;

	//cin >> NumA;
	//cin >> NumB;

	if (NumA > NumB) {
		cout << ">" << endl;
	}
	else if (NumA < NumB) {
		cout << "<" << endl;
	}
	else {
		cout << "==" << endl;
	}

	/* 연습문제2 :
	   시험점수 90~10 : A, 80~89:B, 70~79:C, 60~69:D, 60미만:F
	*/
	int NumTest = 0;
	//cin >> NumTest;

	if (NumTest >= 90) {
		cout << "A" << endl;
	}
	else if (NumTest >= 80) {
		cout << "B" << endl;
	}
	else if (NumTest >= 70) {
		cout << "C" << endl;
	}
	else if (NumTest >= 60) {
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}

	/* 연습문제3 :
	   상점에서 도둑이 들었는데, 목격자가 인상착의를 말했다.
	   인상착의 : 키는 180 이상, 옷은 검정색이었다고 말했다.
	   범인을 찾는 조건문을 작성하시오
	   옷색 입력값 : Black = B, White = W, Red = R ...
	*/

	int TallNumber = 0;
	char ClothColor = NULL; // NULL : 문자값이 존재하지 않는 공백

	//cin >> TallNumber;
	//cin >> ClothColor;

	// TallNumber >= 180
	// ClothColor == B

	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "범인" << endl;
	}
	else if (TallNumber >= 180 || ClothColor == 'B') {
		cout << "용의자" << endl;
	}
	else {
		cout << "시민" << endl;
	}

	/*
		if를 중첩해서 사용하는 경우 (중첩사용)

		if(조건식1){
			// 참일때 실행
			if(조건식2){
			}
		}
	*/

	// 위 연습문제에서 둘 중 하나 조건만 해당될때 중첩예제

	if (TallNumber >= 180) {
		if (ClothColor == 'B') {
			cout << "범인" << endl;
		}
		else {
			cout << "용의자" << endl;
		}
	}
	else {
		if (ClothColor == 'B') {
			cout << "용의자" << endl;
		}
		else {
			cout << "시민" << endl;
		}
	}
	// switch ~ case
	/*
	*  switch가 포함하는 수식의 결과값
	* : 정수, 문자

	   switch(수식){
		   case 결과값1 :
				실행구문
		   case 결과값2
				실행구문2
		   ...
	   }
	*
	*/

	// 요일 번호를 입력받아 해당 번호의 요일 이름을 출력
	// 0:일요일 ~ 6:토요일
	int DayNum = 0;
	cout << "요일번호를 입력해주세요 [0~6] : ";
	//cin >> DayNum;

	switch (DayNum) {
	case 0:
		cout << "일요일" << endl;
		break;
	case 1:
		cout << "월요일" << endl;
		break;
	case 2:
		cout << "화요일" << endl;
		break;
	case 3:
		cout << "수요일" << endl;
		break;
	case 4:
		cout << "목요일" << endl;
		break;
	case 5:
		cout << "금요일" << endl;
		break;
	case 6:
		cout << "토요일" << endl;
	}

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

	// 구구단2단 = for 예제
	int Dan2 = 0;
	for (int i = 1; i <= 9; i++) {  // <- 개수보다는 횟수 중요할 때 <= 사용
		Dan2 = 2 * i;
		cout << "2 X " << i << " = ";
		cout << Dan2 << endl;
	}

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

// 함수 정의
void DefineFunction()
{
	cout << "Hello Fuction" << endl;
}

	// 비트와 바이트에 대한 이해
	/*
		bit : 컴퓨터 데이터 저장의 최소단위
		byte : 컴퓨터 정보 저장의 최소단위(8bit)
		1byte = 8bit

		2진수 숫자 데이터 : 0,1
		진법 계산 기본적으로 가능하면 좋음
		1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
		2^0 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 정도는 기억하면 좋다, 256(2^8) 많이씀 = 8bit(1byte)
		유니코드 UTF-8 : 천자문같은 언어 커버 위해 2byte(16bit) = 2^16으로 설정한 문자 표기법
		트루컬러 : 2^24(24bit) RGB 가상혼합(섞으면 밝아짐), 물감은 감상혼합(섞으면 어두워짐)
		- R 8bit, G 8bit, B 8bit = 24bit
		색표현, 문자 표현, 아이피주소 표현 : 1byte(8bit) 기준으로 확장

		= : 왼쪽에 변수, 오른쪽에 데이터값으로 [대입, 할당(assign)]이라는 뜻으로 사용(수학처럼 동등하다 아님)
		% : 나머지연산
	*/