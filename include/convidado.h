#ifndef CEU_CONVITE_H
#define CEU_CONVITE_H

#include <iostream>
#include "string.h"
#include "pessoa.h"
#include "associado.h"
#include "excecoes.h"

using namespace std;

class Convidado : public Pessoa {
    private:
        string _convite;
    public:
        Convite(string nome,string cpf,string rg,string dataNascimento, string convite);
        string getConvite();
};

#endif