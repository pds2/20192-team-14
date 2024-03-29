#include "../include/aluno.h"
#include <iostream>
#include "string.h"
#include <string>
#include "../include/excecoes.h"
#include <cstdlib>

using namespace std;

///////////////////////////////////////////////////////////////
///////////////////////// CONSTRUTOR /////////////////////////
///////////////////////////////////////////////////////////////
Aluno::Aluno(string nome, string rg, string cpf, string dataNascimento, string matricula) : Pessoa (nome, rg, cpf, dataNascimento) {
    _matricula = matricula;
}

///////////////////////////////////////////////////////////////
/////////////////////////// GETTERS ///////////////////////////
///////////////////////////////////////////////////////////////
string Aluno::getMatricula() {
    return _matricula;
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
bool Aluno::verificaNascimento(string dataNascimento) {
    int dia = atoi(dataNascimento.substr(0,2).c_str());
    int mes = atoi(dataNascimento.substr(3,2).c_str());
    int ano = atoi(dataNascimento.substr(6,4).c_str());
    // Confere se a data é válida
    bool retorno = Aluno::isValidDate(dia, mes, ano);
    return retorno;
}

// ------------------------------------------------------------------------------------------------------

/**
 * Faz os testes de verificação dos inputs passados.
 */
bool Aluno::cadastrar() {
    bool testeNome = Aluno::verificaNome(_nome);
    bool testeNascimento = verificaNascimento(_dataNascimento);
    bool testeCpf = Aluno::verificaCpf(_cpf);
    bool testeRg = Aluno::verificaRg(_rg);
    bool testeMatricula = Aluno::verificaMatricula(_matricula);
    // Confere se todos os testes foram positivos
    if (testeNome == true &&
        testeNascimento == true &&
        testeCpf == true &&
        testeRg == true &&
        testeMatricula == true) {
            return true;
        } else {
            return false;
    }
}