#include "io.h"
#include "Ch13-3_This.h"

/*
	this-> ��ü
	- Ŭ���� ���ο��� ���� �� Ŭ���� ��Ī
*/

Phone::Phone()
{
	Company = NULL;
	ModelNumber = 0;

	cout << "Class Construct" << endl;
}

Phone::Phone(char Company, int ModelNumber)
{
	this->Company = Company;			// Ŭ���� ������Ƽ�� �޼ҵ� �Ķ���� ����
	this->ModelNumber = ModelNumber;	// ����ó�� ������ ����� (�𸮾� �߿�!!)

	cout << "Class Parameter Construct" << endl;
}

Phone::~Phone()
{
	cout << "Class Parameter Destruct" << endl;
}



void Phone::PrintCompany()
{

}

void Phone::PrintModelNumber()
{

}