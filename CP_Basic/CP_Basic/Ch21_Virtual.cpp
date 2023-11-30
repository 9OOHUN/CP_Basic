#include "io.h"
#include "Ch21_Virtual.h"

// �����Լ� = Ŭ���� ���� ����, �Լ� ���� ���ε� Virtual

// ���� ���ε� ���¿��� �Լ� �����ε��� �ϴ� ��� ������ ����� �־
// ���� �Լ��� ������ �� �����ε� ����

void Virtual()
{
	// Ŭ���� ���� ���� (�Լ� ���� ���ε��� �ȵ�)
	Parent* pParent = new Parent;
	Child* pChild = new Child;

	pParent->PrintClass(); // Parent Class
	
	pParent = pChild;

	pParent->PrintClass(); // Parent Class

	// ���� Ŭ�������� ���� ������ ���� �ȵ�,
	// ��������(������)�� �ּҰ��� Ȱ���ؼ� ������ ���� ����
	cout << endl;
	// �޼ҵ忡�� �Լ� ���� ���ε�(Virtual)�� VŬ���� ���� ����
	VParent* pVParent = new VParent;
	VChild* pVChild = new VChild;

	pVParent->PrintClass(); // VParent Class

	pVParent = pVChild;
	
	pVParent->PrintClass(); // VChild Class
}