#include "io.h"
#include "Ex10_450pClass.h"
#include <string>

Cperson::Cperson(){}
Cperson::~Cperson(){}

void Cperson::Set(string Name, int Age, int Gender, int ID, string Major)
{
	this->Name = Name;
	this->Age = Age;
	this->Gender = Gender;
	this->ID = ID;
	this->Major = Major;
}

string Cperson::GetName()
{
	return this->Name;
}

int Cperson::GetAge()
{
	return this->Age;
}

int Cperson::GetGender()
{
	return this->Gender;
}

int Cperson::GetID()
{
	return this->ID;
}

string Cperson::GetMajor()
{
	return this->Major;
}

void Cperson::Print()
{
	cout << "---------------------------" << endl;
	
	cout << "�̸� : " << this->Name << endl;
	cout << "���� : " << this->Age << endl;

	if (this->Gender > 1) {
		cout << "���� : ����" << endl;
	}
	else {
		cout << "���� : ����" << endl;
	}

	cout << "ID : " << this->ID << endl;
	cout << "���� : " << this->Major << endl;

}