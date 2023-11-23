#include "io.h"

void Enumeration()
{
	// 타입 선언
	enum day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
	// ↑ 타입과 데이터를 함께 만들어 줌 / 문자를 ""없이 상수처럼 사용되게끔 해줌 enum
	
	// 변수 선언
	day DayName = Sun;

	// 출력
	cout << DayName << endl; // <- '0'으로 값 나옴/인덱스 숫자

	// 변수 선업값 변경
	DayName = Wed;

	// 출력
	cout << DayName << endl; // <- 정해진 값을 숫자로 활용하게 해주는 것
}

void EnumerationEnum()
{
	// ex01
	enum day { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

	day DayName2 = Fri;
	cout << DayName2 << endl;

	// ex02
	cout << day::Thu << endl; // <- 변수 선언 없이 ::(네임스패이스) 사용해서 바로 사용
}

