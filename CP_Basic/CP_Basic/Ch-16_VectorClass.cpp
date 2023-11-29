#include "io.h"
#include <Vector>

void VectorClass()
{
	vector<int> VectorNumber; // 개수 미지정, 선언만

	cout << VectorNumber.size() << endl;

	VectorNumber.push_back(10);
	cout << VectorNumber.size() << endl;

	VectorNumber.push_back(20);				// ★★★ 중요
	cout << VectorNumber.size() << endl;

	VectorNumber.pop_back();
	cout << VectorNumber.size() << endl;

	vector<int> Number(3); // 개수 지정선언
	vector<int> Number2(3, 2); // 개수 지정, 원소내용 지정
}