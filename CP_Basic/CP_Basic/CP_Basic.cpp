// Ch01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Input/Output Stream

#define Number 100 // �ѹ� �빮���� ������ ������ �������� ����

using namespace std;
// std::cout => cout

int main()
{
	std::cout << "Hello World!\n";

	// std : standard
	cout << "Hello C++\n";
	cout << "C++ Programming\n";
	cout << 500 << endl; // endl : endline
	cout << Number + 50 << endl;

	// Ű����, ����� : ����, ��ɹ�
	// Ű���� : ���� Ÿ�� ����

	int Number1; // ���� ���� ��
	Number1 = 10;

	int Number2 = 10; // ���� ���� �� �ʱ�ȭ

	int Number3 = 1, Number4 = 2;

	Number3 = 5;

	// �ɺ��� ���(Constant)
	const int Number5 = 10;

	// Number5 = 30; //���� ���� �� �� ����

	// ������ Ÿ�� - ���� ������ Ÿ�� - ������, �Ǽ���

	// ������ Ÿ��(int : integer)
	int NUM1 = 10;
	short NUM2 = 10;
	long NUM3 = 10;

	// �Ǽ��� Ÿ��(float)
	float NUM10 = 1.234f;
	double NUM11 = 1.234;

	// ���� ������ : ����(1��), ���ڿ�(2���̻�)
	// char : character
	// char  Ÿ�� ���� ǥ�� : '' ���
	// ���ڿ� : "" ���
	char Letter = 'a';

	// bool Ÿ�� ������
	// ��/���� ���� : True/False, Yes/No, On/Off
	bool Condition = true;

	// auto ���� Ű����
	auto AutoNum = 10;

	cout << Number1 << endl;

	// ��� ������
	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	// ���� ������ : ����,���� �������� �ݺ� ������ ������ ����
	int Inc = 30;

	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;

	Inc = Inc + 3;
	Inc += 3;

	Inc = Inc + 1;
	Inc += 1; // ���� �춧 ���� ��(ī����)
	Inc++; // C => C++ => C++++

	Inc = Inc - 1;
	Inc -= 1;
	Inc--;

	Inc = Inc * 3;
	Inc *= 3;
	Inc /= 3;
	Inc %= 3;

}

// ��Ʈ�� ����Ʈ�� ���� ����
/*
	bit : ��ǻ�� ������ ������ �ּҴ���
	byte : ��ǻ�� ���� ������ �ּҴ���(8bit)
	1byte = 8bit

	2���� ���� ������ : 0,1
	���� ��� �⺻������ �����ϸ� ����
	1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
	2^0 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 ������ ����ϸ� ����, 256(2^8) ���̾� = 8bit(1byte)
	�����ڵ� UTF-8 : õ�ڹ����� ��� Ŀ�� ���� 2byte(16bit) = 2^16���� ������ ���� ǥ���
	Ʈ���÷� : 2^24(24bit) RGB ����ȥ��(������ �����), ������ ����ȥ��(������ ��ο���)
	- R 8bit, G 8bit, B 8bit = 24bit
	��ǥ��, ���� ǥ��, �������ּ� ǥ�� : 1byte(8bit) �������� Ȯ��

	= : ���ʿ� ����, �����ʿ� �����Ͱ����� [����, �Ҵ�(assign)]�̶�� ������ ���(����ó�� �����ϴ� �ƴ�)
	% : ����������
*/