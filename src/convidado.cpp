#include "../include/convidado.h"
#include <iostream>
#include "string.h"
#include <string>
#include "../include/excecoes.h"
#include <cstdlib>

using namespace std;

///////////////////////////////////////////////////////////////
///////////////////////// CONSTRUTOR /////////////////////////
///////////////////////////////////////////////////////////////
Convidado::Convidado(string nome, string rg, string cpf, string dataNascimento) : Pessoa (nome, rg, cpf, dataNascimento) {}


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
bool Convidado::verificaNascimento(string dataNascimento) {
    int dia = atoi(dataNascimento.substr(0,2).c_str());
    int mes = atoi(dataNascimento.substr(3,2).c_str());
    int ano = atoi(dataNascimento.substr(6,4).c_str());
    // Confere se a data é válida
    bool retorno = Convidado::isValidDate(dia, mes, ano);
    return retorno;
}

/**
 * Faz os testes de verificação dos inputs passados.
 */
bool Convidado::cadastrar() {
    bool testeNome = Convidado::verificaNome(_nome);
    bool testeNascimento = verificaNascimento(_dataNascimento);
    bool testeCpf = Convidado::verificaCpf(_cpf);
    bool testeRg = Convidado::verificaRg(_rg);
    // Confere se todos os testes foram positivos
    if (testeNome == true &&
        testeNascimento == true &&
        testeCpf == true &&
        testeRg == true) {
            return true;
        } else {
            return false;
    }
}