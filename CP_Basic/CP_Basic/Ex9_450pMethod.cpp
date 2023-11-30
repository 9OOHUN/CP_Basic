#include "io.h"
#include "Ex9_450pClass.h"
#include <string>

Cperson::Cperson(){}
Cperson::~Cperson(){}

void Cperson::Set(string Name, int Age, int Gender)
{
	this->Name = Name;
	this->Age = Age;
	this->Gender = Gender;
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

void Cperson::Print()
{
	cout << this->Name << " | " <<
		this->Age << " | " <<
		this->Gender << endl;
}