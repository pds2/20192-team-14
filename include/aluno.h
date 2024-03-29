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
        Aluno(){};
        Aluno(string nome,string rg,string cpf,string dataNascimento, string matricula);
        string getMatricula();
        bool cadastrar() override;
        bool verificaNascimento(string dataNascimento) override;
};

#endif