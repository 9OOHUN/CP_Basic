#pragma once
// 423p. 상속예제문

class CParent
{
protected:

	int Value3;

public:

	int Value1;

	CParent();
	~CParent();

	void Set(int Value3);

	void Func1();
	void Func3();
};



class CTest :public CParent
{
private:

	int Value1; // 재정의
	int Value2; // 새로 정의

public:

	CTest();
	~CTest();

	void SetVal1(int Value1);
	void SetVal2(int Value2);

	int GetVal1();
	int GetVal2();

	void Func1(); // 재정의 : 부모클래스 함수정의 삭제됨
	void Func2(); // 새로 정의
};

/*
	오버라이딩(재정의) 철저하게 자식클래스 관점

	자식클래스에서 부모클래스에 있는 함수와
	동일한 이름의 함수또는 변수를 다시 정의

	함수 오버라이딩을 많이 씀(변수를 재정의하면 헷갈리기 때문)
*/