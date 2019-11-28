#ifndef CEU_CONVIDADO_H
#define CEU_CONVIDADO_H

#include <iostream>
#include "string.h"
#include "../include/pessoa.h"

using namespace std;

class Convidado : public Pessoa {
    public:
        Convidado(){};
        Convidado(string nome,string rg,string cpf,string dataNascimento);
        bool cadastrar() override;
        bool verificaNascimento(string dataNascimento) override;
};

#endif