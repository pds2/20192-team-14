#include "../include/aluno.h"
#include <iostream>
#include "string.h"
#include "excecoes.h"

using namespace std;

Aluno::Aluno(string nome, string rg, string cpf, string dataNascimento, string matricula) : Pessoa (nome, rg, cpf, dataNascimento) {
    _matricula = matricula;
}

string Aluno::getMatricula() {
    return _matricula;
}