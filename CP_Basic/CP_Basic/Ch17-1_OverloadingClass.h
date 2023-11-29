#include "io.h"
#include <string>

class Overloading
{
private:

	int Number;
	string Name;

public:

	int Value = 0;

	Overloading();
	~Overloading();

	void Print();
	void Print(int Number);
	void Print(std::string Name);
	void Print(int, std::string);

	// 연산자 오버로딩 <- 타입키워드 void같은거 말고 클래스 이름
	Overloading operator+(Overloading& arg);
	// 값을 넣는게 아니라 주소를 넣어줌
};

