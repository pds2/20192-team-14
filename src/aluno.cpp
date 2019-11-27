#include "../include/aluno.h"
#include <iostream>
#include "string.h"
#include <string>
#include "../include/excecoes.h"
#include <cstdlib>

using namespace std;

Aluno::Aluno(string nome, string rg, string cpf, string dataNascimento, string matricula) : Pessoa (nome, rg, cpf, dataNascimento) {
    _matricula = matricula;
}

string Aluno::getMatricula() {
    return _matricula;
}

bool Aluno::verificaNascimento(string dataNascimento) {
    int dia = atoi(dataNascimento.substr(0,2).c_str());
    int mes = atoi(dataNascimento.substr(3,2).c_str());
    int ano = atoi(dataNascimento.substr(6,4).c_str());

    bool retorno = Aluno::isValidDate(dia, mes, ano);

    return retorno;
}

bool Aluno::cadastrar() {
    bool testeNome = Aluno::verificaNome(_nome);
    bool testeNascimento = verificaNascimento(_dataNascimento);
    bool testeCpf = Aluno::verificaCpf(_cpf);
    bool testeRg = Aluno::verificaRg(_rg);
    bool testeMatricula = Aluno::verificaMatricula(_matricula);

    if (testeNome == true &&
        testeNascimento == true &&
        testeCpf == true &&
        testeRg == true &&
        testeMatricula == true) {
            return true;
        } else {
            return false;
    }
}