#include "io.h"
#include "Ex08_Member.h"

Member::Member()
{

}

Member::~Member()
{

}


void Member::SetID(string ID)
{
	this->ID = ID;
}

std::string Member::GetID()
{
	return this->ID;
}


void Member::SetName(string Name)
{
	this->Name = Name;
}

std::string Member::GetName()
{
	return this->Name;
}

void Member::SetPoint(int Point)
{
	this->Point = Point;
}

int Member::GetPoint()
{
	return this->Point;
}

void Member::PrintMember()
{
	cout << this->ID << " | "
		<< this->Name << " | "
		<< this->Point << endl;
}