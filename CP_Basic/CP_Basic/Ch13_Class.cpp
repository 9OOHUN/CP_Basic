#include "io.h"
#include "Ch13-1_ClassHeader.h"
#include "Ch13-2_Airplane.h"

// 클래스는 인스턴스/객체를 찍기 위한 청사진(함수 밖에 선언)
// 클래스 자체를 헤더 파일에 넣어버리는 경우 많음!
// 클래스에서는 보통 선언만 하고 기능 정의는 다른 곳에서 사용(메소드 선언, 등)
	/*
		성질,속성 : 프로퍼티(변수) - 크기, 색, 무게 등
		동작 : 메소드(함수) - 전진, 후진, 좌/우 등

		*정보 은닉
		- 데이터 변수를 어디에서 사용할지 사용 범위 결정
		(1) 클래스 내부에서만 사용가능 경우 : private
		(2) 클래스 외부에서도 사용가능 경우 : public
		(3) 상속된 클래스에서 사용가능 경우 : protected

		*private, public, protected 키워드 사용해서 범위 결정
		- 키워드를 사용하지 않으면, default = private 
	*/

class Car // 대문자 시작형태 해주기(파스칼 형태)
{
public: // <- 아래 영역 사용범위 결정 키워드
	char Size = NULL;
	char Color = NULL;
	float Weight = 0.0f; // <- f 붙이는 이유 : float 의미

	void MoveFoward()
	{
		cout << "Move Foward " << Size << endl;
	}
	void MoveBackward()
	{
		cout << "Move Backward" << endl;
	}
	void Break()
	{
		cout << "Break" << endl;
	}
};

void DefineClass()
{	
	Car Ray;

	Ray.Size = 'S'; // (S)mall, (M)idium, (L)arge

	Ray.MoveFoward();

}

// 클래스 헤더파일 이용 (13-1)

void PrintPlayer() // 클래스 헤더의 외부
{
	Player Pino;

	Pino.SetData();

	Pino.PrintEnergy();
	Pino.PrintItemNum();
	Pino.PrintWeapon();

	Pino.ItemNum = 5; // 내부냐 외부냐 차이, 변수를 다이렉트로 접근하냐 안하냐
	Pino.PrintItemNum();
}


// 클래스 활용 (13-2)

void PrintAirplane()
{
	Airplane F16;	// <- F에 있는 점선 밑줄 : 변수 초기화 되지 않음/클래스 초기화 해줘야함
											// ↑ 생성자 : 클래스 초기화 '함수'
	F16.SetEnergy(100);						// Constructor
	F16.SetBomb(10);

	F16.PrintEnergy();
	F16.PrintBomb();

	cout << endl;

	F16.SetEnergy(F16.GetEnergy() - 30); // 폭탄맞은거 -30
	F16.SetBomb(F16.GetBomb() - 3); // 폭탄 쓴거 -3

	F16.PrintEnergy();
	F16.PrintBomb();

	// 매개변수 생성자 활용(Parameter Construct)
	Airplane KF21(100, 20); // <- 정의cpp에서 선언한 매개변수 함수값을 여기 작성
	// 기본 클래스 호출하면 기본생성자 활용, 위처럼 매개변수 쓰면 매개변수 생성자 씀

	KF21.PrintEnergy();
	KF21.PrintBomb();

	cout << endl;

	KF21.SetEnergy(F16.GetEnergy() - 30);
	KF21.SetBomb(F16.GetBomb() - 3);
	
	KF21.PrintEnergy();
	KF21.PrintBomb();
}

// 클래스 동/정적 활용

void DynamicAirplane()
{
	Airplane Boeing(300, 2); // 정적 생성

	Boeing.PrintEnergy();

//-----------------------------------------------------//

	Airplane* A10 = new Airplane; // 동적 생성(클래스를 동적 생성)/포인터 사용

	A10->PrintEnergy(); // 클래스 동적 사용시 -> 사용
	A10->Temp = 0;

	// 동적 활용
	Airplane* A30 = new Airplane(300,4);

	A30->PrintEnergy();
	A30->PrintBomb();

	delete A10;	// 동적 데이터 마찬가지로 지워줘야 함.
	delete A30;
	// C++ 가비지 컬렉터 : 동적 종료 안해서 쌓인 메모리들을 자동으로 정리해주는 것, 참고만
}