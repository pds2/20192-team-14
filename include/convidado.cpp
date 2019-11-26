convidado.cpp
#include "../include/convite.h"
#include <iostream>
#include "string.h"
#include "excecoes.h"

using namespace std;

Convidado::Convidado(string nome, string rg, string cpf, string dataNascimento, string convite) : Pessoa (nome, rg, cpf, dataNascimento) {
    _convite = convite;
}

string Convidado::getConvite() {
    return _convite;
}