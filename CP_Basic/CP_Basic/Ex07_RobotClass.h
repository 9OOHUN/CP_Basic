#pragma once
// 교재 p.339 문제

class CRobot
{
private:
	
	std::string Name;
	int Tall;
	int Weight;
	int Power;

public:

	CRobot();
	~CRobot();

	void Set(std::string, int, int, int);
	void Print();
};