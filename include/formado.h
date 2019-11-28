#ifndef CEU_FORMADO_H
#define CEU_FORMADO_H

#include <iostream>
#include "string.h"
#include "../include/pessoa.h"

using namespace std;

class Formado : public Pessoa {
    private:
        string _matricula;
        string _dataFormatura;
    public:
        Formado(){};
        Formado(string nome,string rg,string cpf,string dataNascimento, string matricula, string dataFormatura);
        string getFormatura();
        string getMatricula();
        bool cadastrar() override;
        bool verificaNascimento(string dataNascimento) override;
};

#endif