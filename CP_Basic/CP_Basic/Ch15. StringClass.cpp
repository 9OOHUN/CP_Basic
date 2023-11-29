#include "io.h"
#include <String>

/*
	String 클래스
	- 문자열을 다루는 클래스
*/

void StringClass()
{
	// 원래 char 활용 문자 표기법
	char Character = 'A';
	char Char[6] = "Hello";

	string Word = "Hello Object Oriented Programming";
	cout << Word << endl;

	string Word2("World");
	cout << Word2 << endl;

	cout << Word.size() << endl;  // 글자 수
	cout << Word.front() << endl; // 첫번째 글자
	cout << Word.back() << endl;  // 마지막 글자

	// sub string :  주어진 범위만큼 출력
	cout << Word.substr(5) << endl; // 5번째 부터 ~
	cout << Word.substr(5,9) << endl; // 5부터 시작해서 9개를 출력

	Word2.push_back('A'); // ★★★중요 뒤에 붙이기
	cout << Word2 << endl; // 그냥 뒤에 붙이는 의미보다 배열의 개수 자유자재로 컨트롤 뜻
	cout << Word2.size() << endl;
}