#include <iostream>
#include "../include/convite.h"
#include "../include/pessoa.h"
#include "string.h"

using namespace std;

///////////////////////////////////////////////////////////////
///////////////////////// CONSTRUTOR /////////////////////////
///////////////////////////////////////////////////////////////
Convite::Convite(Pessoa convidado, string cpfSocio, string dataConvite) {
    _convidado = convidado;
    _cpfSocio = cpfSocio;
    _dataConvite = dataConvite;
}

///////////////////////////////////////////////////////////////
////////////////////////// AUXILIARES /////////////////////////
///////////////////////////////////////////////////////////////
/**
 * Lista todos os convites criados
 */
void Convite::verConvites() {
    string index;
    for(int i = 0 ; i < convites.size(); i++){
        index = to_string(i+1);
        cout << index + " - " + convites[i]._convidado._nome + "/" + convites[i]._convidado._cpf + "/" + convites[i]._convidado._rg + "/" + convites[i]._convidado._dataNascimento + "/" + convites[i]._cpfSocio + "/" + convites[i]._dataConvite << endl;
    }
    cout << "--------------------------------------------------\n";
}

/**
* Exibe o convite X
**/
void Convite::verConviteX(int x){
    string index;
    int i = x - 1;
    if((x > 0) && (x <= convites.size())){
        index = to_string(x);
        cout << index + " - " + convites[i]._convidado._nome + "/" + convites[i]._convidado._cpf + "/" + convites[i]._convidado._rg + "/" + convites[i]._convidado._dataNascimento + "/" + convites[i]._cpfSocio + "/" + convites[i]._dataConvite << endl;
    } else {
        cout << endl << "Nao existe o convite: " + index << endl;
    }
}