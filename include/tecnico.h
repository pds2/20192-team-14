#ifndef CEU_TECNICO_H
#define CEU_TECNICO_H

#include <iostream>
#include "string.h"
#include "../include/pessoa.h"

using namespace std;

class Tecnico : public Pessoa {
    private:
        string _registro;
    public:
        Tecnico(){};
        Tecnico(string nome,string cpf,string rg,string dataNascimento, string registro);
        string getRegistro();
        bool cadastrar() override;
        bool verificaNascimento(string dataNascimento) override;
};

#endif