#include <iostream>
#include "string.h"
#include "../include/pessoa.h"
#include "../include/aluno.h"
#include "../include/professor.h"
#include "../include/tecnico.h"
#include "../include/formado.h"
#include "../include/associado.h"
#include "../include/convite.h"
#include "../include/convidado.h"

using namespace std;

// Criação das classes que serão utilizadas ao decorrer do projeto.
Associado socio;
Associado socioFinal;
Aluno aluno;
Formado formado;
Professor professor;
Tecnico tecnico;
Convidado convidado;
Convite conviteFinal;
Convite convite;


/**
 * Método que irá apresentar o Menu de Opções principais. 
 */
void menu(){
    cout << "BEM VINDO AO SISTEMA DE GERENCIAMENTO DO CEU " << endl;
    cout << "Escolha o que deseja fazer: " << endl;
    cout << "0 - Sair" << endl;
    cout << "1 - Gerar um novo cadastro" << endl;
    cout << "2 - Emitir ou acessar convites" << endl;
    cout << "3 - Ver Associados" << endl;
    cout << "--------------------------------------------------\n";
}

/**
 * Método que irá apresentar o Menu de Cadastro. 
 */
void menuCadastro(){
    cout << "Qual o tipo do usuario que voce quer cadastrar:" << endl;
    cout << "0 - Voltar" << endl;
    cout << "1 - Aluno" << endl;
    cout << "2 - Formado" << endl;
    cout << "3 - Professor" << endl;
    cout << "4 - Profissional Tecnico" << endl;
    cout << "--------------------------------------------------\n";
}

/**
 * Método que realiza cadastro para Estudantes e Alunos Formados. 
 */
void cadastroEstudante(int tipoEstudante) {
    // Caso o tipoEstudante seja 1 ele é um estudante em formação
    // Caso seja 2 ele já é formado
    if (tipoEstudante == 1) {
        // Cria um Associado que é um aluno
        socioFinal = Associado(1,aluno.getNome(),aluno.getRg(),aluno.getCpf(),aluno.getNascimento(),aluno.getMatricula());
        socio.associados.push_back(socioFinal);
    } else {
        // Cria um Associado que é um aluno já formado
        socioFinal = Associado(2,formado.getNome(),formado.getRg(),formado.getCpf(),formado.getNascimento(),formado.getMatricula());
        socio.associados.push_back(socioFinal);
    }
}

/**
 * Método que realiza cadastro para Professores e Profissionais Técnicos. 
 */
void cadastroProfissional(int tipoProfissional) {
    // Caso o tipoProfissional seja 3 ele é um professor
    // Caso seja 4 ele é um profissional técnico.
    if (tipoProfissional == 3) {
        // Cria um Associado que é um Professor
        socioFinal = Associado(3,professor.getNome(),professor.getRg(),professor.getCpf(),professor.getNascimento(),professor.getRegistro());
        socio.associados.push_back(socioFinal);
    } else {
        // Cria um Associado que é um Profissional Técnico
        socioFinal = Associado(4,tecnico.getNome(),tecnico.getRg(),tecnico.getCpf(),tecnico.getNascimento(),tecnico.getRegistro());
        socio.associados.push_back(socioFinal);
    }
}

/**
 * Método que apresenta o menu de cadastro para Estudantes. 
 */
void menuCadastroEstudante() {
    string alunoCadastrar, rgCadastrar, cpfCadastrar, dataNascimentoCadastrar, matriculaCadastrar;
    bool testeAluno;
    cout << "Qual o nome do Aluno:" << endl;
    cin >> alunoCadastrar;
    cout << "Qual o RG do Aluno:" << endl;
    cin >> rgCadastrar;
    cout << "Qual o CPF do Aluno:" << endl;
    cin >> cpfCadastrar;
    cout << "Qual a data de nascimento do Aluno:" << endl;
    cin >> dataNascimentoCadastrar; 
    cout << "Qual a matricula do Aluno:" << endl;
    cin >> matriculaCadastrar;
    cout << "--------------------------------------------------\n";
    // Cria um objeto para aluno
    aluno = Aluno(alunoCadastrar,rgCadastrar,cpfCadastrar,dataNascimentoCadastrar,matriculaCadastrar);
    // Confere se os dados são válidos.
    testeAluno = aluno.cadastrar();
    if (testeAluno) {
        cadastroEstudante(1);
        cout << "O aluno foi cadastrado com sucesso" << endl;
    } else {
        cout << "Houve um problema ao cadastrar o aluno" << endl;
    }
    cout << "--------------------------------------------------\n";
}

/**
 * Método que apresenta o menu de cadastro para Estudantes Formados. 
 */
void menuCadastroFormado() {
    string formadoCadastrar, rgCadastrar, cpfCadastrar, dataNascimentoCadastrar, matriculaCadastrar, dataFormatura;
    bool testeFormado;
    cout << "Qual o nome do Ex-Aluno:" << endl;
    cin >> formadoCadastrar;
    cout << "Qual o RG do Ex-Aluno:" << endl;
    cin >> rgCadastrar;
    cout << "Qual o CPF do Ex-Aluno:" << endl;
    cin >> cpfCadastrar;
    cout << "Qual a data de nascimento do Ex-Aluno:" << endl;
    cin >> dataNascimentoCadastrar; 
    cout << "Qual a matricula do Ex-Aluno:" << endl;
    cin >> matriculaCadastrar;
    cout << "Qual a data de formatura do Ex-Aluno:" << endl;
    cin >> dataFormatura;
    cout << "--------------------------------------------------\n";
    // Cria um objeto para Aluno Formado
    formado = Formado(formadoCadastrar,rgCadastrar,cpfCadastrar,dataNascimentoCadastrar,matriculaCadastrar,dataFormatura);
    // Confere se os dados são válidos.
    testeFormado = formado.cadastrar();
    if (testeFormado) {
        cadastroEstudante(2);
        cout << "O Ex-Aluno foi cadastrado com sucesso" << endl;
    } else {
        cout << "Houve um problema ao cadastrar o Ex-Aluno" << endl;
    }
    cout << "--------------------------------------------------\n";
}

/**
 * Método que apresenta o menu de cadastro para Professores. 
 */
void menuCadastroProfessor() {
    string professorCadastrar, rgCadastrar, cpfCadastrar, dataNascimentoCadastrar, registroUfmg;
    bool testeProfessor;
    cout << "Qual o nome do Professor:" << endl;
    cin >> professorCadastrar;
    cout << "Qual o RG do Professor:" << endl;
    cin >> rgCadastrar;
    cout << "Qual o CPF do Professor:" << endl;
    cin >> cpfCadastrar;
    cout << "Qual a data de nascimento do Professor:" << endl;
    cin >> dataNascimentoCadastrar; 
    cout << "Qual a registro da UFMG do Professor:" << endl;
    cin >> registroUfmg;
    cout << "--------------------------------------------------\n";
    // Cria um objeto para Professor
    professor = Professor(professorCadastrar,rgCadastrar,cpfCadastrar,dataNascimentoCadastrar,registroUfmg);
    // Confere se os dados são válidos.
    testeProfessor = professor.cadastrar();
    if (testeProfessor) {
        cadastroProfissional(3);
        cout << "O Professor foi cadastrado com sucesso" << endl;
    } else {
        cout << "Houve um problema ao cadastrar o Professor" << endl;
    }
    cout << "--------------------------------------------------\n";
}

/**
 * Método que apresenta o menu de cadastro para Profissional Técnico. 
 */
void menuCadastroTecnico() {
    string tecnicoCadastrar, rgCadastrar, cpfCadastrar, dataNascimentoCadastrar, registroUfmg;
    bool testeTecnico;
    cout << "Qual o nome do Profissional Tecnico:" << endl;
    cin >> tecnicoCadastrar;
    cout << "Qual o RG do Profissional Tecnico:" << endl;
    cin >> rgCadastrar;
    cout << "Qual o CPF do Profissional Tecnico:" << endl;
    cin >> cpfCadastrar;
    cout << "Qual a data de nascimento do Profissional Tecnico:" << endl;
    cin >> dataNascimentoCadastrar; 
    cout << "Qual a registro da UFMG do Profissional Tecnico:" << endl;
    cin >> registroUfmg;
    cout << "--------------------------------------------------\n";
    // Cria um objeto para Profissional Técnico
    tecnico = Tecnico(tecnicoCadastrar,rgCadastrar,cpfCadastrar,dataNascimentoCadastrar,registroUfmg);
    // Confere se os dados são válidos.
    testeTecnico = tecnico.cadastrar();
    if (testeTecnico) {
        cadastroProfissional(4);
        cout << "O Profissional Tecnico foi cadastrado com sucesso" << endl;
    } else {
        cout << "Houve um problema ao cadastrar o Profissional Tecnico" << endl;
    }
    cout << "--------------------------------------------------\n";
}

/**
* Método que apresenta o menu de Emissão de Convite.
**/
void menuEmissaoConvite(){
    string cpfSocio, nomeConvidado, cpfConvidado, rgConvidado, dataNascimentoConvidado, dataConvite;
    string codigo;
    bool testeConvidado;
    cout << "Emissao de convite:" << endl << "Qual o cpf do socio que esta convidando?" << endl;
    cin >> cpfSocio;
    //Confere se existe sócio cadastrado com o cpf indicado.
    if(!socio.existeSocio(cpfSocio)){
        cout << endl << "Nao existe socio com cpf: " + cpfSocio << endl;
    } else {
        cout << "Socio identificado. Forneca os dados do convidado:" << endl << "Nome:" << endl;
        cin >> nomeConvidado;
        cout << "CPF: " << endl;
        cin >> cpfConvidado;
        cout << "RG: " << endl;
        cin >> rgConvidado;
        cout << "Data de nascimento:" << endl;
        cin >> dataNascimentoConvidado;
        cout << "Data em que o convidado fara uso do CEU:" << endl; 
        cin >> dataConvite;
        //Cria um objeto de convidado
        convidado = Convidado(nomeConvidado, rgConvidado, cpfConvidado, dataNascimentoConvidado);
        //Confere se os dados estão válidos
        testeConvidado = convidado.cadastrar();
        if(testeConvidado){
            //Cria objeto de convite
            conviteFinal = Convite(convidado, cpfSocio, dataConvite);
            //Adiciona convite na lista de convites
            convite.convites.push_back(conviteFinal);
            codigo = to_string(convite.convites.size());
            cout << "--------------------------------------------------\n";
            cout << "O convite foi emitido com sucesso. Seu codigo e: " + codigo << endl;
            convite.verConviteX(convite.convites.size());
            cout << "--------------------------------------------------\n";
        } else {
            cout << "Houve um problema no cadastro do convidado. Verifique os dados e tente novamente." << endl;
        }
    }
}

/**
* Método que apresenta o menu de Convite.
**/
void menuConvite(){
    int opcao, codigo;
    do{
        cout << "Voce gostaria de:" << endl;
        cout << "0 - Voltar" << endl;
        cout << "1 - Emitir um novo convite" << endl;
        cout << "2 - Procurar um convite" << endl;
        cout << "3 - Exibir a lista de convites" << endl;
        cout << "--------------------------------------------------\n";
        cin >> opcao;
        switch(opcao){
            case 1:
                menuEmissaoConvite();
                break;
            case 2:
                cout << "Qual o codigo do convite:" << endl;
                cin >> codigo;
                cout << "--------------------------------------------------\n";
                convite.verConviteX(codigo);
                cout << "--------------------------------------------------\n";
                break;
            case 3:
                cout << "Lista de convites:" << endl;
                cout << "--------------------------------------------------\n";
                convite.verConvites();
                cout << "--------------------------------------------------\n";
                break;
            default:
                break;
        }
        cout << endl;
    } while(opcao != 0);
}


int main() {
    // Inicialização das variaveis que irão controlar o menu.
    int opcao = true;
    int opcaoCadastro = true;
	while(opcao != 0) {
        // Carrega o Menu Principal.
        menu();
        cin >> opcao;
        // Opção de Cadastrar Usuários
		if(opcao == 1) {
            opcaoCadastro = true;
            while (opcaoCadastro != 0) {
                // Carrega o Menu de Opções de Cadastro.
                menuCadastro();
                cin >> opcaoCadastro;
                switch (opcaoCadastro) {
                    case 1:
                        menuCadastroEstudante();
                        break;
                    case 2:
                        menuCadastroFormado();
                        break;
                    case 3:
                        menuCadastroProfessor();
                        break;
                    case 4:
                        menuCadastroTecnico();
                        break;
                    default:
                        break;
                }
            }
        // Opção de Convites
		} else if(opcao == 2){
            menuConvite();
        // Opção de Visualizar os Usuários
		} else if(opcao == 3) {
           socio.verAssociados(); 
        }
	}
	cout << "Obrigado por usar!";
    return 0;
}