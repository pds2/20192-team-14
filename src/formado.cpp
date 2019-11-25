#include "../include/formado.h"
#include <iostream>
#include "string.h"
#include "excecoes.h"

using namespace std;

Formado::Formado(string nome, string rg, string cpf, string dataNascimento, string matricula, string dataFormatura) : Pessoa (nome, rg, cpf, dataNascimento) {
    _matricula = matricula;
    _dataFormatura = dataFormatura;
}

string Formado::getMatricula() {
    return _matricula;
}

string Formado::getFormatura() {
        return _dataFormatura;
}