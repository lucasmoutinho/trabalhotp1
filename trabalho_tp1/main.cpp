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

    ILNCadastro *stubLNCadastro;
    stubLNCadastro = new STUBCadastro();

    cntrCadastro->setCntrLNCadastro(stubLNCadastro);

    Resultado resultado;

    cout << endl << "VALORES DOS TRIGGERS:" << endl << endl;
    cout << "Apelido invalido = " << STUBCadastro::TRIGGER_FALHA_CADASTRO << endl;
    cout << "Apelido invalido = " << STUBCadastro::TRIGGER_ERRO_SISTEMA_CADASTRO << endl << endl;

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

    return 0;
}