#include "io.h"
#include "Ex08_Member.h"
#include <vector>

void MemberShip()
{
	cout << "---Member List : ID, Name, Point---" << endl;
	
	std::string ID[4] = {"A01", "B02", "C03", "D04"};
	std::string Name[4] = {
	"태권브이",
	"마징가",
	"메칸더브이",
	"그랜다이져"
	};

	int Point[4] = { 10,20,30,40 };

	Member People[4];

	for (int i = 0; i < 4; i++) {
		People[i].SetID(ID[i]);
		People[i].SetName(Name[i]);
		People[i].SetPoint(Point[i]);
	}

	for (int i = 0; i < 4; i++) {
		People[i].PrintMember();
	}

}