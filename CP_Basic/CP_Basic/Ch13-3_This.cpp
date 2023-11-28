#include "io.h"
#include "Ch13-3_This.h"

/*
	this-> 객체
	- 클래스 내부에서 사용될 때 클래스 지칭
*/

Phone::Phone()
{
	Company = NULL;
	ModelNumber = 0;

	cout << "Class Construct" << endl;
}

Phone::Phone(char Company, int ModelNumber)
{
	this->Company = Company;			// 클래스 프로퍼티와 메소드 파라미터 구분
	this->ModelNumber = ModelNumber;	// 동적처럼 포인터 사용임 (언리얼 중요!!)

	cout << "Class Parameter Construct" << endl;
}

Phone::~Phone()
{
	cout << "Class Parameter Destruct" << endl;
}



void Phone::PrintCompany()
{

}

void Phone::PrintModelNumber()
{

}