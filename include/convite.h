#ifndef CEU_CONVITE_H
#define CEU_CONVITE_H

#include <iostream>
#include <vector>
#include "string.h"
#include "../include/convidado.h"

using namespace std;

class Convite {
    private:
        Convidado _convidado;
        string _cpfSocio;
        string _dataConvite;
    public:
        vector<Convite>convites;
        void verConvites();
        void verConviteX(int x);
        Convite(){};
        Convite(Convidado convidado,string cpfSocio, string dataConvite);
};

#endif