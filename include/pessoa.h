#ifndef CEU_PESSOA_H
#define CEU_PESSOA_H

#include <iostream>
#include "string.h"

using namespace std;

class Pessoa {
    private:
        string _nome;
        string _cpf;
        string _rg;
        string _dataNascimento;
    public:
        Pessoa(string nome,string cpf,string rg,string dataNascimento);
        string getNome();
        string getCpf();
        string getRg();
        string getNascimento();
};

#endif