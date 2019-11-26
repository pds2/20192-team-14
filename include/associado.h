#ifndef CEU_ASSOCIADO_H
#define CEU_ASSOCIADO_H

#include <iostream>
#include "string.h"

using namespace std;

class Associado: public Aluno {
    private:
        //string arrayAssociados[];
        int _registroCEU = 0;
    public:
        void cadastro(Aluno &p1);
};

#endif