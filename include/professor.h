#ifndef CEU_PROFESSOR_H
#define CEU_PROFESSOR_H

#include <iostream>
#include "string.h"
#include "../include/pessoa.h"

using namespace std;

class Professor : public Pessoa {
    private:
        string _registro;
    public:
        Professor(){};
        Professor(string nome,string rg,string cpf,string dataNascimento, string registro);
        string getRegistro();
        bool cadastrar() override;
        bool verificaNascimento(string dataNascimento) override;
};

#endif