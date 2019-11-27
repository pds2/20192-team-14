#ifndef CEU_ASSOCIADO_H
#define CEU_ASSOCIADO_H

#include <iostream>
#include "string.h"
#include "../include/aluno.h"

using namespace std;

class Associado: public Aluno {
    private:
        //string arrayAssociados[];
        int _registroCEU = 0;
    public:
        Associado(Aluno* aluno);
};

#endif