#ifndef CEU_CONVITE_H
#define CEU_CONVITE_H

#include <iostream>
#include <vector>
#include "string.h"
#include "../include/pessoa.h"

using namespace std;

class Convite {
    private:
        Pessoa _convidado;
        string _cpfSocio;
        string _dataConvite;
    public:
        vector<Convite>convites;
        void verConvites();
        void verConviteX(int x);
        Convite(){};
        Convite(Pessoa convidado,string cpfSocio, string dataConvite);
};

#endif