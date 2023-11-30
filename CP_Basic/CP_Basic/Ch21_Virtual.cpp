#include "io.h"
#include "Ch21_Virtual.h"

// 가상함수 = 클래스 동적 생성, 함수 동적 바인딩 Virtual

// 정적 바인딩 상태에서 함수 오버로딩을 하는 경우 문제가 생길수 있어서
// 가상 함수로 선언한 후 오버로딩 구현

void Virtual()
{
	// 클래스 동적 생성 (함수 동적 바인딩은 안됨)
	Parent* pParent = new Parent;
	Child* pChild = new Child;

	pParent->PrintClass(); // Parent Class
	
	pParent = pChild;

	pParent->PrintClass(); // Parent Class

	// 원래 클래스끼리 직접 데이터 소통 안됨,
	// 동적생성(포인터)의 주소값을 활용해서 데이터 소통 가능
	cout << endl;
	// 메소드에서 함수 동적 바인딩(Virtual)한 V클래스 동적 생성
	VParent* pVParent = new VParent;
	VChild* pVChild = new VChild;

	pVParent->PrintClass(); // VParent Class

	pVParent = pVChild;
	
	pVParent->PrintClass(); // VChild Class
}