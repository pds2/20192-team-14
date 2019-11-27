#include <iostream>
#include "string.h"
#include "../include/pessoa.h"
#include "../include/aluno.h"
#include "../include/professor.h"
#include "../include/tecnico.h"
#include "../include/formado.h"

using namespace std;

void menu(){
    cout << "BEM VINDO AO SISTEMA DE GERENCIAMENTO DO CEU " << endl;
    cout << "Escolha o que deseja fazer: " << endl;
    cout << "0) Sair" << endl;
    cout << "1) Gerar um novo cadastro" << endl;
    cout << "2) Gerar um convite" << endl;
    cout << "--------------------------------------------------\n";
}

int main() {
    Tecnico p1 = Tecnico("Rainer","50.815.224.0","126.551.596-40","04/06/1998","2017068785");
    cout << p1.cadastrar() <<endl;

    /*
    int opcao=1;
	while(opcao!=1){
	menu;
	cin >> opcao;
		if(opcao==1){
    	Professor p1 = Professor("Rainer","126.551.596-40","50.815.224.0","04/06/1998","2017068785");
    	cout<< p1.getRegistro() <<endl;
		}
		if(opcao==2){
			cout << "nha" << endl;
			opcao = 0;
		}
	}
	cout << "Obrigado por usar!";*/
    return 0;
}