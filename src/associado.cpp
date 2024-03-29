#include "../include/associado.h"
#include "../include/aluno.h"
#include <iostream>
#include "string.h"
#include <string>

using namespace std;

///////////////////////////////////////////////////////////////
///////////////////////// CONSTRUTOR /////////////////////////
///////////////////////////////////////////////////////////////
Associado::Associado(int tipo, string nome, string rg, string cpf, string dataNascimento, string documentoUfmg) {
    _identificadorTipo = tipo;
    _nome = nome;
    _cpf = cpf;
    _rg = rg;
    _dataNascimento = dataNascimento;
    _documentoUfmg = documentoUfmg;
}

///////////////////////////////////////////////////////////////
////////////////////////// AUXILIARES /////////////////////////
///////////////////////////////////////////////////////////////
/**
 * Joga nas tela os associados ao clube
 */
void Associado::verAssociados() {
    string index;
    for(int i = 0 ; i < associados.size(); i++){
        index = to_string(i+1);
        cout << index + " - " + associados[i]._nome + "/" + associados[i]._cpf + "/" + associados[i]._rg + "/" + associados[i]._dataNascimento + "/" + associados[i]._documentoUfmg << endl;
    }
    cout << "--------------------------------------------------\n";
}

// ------------------------------------------------------------------------------------------------------

/**
* Verifica se existe associado cadastrado com o cpf indicado.
**/
bool Associado::existeSocio(string cpf){
    bool check = false;
    for(int i = 0; i < associados.size(); i++){
        if(((associados[i]._cpf).compare(cpf)) == 0){
            check = true;
            return check;
        }
    }
    return check;
}