#include "io.h"
#include "Ch17-1_OverloadingClass.h"

Overloading::Overloading()
{
	cout << "Class Overloading Test <Turn On>" << endl;
	cout << endl;

	this->Number = 1;
	this->Name = "Altman";
}

Overloading::~Overloading()
{
	cout << "Class Overloading Test <Turn Off>" << endl;
}


void Overloading::Print() 
{
	cout << this->Name << " | " << this->Number << endl;
}

void Overloading::Print(int Number) // <- �����ε��Ҷ� �Լ����� Ÿ�� ���ƾ� ��(void)
{
	this->Number = Number;

	cout << this->Name << " | " << this->Number << endl;
}

void Overloading::Print(string Name)
{
	this->Name = Name;

	cout << this->Name << " | " << this->Number << endl;
}

void Overloading::Print(int Number, string Name)
{
	this->Number = Number;
	this->Name = Name;

	cout << this->Name << " | " << this->Number << endl;
}

// ������ �����ε�
// �� Ÿ��       �� �Ҽ�      �� �Լ����   �� �Ű�����
Overloading Overloading::operator+(Overloading& arg)
{
	Overloading Temp; // == int A = 0; / �ӽú���

	Temp. Value = Value + arg.Value; // Ŭ���� ����Num�� �ܺο��� ������ �Ű����� Num�� ���ϴ� ��

	return Temp; // ���� Temp�� �� �־��ִ� ��
}