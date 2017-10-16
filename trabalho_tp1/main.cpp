#include <iostream>
#include <cstdio>
#include "dominios.h"
#include "entidades.h"
#include "TUdominios.h"
#include "TUentidades.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"

using namespace std;

int main(){

    IUCadastro *cntrCadastro;
    cntrCadastro = new CTRLCadastro();
    IUCadastrolivro *cntrCadastrolivro;
    cntrCadastrolivro = new CTRLCadastrolivro();

    ILNCadastro *stubLNCadastro;
    stubLNCadastro = new STUBCadastro();
    ILNCadastrolivro *stubLNCadastrolivro;
    stubLNCadastrolivro = new STUBCadastrolivro();

    cntrCadastro->setCntrLNCadastro(stubLNCadastro);
    cntrCadastrolivro->setCntrLNCadastrolivro(stubLNCadastrolivro);

    int SAIDA = 0;
    int opcao_escolhida;
    Resultado resultado;

    cout << "APRESENTACAO DE VALORES INVALIDOS E TRIGGERS" << endl << endl;

    cout << endl << "VALORES DOS TRIGGERS (cadastro):" << endl;
    cout << "Nome inválido = " << Nome::NOME_INVALIDO << endl;
    cout << "Apelido inválido = " << Apelido::APELIDO_INVALIDO << endl;
    cout << "Senha inválida = " << Senha::SENHA_INVALIDO << endl;
    cout << "Telefone inválido = " << Telefone::TELEFONE_INVALIDO << endl;
    cout << "Trigger de falha (apelido) = " << STUBCadastro::TRIGGER_FALHA_CADASTRO << endl;
    cout << "Trigger de erro de sistema (apelido) = " << STUBCadastro::TRIGGER_ERRO_SISTEMA_CADASTRO << endl << endl;

    cout << endl << "VALORES DOS TRIGGERS (cadastro livro):" << endl;
    cout << "Titulo inválido = " << Titulo::TITULO_INVALIDO << endl;
    cout << "Autor inválido = " << Nome::NOME_INVALIDO << endl;
    cout << "Data inválida = " << Data::DATA_INVALIDO << endl;
    cout << "Codigo inválido = " << Codigo::CODIGO_INVALIDO << endl;
    cout << "Genero inválido = " << Genero::GENERO_INVALIDO << endl;
    cout << "Trigger de falha (data) = " << STUBCadastrolivro::TRIGGER_FALHA_CADASTRO_LIVRO << endl;
    cout << "Trigger de erro de sistema (data) = " << STUBCadastrolivro::TRIGGER_ERRO_SISTEMA_CADASTRO_LIVRO << endl << endl;

    cout << "**************************************************" << endl;
    cout << "Bem vindo à biblioteca do Trabalho de TP1 - UNB" << endl;
    cout << "Informe a opção desejada entre as disponíveis abaixo:" << endl;
    cout << "Saída - 0" << endl << "Cadastro - 1" << endl << "Cadastro livro - 2" << endl;
    cout << "**************************************************" << endl << endl;
    cin >> opcao_escolhida;
    cout << endl;

    while(opcao_escolhida != SAIDA){

        switch(opcao_escolhida){
            case 1:

                while(true){
                    try{
                        resultado = cntrCadastro->cadastrar();
                        if(resultado.getValor() == Resultado::SUCESSO_CADASTRO){
                            break;
                        }
                    }
                    catch(const runtime_error &exp){
                        cout << "Erro de Sistema" << endl;
                    }
                }
                break;

            case 2:

                while(true){
                    try{
                        resultado = cntrCadastrolivro->cadastrarlivro();
                        if(resultado.getValor() == Resultado::SUCESSO_CADASTRO_LIVRO){
                            break;
                        }
                    }
                    catch(const runtime_error &exp){
                        cout << "Erro de Sistema" << endl;
                    }
                }
                break;
        }

        cout << endl;
        cout << "**************************************************" << endl;
        cout << "Informe a operação desejada" << endl;
        cout << "Saída - 0" << endl << "Cadastro - 1" << endl << "Cadastro livro - 2" << endl;
        cout << "**************************************************" << endl << endl;
        cin >> opcao_escolhida;
        cout << endl;
    }

    cout << "**************************************************" << endl;
    cout << "!!!FINALIZANDO O SISTEMA!!!" << endl;
    cout << "**************************************************" << endl << endl;

    delete cntrCadastro;
    delete cntrCadastrolivro;
    delete stubLNCadastro;
    delete stubLNCadastrolivro;

    return 0;
}