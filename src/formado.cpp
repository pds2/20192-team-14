#include "../include/formado.h"
#include <iostream>
#include "string.h"
#include "../include/excecoes.h"
#include <cstdlib>

using namespace std;

///////////////////////////////////////////////////////////////
///////////////////////// CONSTRUTOR /////////////////////////
///////////////////////////////////////////////////////////////
Formado::Formado(string nome, string rg, string cpf, string dataNascimento, string matricula, string dataFormatura) : Pessoa (nome, rg, cpf, dataNascimento) {
    _matricula = matricula;
    _dataFormatura = dataFormatura;
}

///////////////////////////////////////////////////////////////
/////////////////////////// GETTERS ///////////////////////////
///////////////////////////////////////////////////////////////
string Formado::getMatricula() {
    return _matricula;
}

string Formado::getFormatura() {
        return _dataFormatura;
}

///////////////////////////////////////////////////////////////
////////////////////////// AUXILIARES /////////////////////////
///////////////////////////////////////////////////////////////
/**
 * Faz os testes de verificação dos inputs passados.
 */
bool Formado::cadastrar() {
    bool testeNome = Formado::verificaNome(_nome);
    bool testeNascimento = verificaNascimento(_dataNascimento);
    bool testeCpf = Formado::verificaCpf(_cpf);
    bool testeRg = Formado::verificaRg(_rg);
    bool testeMatricula = Formado::verificaMatricula(_matricula);
    bool testeDataFormatura = verificaNascimento(_dataFormatura);
    // Confere se todos os testes foram positivos.
    if (testeNome == true &&
        testeNascimento == true &&
        testeCpf == true &&
        testeRg == true &&
        testeMatricula == true &&
        testeDataFormatura == true) {
            return true;
        } else {
            return false;
    }
}

/**
 * Verifica se a data é válida
 * 
 * string dataNascimento [Data formata no tipo dd/mm/YYYY]
 * 
 * @return bool
 * 
 */
bool Formado::verificaNascimento(string dataNascimento) {
    int dia = atoi(dataNascimento.substr(0,2).c_str());
    int mes = atoi(dataNascimento.substr(3,2).c_str());
    int ano = atoi(dataNascimento.substr(6,4).c_str());

    bool retorno = Formado::isValidDate(dia, mes, ano);

    return retorno;
}