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
        Formado(string nome,string cpf,string rg,string dataNascimento, string matricula, string dataFormatura);
        string getFormatura();
        string getMatricula();
};

#endif