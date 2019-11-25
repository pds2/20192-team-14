#include "../include/tecnico.h"
#include <iostream>
#include "string.h"

using namespace std;

Tecnico::Tecnico(string nome, string rg, string cpf, string dataNascimento, string registro) : Pessoa (nome, rg, cpf, dataNascimento) {
    _registro = registro;
}

string Tecnico::getRegistro() {
    return _registro;
}