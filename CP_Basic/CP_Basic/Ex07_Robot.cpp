#include "io.h"
#include "Ex07_RobotClass.h"

// ���� p.339 ����

void CRobotSpec()
{
	

	string Name[4] = {
	"�±Ǻ���",
	"��¡��",
	"��ĭ������",
	"�׷�������"};

	int Spec[4][3]
	{
		{18,80,3000},
		{17,70,2500},
		{20,90,3500},
		{22,100,5000}
	};

	CRobot Temp[4];

	for (int i = 0; i < 4; i++) {
		Temp[i].Set(Name[i],Spec[i][0], Spec[i][1], Spec[i][2]);
	}

	cout << "----All Robots Spec List----" << endl;

	for (int i = 0; i < 4; i++) {
		Temp[i].Print();
	}

}