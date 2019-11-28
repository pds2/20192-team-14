#include "formado.h"
#include "doctest.h"

TEST_CASE("Teste do cadastro") {
	Formado formado = Formado("Pedro", "139.708.556-83", "MG-15.760.023", "20/05/1999", "2018046653", "20/05/2019")
	CHECK_EQ(formado.getNome(), "Pedro");
	CHECK_EQ(formado.getCpf(), "139.708.556-83");
	CHECK_EQ(formado.getRg(), "MG-15.760.023");
	CHECK_EQ(formado.getNascimento(), "20/05/1999");
	CHECK_EQ(formado.getMatricula(), "2018046653");
}

