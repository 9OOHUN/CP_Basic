#include "io.h"
#include <String>

/*
	String Ŭ����
	- ���ڿ��� �ٷ�� Ŭ����
*/

void StringClass()
{
	// ���� char Ȱ�� ���� ǥ���
	char Character = 'A';
	char Char[6] = "Hello";

	string Word = "Hello Object Oriented Programming";
	cout << Word << endl;

	string Word2("World");
	cout << Word2 << endl;

	cout << Word.size() << endl;  // ���� ��
	cout << Word.front() << endl; // ù��° ����
	cout << Word.back() << endl;  // ������ ����

	// sub string :  �־��� ������ŭ ���
	cout << Word.substr(5) << endl; // 5��° ���� ~
	cout << Word.substr(5,9) << endl; // 5���� �����ؼ� 9���� ���

	Word2.push_back('A'); // �ڡڡ��߿� �ڿ� ���̱�
	cout << Word2 << endl; // �׳� �ڿ� ���̴� �ǹ̺��� �迭�� ���� ��������� ��Ʈ�� ��
	cout << Word2.size() << endl;
}