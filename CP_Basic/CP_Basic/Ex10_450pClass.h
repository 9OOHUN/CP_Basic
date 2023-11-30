#pragma once
#include <string>

class Cperson
{
private:
	std::string Name;
	int Age = 0;
	int Gender;
	int ID;
	std::string Major;


public:

	Cperson();
	~Cperson();

	void Set(std::string Name, int Age, int Gender, int ID, std::string Major);
	std::string GetName();
	int GetAge();
	int GetGender();
	int GetID();
	std::string GetMajor();
	void Print();
};