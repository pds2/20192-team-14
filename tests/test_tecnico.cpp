#include "../include/tecnico.h"
#include "doctest.h"

TEST_CASE("Teste do cadastro") {
	Tecnico tecnico = Tecnico("Pedro", "139.708.556-83", "MG-15.760.023", "20/05/1999", "2018046653")
	CHECK_EQ(tecnico.getNome(), "Pedro");
	CHECK_EQ(tecnico.getCpf(), "139.708.556-83");
	CHECK_EQ(tecnico.getRg(), "MG-15.760.023");
	CHECK_EQ(tecnico.getNascimento(), "20/05/1999");
	CHECK_EQ(tecnico.getRegistro(), "2018046653");
}
