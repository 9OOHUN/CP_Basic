#pragma once

class Airplane
{
private:				// 보통 변수는 프라이빗으로(디폴트 프라이빗 이유가 잇음)
	int Energy;
	int SpecialBombNum;
	int Distance;

public:					// 함수는 퍼블릭, 함수 응용해야하기 때문에
	
	int Temp;
	// 클래스 선언 실행시 최초1번 실행 => 클래스의 값을 초기화
	Airplane();	// <- 기본 생성자(Default Constructor) 타입 안씀
	// ↑ 함수 정의 cpp에서 위의 변수 초기화 또 작성해야함

	// ↓ 매개변수 생성자 / 위에 기본생성자도 같이 써주기
	Airplane(int EnergyNumber01, int BombNumber01);
	// ↑ 매개변수 값을 받아서 클래스 초기화 할 때 사용

	~Airplane(); // <- 소멸자(Destuctor) 순서 상관없이 위에다 생성,소멸 같이

	void SetEnergy(int EnergyNumber);	// <- 프라이빗이라 일반함수에서 못쓰기 때문에 쓰기위해서 Set과 Get 사용
	int GetEnergy();	// <- 값 유효성 체크 기능 넣을 수 잇음 (정보 은닉)위해
	// ex. 은행어플 잔고가 10원인데 100원 뽑으려 할때 체크하는 것처럼
	void SetBomb(int BombNumber);
	int GetBomb();

	void PrintEnergy();
	void PrintBomb();
}; // <- 클래스 뒤에는 ;로 끝