#pragma once

class Keyword
{
public: 
	int Value1;
	static int Value2; // <- 전역변수처럼 사용 / 마지막 변수 선언 사용

	const int Value3 = 10; // 값 고정됨, 나중에 변수 선언 불가하므로 초기화 필요

	void Func() const;
	static void SFunc();

	int Get() const; // 함수 기능에 변수나 값을 변경하는 내용 없다는 걸 의미,기능만 수행
	
	const int Print(); // 함수 타입 앞에 const는 리턴값이 변하지 않는다는 뜻

};