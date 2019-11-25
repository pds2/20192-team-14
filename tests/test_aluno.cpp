#include "aluno.h"
#include"doctest.h"



TEST_CASE("Testando o cadastro"){
	CHECK_THROWS(Aluno a("Pedro", "139.708.556-83", "MG-15.760.023", "20/05/1999", "2018046653"));
}
