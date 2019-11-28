#include "professor.h"
#include "doctest.h"

TEST_CASE("Teste do cadastro") {
	Professor professor = Professor("Pedro", "139.708.556-83", "MG-15.760.023", "20/05/1999", "2018046653")
	CHECK_EQ(professor.getNome(), "Pedro");
	CHECK_EQ(professor.getCpf(), "139.708.556-83");
	CHECK_EQ(professor.getRg(), "MG-15.760.023");
	CHECK_EQ(professor.getNascimento(), "20/05/1999");
	CHECK_EQ(professor.getRegistro(), "2018046653");
}
