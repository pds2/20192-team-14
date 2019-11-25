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
        Professor(string nome,string cpf,string rg,string dataNascimento, string registro);
        string getRegistro();
};

#endif