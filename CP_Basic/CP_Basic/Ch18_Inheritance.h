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
class UsedCar:public Car // <- �θ�Ŭ������ �ۺ� ���
{
private:

	int NewPrice = 30000000;

public:

	void PrintPrice();
};