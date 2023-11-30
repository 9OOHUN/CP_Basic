#pragma once

// Parents Class
class Car
{
public:

	int Year = 10;

protected:

	int Fuel;
};

// Child Class
class UsedCar:public Car // <- 부모클래스의 퍼블릭 사용
{
private:

	int NewPrice = 30000000;

public:

	void PrintPrice();
};