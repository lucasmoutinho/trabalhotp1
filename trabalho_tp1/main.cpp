#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "TUdominios.h"

using namespace std;

int main(){

    TUNome testeNome;
    TUApelido testeApelido;
    TUTelefone testeTelefone;
    TUSenha testeSenha;
    TUTitulo testeTitulo;
    TUData testeData;
    TUCodigo testeCodigo;
    TUTexto testeTexto;
    TUGenero testeGenero;

    switch(testeNome.run()){
        case TUNome::SUCESSO:
        	cout << "NOME - SUCESSO" << endl;
            break;
        case TUNome::FALHA:
        	cout << "NOME - FALHA" << endl;
            break;
    }

    switch(testeApelido.run()){
        case TUApelido::SUCESSO:
        	cout << "APELIDO - SUCESSO" << endl;
            break;
        case TUApelido::FALHA:
        	cout << "APELIDO - FALHA" << endl;
            break;
    }

    switch(testeTelefone.run()){
        case TUTelefone::SUCESSO:
        	cout << "TELEFONE - SUCESSO" << endl;
            break;
        case TUTelefone::FALHA:
        	cout << "TELEFONE - FALHA" << endl;
            break;
    }

    switch(testeSenha.run()){
        case TUSenha::SUCESSO:
        	cout << "SENHA - SUCESSO" << endl;
            break;
        case TUSenha::FALHA:
        	cout << "SENHA - FALHA" << endl;
            break;
    }

    switch(testeTitulo.run()){
        case TUTitulo::SUCESSO:
        	cout << "TITULO - SUCESSO" << endl;
            break;
        case TUTitulo::FALHA:
        	cout << "TITULO - FALHA" << endl;
            break;
    }

    switch(testeData.run()){
        case TUData::SUCESSO:
        	cout << "DATA - SUCESSO" << endl;
            break;
        case TUData::FALHA:
        	cout << "DATA - FALHA" << endl;
            break;
    }

    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO:
        	cout << "CODIGO - SUCESSO" << endl;
            break;
        case TUCodigo::FALHA:
        	cout << "CODIGO - FALHA" << endl;
            break;
    }

    switch(testeTexto.run()){
        case TUTexto::SUCESSO:
        	cout << "TEXTO - SUCESSO" << endl;
            break;
        case TUTexto::FALHA:
        	cout << "TEXTO - FALHA" << endl;
            break;
    }

    switch(testeGenero.run()){
        case TUGenero::SUCESSO:
        	cout << "GENERO - SUCESSO" << endl;
            break;
        case TUGenero::FALHA:
        	cout << "GENERO - FALHA" << endl;
            break;
    }

    return 0;
}