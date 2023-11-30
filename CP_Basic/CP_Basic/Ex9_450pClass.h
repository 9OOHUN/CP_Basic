#pragma once
#include <string>

class Cperson
{
private:
	std::string Name;
	int Age = 0;
	int Gender = 0;

public:

	Cperson();
	~Cperson();

	void Set(std::string Name, int Age, int Gender);
	std::string GetName();
	int GetAge();
	int GetGender();
	void Print();
};