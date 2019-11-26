#ifndef CEU_PESSOA_H
#define CEU_PESSOA_H

#include <iostream>
#include "string.h"

using namespace std;

class Pessoa {
    protected:
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
        virtual bool cadastrar() = 0;
        virtual bool verificaNome(string nomeVerificacao) = 0;
};

#endif