#ifndef CEU_ASSOCIADO_H
#define CEU_ASSOCIADO_H

#include <iostream>
#include <vector>
#include "string.h"

using namespace std;

class Associado {
    private:
        string _nome;
        string _cpf;
        int _identificadorTipo;
        string _rg;
        string _dataNascimento;
        string _documentoUfmg;
    public:
        vector<Associado>associados;
        void verAssociados();
        Associado(){};
        Associado(int tipo, string nome, string cpf, string rg, string dataNascimento, string documentoIdentificador);
};

#endif