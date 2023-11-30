#include "io.h"
#include "Ch19_ClassKeyword.h"

void Keyword::Func() const // 함수 기능에 변수나 값을 변경하는 내용 없다는 걸 의미,기능만 수행
{
	cout << Value1 << endl;
}

void Keyword::SFunc() // static 함수로 변수를 쓰면 오류남
{
	cout << "SFunc() <- static / 변수 못 넣음" << endl;
}

int Keyword::Get() const // 함수 기능에 변수나 값을 변경하는 내용 없다는 걸 의미,기능만 수행
{
	return Value3;
}

const int Keyword::Print() // 함수 타입 앞에 const는 리턴값이 변하지 않는다는 뜻
{
	// return 값이 항상 변하지 않음
	// return 값이 항상 존재
	
	return 0;
}