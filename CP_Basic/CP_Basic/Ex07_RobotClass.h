#pragma once
// ���� p.339 ����

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