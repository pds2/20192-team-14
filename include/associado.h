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
        bool existeSocio(string cpf);
        Associado(){};
        Associado(int tipo, string nome, string rg, string cpf, string dataNascimento, string documentoIdentificador);
};

#endif