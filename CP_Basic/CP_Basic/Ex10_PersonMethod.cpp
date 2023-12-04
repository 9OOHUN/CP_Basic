#include "io.h"
#include "Ex10_PersonClass.h"
#include <string>


void CpersonP::Set(string Name, int Age, int Gender)
{
	this->Name = Name;
	this->Age = Age;
	this->Gender = Gender;
}

string CpersonP::GetName()
{
	return this->Name;
}

int CpersonP::GetAge()
{
	return this->Age;
}

int CpersonP::GetGender()
{
	return this->Gender;
}

//--------------------------------//

void CpersonC::Set(string Name, int Age, int Gender, int ID, string Major)
{
	CpersonP::Set(Name, Age, Gender);

	this->ID = ID;
	this->Major = Major;
}

int CpersonC::GetID()
{
	return this->ID;
}

string CpersonC::GetMajor()
{
	return this->Major;
}

void CpersonC::Print()
{
	cout << "---------------------------" << endl;
	
	cout << "이름 : " << GetName() << endl;
	cout << "나이 : " << GetAge() << endl;

	if (GetGender() > 1) {
		cout << "성별 : 여성" << endl;
	}
	else {
		cout << "성별 : 남성" << endl;
	}

	cout << " ID  : " << GetID() << endl;
	cout << "전공 : " << GetMajor() << endl;

}

