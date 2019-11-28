#include "../include/tecnico.h"
#include <iostream>
#include "string.h"
#include <string>
#include "../include/excecoes.h"
#include <cstdlib>

using namespace std;

///////////////////////////////////////////////////////////////
///////////////////////// CONSTRUTOR /////////////////////////
///////////////////////////////////////////////////////////////
Tecnico::Tecnico(string nome, string rg, string cpf, string dataNascimento, string registro) : Pessoa (nome, rg, cpf, dataNascimento) {
    _registro = registro;
}

///////////////////////////////////////////////////////////////
/////////////////////////// GETTERS ///////////////////////////
///////////////////////////////////////////////////////////////
string Tecnico::getRegistro() {
    return _registro;
}

///////////////////////////////////////////////////////////////
////////////////////////// AUXILIARES /////////////////////////
///////////////////////////////////////////////////////////////
/**
 * Verifica se a data é válida
 * 
 * string dataNascimento [Data formata no tipo dd/mm/YYYY]
 * 
 * @return bool
 * 
 */
bool Tecnico::verificaNascimento(string dataNascimento) {
    int dia = atoi(dataNascimento.substr(0,2).c_str());
    int mes = atoi(dataNascimento.substr(3,2).c_str());
    int ano = atoi(dataNascimento.substr(6,4).c_str());

    bool retorno = Tecnico::isValidDate(dia, mes, ano);

    return retorno;
}

// ------------------------------------------------------------------------------------------------------

/**
 * Faz os testes de verificação dos inputs passados.
 */
bool Tecnico::cadastrar() {
    bool testeNome = Tecnico::verificaNome(_nome);
    bool testeNascimento = verificaNascimento(_dataNascimento);
    bool testeCpf = Tecnico::verificaCpf(_cpf);
    bool testeRg = Tecnico::verificaRg(_rg);
    bool testeRegistro = Tecnico::verificaRegistro(_registro);

    if (testeNome == true &&
        testeNascimento == true &&
        testeCpf == true &&
        testeRg == true &&
        testeRegistro == true) {
            return true;
        } else {
            return false;
    }
}