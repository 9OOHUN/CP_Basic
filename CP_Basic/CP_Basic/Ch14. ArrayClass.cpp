#include"io.h"
#include <array>

/*
   C++ STL(Standard Library : ǥ�� ���̺귯��)
     - ���̺귯�� : Ŭ���� ��ü, �Լ��� ��Ƴ��� ��
	 - ���̺귯��, �����ӿ�ũ, ���� : Ư�� ����� ��Ƽ� App, Game ������ �� ����� �� �ְ�

   Array(�迭) Ŭ���� , String(���ڿ�) Ŭ����

   Array, String Ŭ���� ����
      - �� Ŭ������ ���Ե� ������Ƽ, �޼ҵ带 ���
*/

void ArrayClass()
{
    array<int, 3> Number = { 10,20,30 };

    cout << Number.size() << endl;  // �迭 ����
    cout << Number.front() << endl; // ù��° ���� ���
    cout << Number.back() << endl;  // ������ ���� ���
    cout << Number.at(0) << endl;   // ���� ���� ���
    
    for (int i = 0; i < Number.size(); i++) {
        cout << Number.at(i) << endl;
    }
}