#pragma once
#include "io.h"
#include "string"

class Member
{
private:
	std::string ID;
	std::string Name;
	int Point;

public:

	Member();
	~Member();

	void SetID(string ID);
	std::string GetID();

	void SetName(string Name);
	std::string GetName();

	void SetPoint(int);
	int GetPoint();

	void PrintMember();
};