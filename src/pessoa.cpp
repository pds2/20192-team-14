#include "../include/pessoa.h"
#include <iostream>
#include "string.h"
#include "../include/excecoes.h"
#include <algorithm>

using namespace std;

///////////////////////////////////////////////////////////////
///////////////////////// CONSTRUTOR /////////////////////////
///////////////////////////////////////////////////////////////
Pessoa::Pessoa(string nome, string rg, string cpf, string dataNascimento) {
    _nome = nome;
    _rg = rg;
    _cpf = cpf;
    _dataNascimento = dataNascimento;
}

///////////////////////////////////////////////////////////////
/////////////////////////// GETTERS ///////////////////////////
///////////////////////////////////////////////////////////////
string Pessoa::getNome() {
    return _nome;
}

string Pessoa::getCpf() {
    return _cpf;
}

string Pessoa::getRg() {
    return _rg;
}

string Pessoa::getNascimento() {
    return _dataNascimento;
}

///////////////////////////////////////////////////////////////
////////////////////////// AUXILIARES /////////////////////////
///////////////////////////////////////////////////////////////

/**
 * Retorna um bool indicando se a data é valida
 */
bool Pessoa::isValidDate(int dia, int mes, int ano) 
{ 
    // Confere se é um mês e data dentro do que 
    // é considerado válido.
    if (mes < 1 || mes > 12) {
        return false; 
    }
    if (dia < 1 || dia > 31) {
        return false; 
    }
    // Confere se o ano em questão é bissexto,
    // para sabermos os dias de fevereiro.
    if (mes == 2) 
    { 
        if (Pessoa::isLeap(ano)) {
            if (dia > 29) {
                return false;
            }
        } else {
            if (dia > 28) {
                return false;  
            } 
        }
    } 
    // Agora basta conferirmos se dentre os meses que
    // vão até o dia 30 se o limite não é extrapolado. 
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) {
            return false; 
        }
    }
    return true; 
}

/**
 * Confere se o ano é bissexto ou não
 */
bool Pessoa::isLeap(int ano) 
{ 
return (((ano % 4 == 0) &&  
         (ano % 100 != 0)) || 
         (ano % 400 == 0)
        ); 
} 

/**
 * Confere se o nome é válido
 */
bool Pessoa::verificaNome(string nome) {
    if (nome != "") {
        return true;
    } else {
        return false;
    }
}

/**
 * Confere se o cpf é válido
 */
bool Pessoa::verificaCpf(string cpfString) {
    cpfString.erase(remove(cpfString.begin(), cpfString.end(), '.'), cpfString.end());
    cpfString.erase(remove(cpfString.begin(), cpfString.end(), '-'), cpfString.end());
    cpfString.erase(remove(cpfString.begin(), cpfString.end(), ' '), cpfString.end());

    if (cpfString.length() == 11) {
        return true;
    } else {
        return false;
    }
}

/**
 * Confere se o rg é válido
 */
bool Pessoa::verificaRg(string rg) {
    if (rg != "") {
        return true;
    } else {
        return false;
    }
}

/**
 * Confere se a matricula é válida
 */
bool Pessoa::verificaMatricula(string matricula) {
    if (matricula != "") {
        return true;
    } else {
        return false;
    }
}

/**
 * Confere se o registro é válido
 */
bool Pessoa::verificaRegistro(string registro) {
    if (registro != "") {
        return true;
    } else {
        return false;
    }
}