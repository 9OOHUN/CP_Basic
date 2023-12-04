#pragma once
#include <string>
using namespace std;

class CpersonP
{
protected:
	// 10 -> int : 10, string : "10" + "10" = "1010"
	string Name = { 0 };
	int Age = 0;
	int Gender = 0;

public:

	void Set(std::string Name, int Age, int Gender);
	string GetName();
	int GetAge();
	int GetGender();

};

class CpersonC : public CpersonP
{
private:

	int ID;
	string Major;

public:

	void Set(std::string Name, int Age, int Gender, int ID, string Major);
	int GetID();
	string GetMajor();
	void Print();
};