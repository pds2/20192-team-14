#include "../include/aluno.h"
//#include "../include/associado.h"
#include <iostream>
#include "string.h"
#include "../include/excecoes.h"

using namespace std;

//Associado socio;

Aluno::Aluno(string nome, string rg, string cpf, string dataNascimento, string matricula) : Pessoa (nome, rg, cpf, dataNascimento) {
    _matricula = matricula;
}

string Aluno::getMatricula() {
    return _matricula;
}

bool Aluno::verificaNome(string nome) {
    if (nome != "") {
        return true;
    } else {
        
    }
}

bool Aluno::verificaNascimento(string dataNascimento) {
    cout << dataNascimento <<endl;
}

bool Aluno::cadastrar() {
    bool testeNome = verificaNome(_nome);
    bool testeNascimento = verificaNascimento(_dataNascimento);
    if (testeNome) {
        cout << "Sucesso" <<endl;
    } else {
        cout << "Falha" <<endl;
    }
}