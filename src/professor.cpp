#include "../include/professor.h"
#include <iostream>
#include "string.h"
#include "../include/excecoes.h"

using namespace std;

Professor::Professor(string nome, string rg, string cpf, string dataNascimento, string registro) : Pessoa (nome, rg, cpf, dataNascimento) {
    _registro = registro;
}

string Professor::getRegistro() {
    return _registro;
}