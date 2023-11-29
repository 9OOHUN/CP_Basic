#include "io.h"
#include "Ex06_ScoreClass.h"

/*
	Ex03_Function의 255p. 2. 변형문제 => 클래스 + 구조체 + 연산자
	- 네 학생의 국,영,수 성적을 이용해서 각 학생의 총점과 평균을 계산

	평균점수 : 90~100 : A, 80~89 : B, 70~79 : C, 60~69 : D, 나머지 F

	  St | Ko  | En  | Ma |
	  W  | 100 | 100 | 50 |
	  X  |  90 |  70 | 80 |
	  Y  |  70 |  80 | 90 |
	  Z  |  80 | 100 | 90 |
*/

void Score()
{
/*
	*직관적 원본
	
	Student st01('W', 100, 100, 50);
	Student st02('X', 90, 70, 80);
	Student st03('Y', 70, 80, 90);
	Student st04('Z', 80, 100, 90);

	st01.PrintScore();
	st02.PrintScore();
	st03.PrintScore();
	st04.PrintScore();

	↑ 값이 불규칙적으로 반복문 패턴 생성 어려움

	*데이터 입력방법
		- 키보드, 직접입력
		- 파일, Database 불러오기 (GPT 등 LLM씀(Large Language Model)구글기록비슷
		- 데이터 가져올때 [표], 즉 [2차원 배열]로 가져오면 활용 편해짐
		→ 배열은 타입이 하나로 정해짐(int, char 등), 위처럼 char 섞인 경우 배열을 2개로 나누기
		→ 배열[이름] 1개, 배열[점수]2차원배열 1개
*/

	// **코드 => 수정/개선 => Refactoring

	char Name[4] = { 'W', 'X', 'Y', 'Z' };

	int Score[4][3] = 
	{
		{100,100,50},
		{90,70,80},
		{70,80,90},
		{80,100,90}
	};

	// 반복문 쓰려면 set, get 활용해야함
	Student st[4];

	for (int i = 0; i < 4; i++) {
		st[i].Set(Name[i], Score[i][0], Score[i][1], Score[i][2]);
	}

	for (int i = 0; i < 4; i++) {
		st[i].PrintScore();
	}
}