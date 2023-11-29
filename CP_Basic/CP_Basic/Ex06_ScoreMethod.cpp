#include "io.h"
#include "Ex06_ScoreClass.h"

Student::Student() // 기본생성자 안쓰더라도 껍데기 만들어 놔야 함
{
	this->Total = 0;
	this->Average = 0.0f;
	this->Grade = NULL;
} 

Student::Student(char Name, int Kor, int Eng, int Math)
{
	this->Name = Name;
	this->Kor = Kor;
	this->Eng = Eng;
	this->Math = Math;

	this->Total = 0;
	this->Average = 0.0f;
	this->Grade = NULL;
}

Student::~Student(){}

void Student::Set(char Name, int Kor, int Eng, int Math)
{
	this->Name = Name;
	this->Kor = Kor;
	this->Eng = Eng;
	this->Math = Math;
}

int Student::OperationTotal()
{
	this->Total = this->Kor + this->Eng + this->Math;

	return this->Total;
}

float Student::OperationAverage()
{
	this->Average = this->Total / 3;

	return this->Average;
}

char Student::OperationGrade()
{
	if (this->Average >= 90) {
		this->Grade = 'A';
	}
	else if(this->Average >= 80)
	{
		this->Grade = 'B';
	}
	else if (this->Average >= 70)
	{
		this->Grade = 'C';
	}
	else if (this->Average >= 60)
	{
		this->Grade = 'D';
	}
	else {
		this->Grade = 'F';
	}

	return this->Grade;
}

void Student::PrintScore()
{
	this->OperationTotal();	// 위에서 사용한 함수 바로 적용 가능, 똑같이 this 붙이기
	this->OperationAverage();
	this->OperationGrade();

	cout << "Student Name & Subject Score : " << this->Name << " | " << 
		this->Kor << " | " <<
		this->Eng << " | " <<
		this->Math << endl;
	cout << "Total Score : " << this->Total << endl;
	cout << "Average Score : " << this->Average << endl;
	cout << "Student Grade : " << this->Grade << endl;
	cout << endl;
}