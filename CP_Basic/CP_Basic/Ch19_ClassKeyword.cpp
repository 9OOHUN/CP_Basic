#include "io.h"
#include "Ch19_ClassKeyword.h"

int Keyword::Value2 = 2;

void ClassKeword()
{
	Keyword T1;

	T1.Value1 = 11;
	T1.Value2 = 12;

	T1.Func();
	T1.SFunc();

	Keyword T2;

	T2.Value2 = 21;
	T2.Value1 = 22;  // <- 클래스에서 static으로 선언되어 마지막 변수 선언 사용

	cout << T1.Value1 << " : " << T1.Value2 << endl;  // 11 : 22
	cout << T2.Value1 << " : " << T2.Value2 << endl;  // 21 : 22

	Keyword::SFunc(); // static함수, 별도 객체 생성없이 바로 클래스함수에 접근 가능 ★★★중요
}