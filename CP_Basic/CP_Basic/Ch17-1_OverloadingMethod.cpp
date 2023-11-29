#include "io.h"
#include "Ch17-1_OverloadingClass.h"

Overloading::Overloading()
{
	cout << "Class Overloading Test <Turn On>" << endl;
	cout << endl;

	this->Number = 1;
	this->Name = "Altman";
}

Overloading::~Overloading()
{
	cout << "Class Overloading Test <Turn Off>" << endl;
}


void Overloading::Print() 
{
	cout << this->Name << " | " << this->Number << endl;
}

void Overloading::Print(int Number) // <- 오버로딩할때 함수정의 타입 같아야 함(void)
{
	this->Number = Number;

	cout << this->Name << " | " << this->Number << endl;
}

void Overloading::Print(string Name)
{
	this->Name = Name;

	cout << this->Name << " | " << this->Number << endl;
}

void Overloading::Print(int Number, string Name)
{
	this->Number = Number;
	this->Name = Name;

	cout << this->Name << " | " << this->Number << endl;
}

// 연산자 오버로딩
// ↓ 타입       ↓ 소속      ↓ 함수비슷   ↓ 매개변수
Overloading Overloading::operator+(Overloading& arg)
{
	Overloading Temp; // == int A = 0; / 임시변수

	Temp. Value = Value + arg.Value; // 클래스 내부Num과 외부에서 가져온 매개변수 Num을 더하는 식

	return Temp; // 위의 Temp에 값 넣어주는 식
}