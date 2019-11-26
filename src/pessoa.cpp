#include "../include/pessoa.h"
#include <iostream>
#include "string.h"
#include "../include/excecoes.h"

using namespace std;

Pessoa::Pessoa(string nome, string rg, string cpf, string dataNascimento) {
    _nome = nome;
    _rg = rg;
    _cpf = cpf;
    _dataNascimento = dataNascimento;
}

string Pessoa::getNome() {
    return _nome;
}

string Pessoa::getCpf() {
    return _cpf;
}

string Pessoa::getRg() {
    return _rg;
}

string Pessoa::getNascimento() {
    return _dataNascimento;
}