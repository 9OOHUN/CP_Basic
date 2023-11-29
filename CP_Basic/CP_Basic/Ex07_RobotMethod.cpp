#include "io.h"
#include "Ex07_RobotClass.h"

// 교재 p.339 문제

CRobot::CRobot()
{
	this->Name;
	this->Tall = 0;
	this->Weight =0;
	this->Power = 0;
}

CRobot::~CRobot()
{

}

void CRobot::Set(string Name, int Tall, int Weight, int Power)
{
	this->Name = Name;
	this->Tall = Tall;
	this->Weight = Weight;
	this->Power = Power;
}

void CRobot::Print()
{
	cout << this->Name << " | "
		<< this->Tall << " | "
		<< this->Weight << " | "
		<< this->Power << endl;
}