#include "../include/professor.h"
#include <iostream>
#include "string.h"
#include <string>
#include "../include/excecoes.h"
#include <cstdlib>

using namespace std;

///////////////////////////////////////////////////////////////
///////////////////////// CONSTRUTOR /////////////////////////
///////////////////////////////////////////////////////////////
Professor::Professor(string nome, string rg, string cpf, string dataNascimento, string registro) : Pessoa (nome, rg, cpf, dataNascimento) {
    _registro = registro;
}

///////////////////////////////////////////////////////////////
/////////////////////////// GETTERS ///////////////////////////
///////////////////////////////////////////////////////////////
string Professor::getRegistro() {
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
bool Professor::verificaNascimento(string dataNascimento) {
    int dia = atoi(dataNascimento.substr(0,2).c_str());
    int mes = atoi(dataNascimento.substr(3,2).c_str());
    int ano = atoi(dataNascimento.substr(6,4).c_str());

    bool retorno = Professor::isValidDate(dia, mes, ano);

    return retorno;
}

// ------------------------------------------------------------------------------------------------------

/**
 * Faz os testes de verificação dos inputs passados.
 */
bool Professor::cadastrar() {
    bool testeNome = Professor::verificaNome(_nome);
    bool testeNascimento = verificaNascimento(_dataNascimento);
    bool testeCpf = Professor::verificaCpf(_cpf);
    bool testeRg = Professor::verificaRg(_rg);
    bool testeRegistro = Professor::verificaRegistro(_registro);

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