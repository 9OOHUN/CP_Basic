#include "io.h"

void Enumeration()
{
	// Ÿ�� ����
	enum day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
	// �� Ÿ�԰� �����͸� �Բ� ����� �� / ���ڸ� ""���� ���ó�� ���ǰԲ� ���� enum
	
	// ���� ����
	day DayName = Sun;

	// ���
	cout << DayName << endl; // <- '0'���� �� ����/�ε��� ����

	// ���� ������ ����
	DayName = Wed;

	// ���
	cout << DayName << endl; // <- ������ ���� ���ڷ� Ȱ���ϰ� ���ִ� ��
}

void EnumerationEnum()
{
	// ex01
	enum day { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

	day DayName2 = Fri;
	cout << DayName2 << endl;

	// ex02
	cout << day::Thu << endl; // <- ���� ���� ���� ::(���ӽ����̽�) ����ؼ� �ٷ� ���
}

