#pragma once

class Parent
{
public:
	void PrintClass();
};


class Child : public Parent
{
public:
	void PrintClass();
	//↑ 오버라이딩(재정의)로 자식함수만 남음
};

//-----------------------------------//

class VParent
{
public:
	virtual void PrintClass();
};


class VChild : public VParent
{
public:
	virtual void PrintClass();
};