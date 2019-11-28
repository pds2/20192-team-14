#ifndef CEU_PESSOA_H
#define CEU_PESSOA_H

#include <iostream>
#include "string.h"

using namespace std;

class Pessoa {
    protected:
        string _nome;
        string _cpf;
        string _rg;
        string _dataNascimento;
    public:
        Pessoa(){};
        Pessoa(string nome,string rg,string cpf,string dataNascimento);
        string getNome();
        string getCpf();
        string getRg();
        string getNascimento();
        virtual bool cadastrar() = 0;
        bool verificaNome(string nomeVerificacao);
        virtual bool verificaNascimento(string nascimento) = 0;
        bool verificaCpf(string cpf);
        bool verificaRg(string rg);
        bool verificaMatricula(string matricula);
        bool verificaRegistro(string registro);
        bool isValidDate(int dia, int mes, int ano);
        bool isLeap(int ano);

};

#endif