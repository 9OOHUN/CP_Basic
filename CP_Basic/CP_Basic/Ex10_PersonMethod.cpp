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
	
	cout << "�̸� : " << GetName() << endl;
	cout << "���� : " << GetAge() << endl;

	if (GetGender() > 1) {
		cout << "���� : ����" << endl;
	}
	else {
		cout << "���� : ����" << endl;
	}

	cout << " ID  : " << GetID() << endl;
	cout << "���� : " << GetMajor() << endl;

}

