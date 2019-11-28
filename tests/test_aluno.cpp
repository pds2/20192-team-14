#include "aluno.h"
#include "doctest.h"

TEST_CASE("Teste do cadastro") {
	Aluno aluno = Aluno("Pedro", "139.708.556-83", "MG-15.760.023", "20/05/1999", "2018046653")
	CHECK_EQ(aluno.getNome(), "Pedro");
	CHECK_EQ(aluno.getCpf(), "139.708.556-83");
	CHECK_EQ(aluno.getRg(), "MG-15.760.023");
	CHECK_EQ(aluno.getNascimento(), "20/05/1999");
	CHECK_EQ(aluno.getMatricula(), "2018046653");
}

