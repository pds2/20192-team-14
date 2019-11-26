#include "../include/aluno.h"
//#include "../include/associado.h"
#include <iostream>
#include "string.h"

using namespace std;

//Associado socio;

Aluno::Aluno(string nome, string rg, string cpf, string dataNascimento, string matricula) : Pessoa (nome, rg, cpf, dataNascimento) {
    _matricula = matricula;
}

string Aluno::getMatricula() {
    return _matricula;
}

bool Aluno::verificaNome(string nome) {
    return true;
}

bool Aluno::cadastrar() {
    // Verifica se o nome é válido
}