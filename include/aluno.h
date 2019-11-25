#ifndef CEU_ALUNO_H
#define CEU_ALUNO_H

#include <iostream>
#include "string.h"
#include "../include/pessoa.h"

using namespace std;

class Aluno : public Pessoa {
    private:
        string _matricula;
    public:
        Aluno(string nome,string cpf,string rg,string dataNascimento, string matricula);
        string getMatricula();
};

#endif