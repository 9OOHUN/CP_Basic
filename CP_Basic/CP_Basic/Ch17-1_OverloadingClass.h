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

	// ������ �����ε� <- Ÿ��Ű���� void������ ���� Ŭ���� �̸�
	Overloading operator+(Overloading& arg);
	// ���� �ִ°� �ƴ϶� �ּҸ� �־���
};

