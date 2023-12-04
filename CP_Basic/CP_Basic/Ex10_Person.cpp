#include "io.h"
#include "Ex10_PersonClass.h"
#include <string>

void Person()
{
	CpersonC s1;

	s1.Set("ºËµπ¿Ã", 22, 1, 1000, "∑Œ∫ø¡∂¡æ");
	s1.Print();

	CpersonC s2;

	s2.Set("Ω…√ª¿Ã", 18, 2, 1001, "ø’∫Ò");
	s2.Print();
}