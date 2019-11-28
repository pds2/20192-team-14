#include <iostream>
#include "../include/convite.h"
#include "../include/convidado.h"
#include "string.h"
#include <string>

using namespace std;

///////////////////////////////////////////////////////////////
///////////////////////// CONSTRUTOR /////////////////////////
///////////////////////////////////////////////////////////////
Convite::Convite(Convidado convidado, string cpfSocio, string dataConvite) {
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
    if(convites.size() != 0){
        for(int i = 0 ; i < convites.size(); i++){
            index = to_string(i + 1);
            cout << index + " - Convidado:   " + convites[i]._convidado.getNome() + " / " + convites[i]._convidado.getCpf() + " / " + convites[i]._convidado.getRg() + " / " + convites[i]._convidado.getNascimento() + " Socio: " + convites[i]._cpfSocio + " Data uso: " + convites[i]._dataConvite << endl;
        }
    } else {
        cout << "Ainda nao existem convites." << endl;
    }
}

/**
* Exibe o convite X
**/
void Convite::verConviteX(int x){
    string index;
    int i = x - 1;
    if((x > 0) && (x <= convites.size())){
        index = to_string(x);
        cout << index + " - Convidado:  " + convites[i]._convidado.getNome() + " / " + convites[i]._convidado.getCpf() + " / " + convites[i]._convidado.getRg() + " / " + convites[i]._convidado.getNascimento() + " Socio: " + convites[i]._cpfSocio + " Data uso: " + convites[i]._dataConvite << endl;
    } else {
        cout << "Nao existe o convite: " + index << endl;
    }
}