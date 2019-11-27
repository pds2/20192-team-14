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

bool Professor::verificaNascimento(string dataNascimento) {
    int dia = atoi(dataNascimento.substr(0,2).c_str());
    int mes = atoi(dataNascimento.substr(3,2).c_str());
    int ano = atoi(dataNascimento.substr(6,4).c_str());

    bool retorno = Professor::isValidDate(dia, mes, ano);

    return retorno;
}

bool Professor::cadastrar() {
    bool testeNome = Professor::verificaNome(_nome);
    bool testeNascimento = verificaNascimento(_dataNascimento);
    bool testeCpf = Professor::verificaCpf(_cpf);
    bool testeRg = Professor::verificaRg(_rg);
    bool testeRegistro = Professor::verificaRegistro(_registro);

    if (testeNome == true &&
        testeNascimento == true &&
        testeCpf == true &&
        testeRg == true &&
        testeRegistro == true) {
            return true;
        } else {
            return false;
    }
}