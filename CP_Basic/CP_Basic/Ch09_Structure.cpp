#include "io.h"

// 구조체

void DefineStructure()
{
	// **변수 타입 선언 + ;
	// 클래스와 구분을 위해 camel case 사용
	struct carData {
		int Number = 0;
		char Model = NULL;
	};
	
	// 변수 선언 및 초기화 + ;
	carData Sonata = {
		1234,
		'A'
	};

	// 변수 값 출력
	cout << Sonata.Number << endl; // <- 타입변수.데이터 로 표기, carData가 아닌 타입 명으로 표기
	cout << Sonata.Model << endl;

	// 변수 값 대입
	Sonata.Number = 5678;
	Sonata.Model = 'B';

	cout << Sonata.Number << endl;
	cout << Sonata.Model << endl;
}

void StructureArray()
{
	struct phone {
		char CompanyCode = NULL;
		int PhoneNumber = 0;
	};

	phone SK[2] = {
		{'A', 12345678},
		{'S', 98765432},
	};

	cout << SK[0].CompanyCode << endl;
	cout << SK[0].PhoneNumber << endl;
	cout << "---------------" << endl;
	cout << SK[1].CompanyCode << endl;
	cout << SK[1].PhoneNumber << endl;
}

