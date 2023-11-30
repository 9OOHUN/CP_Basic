#include "io.h"
#include "DefineFunction.h"

// 함수 원형 선언 : main함수 위에 선언
void DefineFunction();

int main()
{
	/*
		// **매개변수 호출
		// ParameterFunction(10, 20);
		// ParameterFunction(30, 40);

		// **리턴값 호출
		//cout << 50 + ReturnFunction() << endl;

		// **매개변수 + 리턴값 호출
		// cout << 30 + ParamReturn(10, 20) << endl;
		// cout << 30 + ParamReturn(30, 40) << endl;
		// cout << 30 + ParamReturn(50, 60) << endl;

		// **배열
		// PrintArray();

		// SumArray();

		// ProcessScore();

		// **버블 정렬, 다차원 배열
		// BubbleSort();
		// MultiArray();

		// **구조체
		// DefineStructure();
		// StructureArray();

		// **열거체
		// Enumeration();
		// EnumerationEnum();

		// 2023.11.23.
		// **연습문제 01
		// **교재 162p 제어문 프로그래밍문제
		// EvenOdd();
		// PrintEven();

		// StandardGrade();

		// **연습문제 02
		// **교재 225p 제어문 프로그래밍문제
		// ArraySum();
		// Reverse();
		// Sort();

		// 2023. 11. 24.
		// **연습문제 03 숙제 포함
		// cout << Absolute(-5);

		// GradeHomeWork();
		// GradeTest();

		// InputBall();
		DiceGame();

		// **2023. 11. 27.
		// **Ch11. 포인터

		// PonterVar();
		// PointerCalc(); // <- 포인터 연산
		// PointerArray(); // <- 포인터 배열

		// **Ch12.동적 할당

		// DynamicAlloc();
		// DynamicAlloc2();
		// DynamicArray();
		// InputArraySize();

		// 2023. 11. 28.
		// **Ch13. 클래스
		// DefineClass();

		// PrintPlayer();
		// PrintAirplane();
		// DynamicAirplane();

		// **Ex06. 클래스 연습문제
		// Score();

		// 2023. 11. 29.
		// **Ch14. 배열 클래스
		// ArrayClass();

		// **Ch15. 문자열 클래스
		// StringClass();

		// **Ch16. 벡터 클래스
		// VectorClass();

		// **Ch17. 중복선언(오버로딩)
		//OverloadingFunction();\

		// **Ex07. 클래스 생성 연습문제
		// CRobotSpec();
		// MemberShip();

		// 2023. 11. 30.
		// **Ch18. 클래스 상속
		// Inheritance();
		// Inherit();

		// **Ch19. 클래스 키워드(스태틱 등)
		// ClassKeword();

	*/

	// **Ch20. 형변환 Type Cast
	// Type();

	// **Ch21. 가상함수 Virtual
	// Virtual();

	// **Ex10. 교재 450p 문제
	Person();
}

// 함수 정의 : main함수 뒤에 정의를 해야 함
void DefineFunction()
{
	cout << "Hello Function" << endl;
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
		- R 8bit(1byte), G 8bit, B 8bit = 24bit
		색표현, 문자 표현, 아이피주소 표현 : 1byte(8bit) 기준으로 확장

		= : 왼쪽에 변수, 오른쪽에 데이터값으로 [대입, 할당(assign)]이라는 뜻으로 사용(수학처럼 동등하다 아님)
		% : 나머지연산
	*/