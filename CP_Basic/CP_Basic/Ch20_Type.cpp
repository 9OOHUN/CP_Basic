#include "io.h"

/*
	����ȯ
	- ������ ���� Ÿ���� ��ȯ
	- ������ ����Ǵ� �������� Ÿ���� ��ȯ�� ��ó�� ��
	  ���̵��� ǥ���ϴ� ��
*/

void Type()
{
	int Kor = 90;
	int Eng = 80;
	int Math = 75;

	float Average = 0;

	// 1. ����, �����Ͱ� Ÿ���� ����
	// 2. ���� ����� ����ȭ �Ǵ� ����� ���
	// ����ȯ(Type Cast)/������ Ÿ���� �ٲ�

	//Average = float(Kor + Eng + Math) / 3);
	// �� �ڿ� kor~ �̹� int�� ��� �Ǿ� �Ҽ��� ����, ������ ����

	Average = ( float(Kor) + float(Eng) + float(Math) ) / 3;
	// �� ������ ���� ����ȯ ����
	// �ٿ����� Average = float(Kor + Eng + Math) / 3;

	cout << Average << endl;
}