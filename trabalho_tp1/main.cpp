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

// TUNome testeNome;
// TUApelido testeApelido;
// TUTelefone testeTelefone;
// TUSenha testeSenha;
// TUTitulo testeTitulo;
// TUData testeData;
// TUCodigo testeCodigo;
// TUTexto testeTexto;
// TUGenero testeGenero;
// TUUsuario testeUsuario;
// TULivro testeLivro;
// TUResenha testeResenha;

// cout << "*************************************" << endl << endl;
// cout << "TESTES DE UNIDADES DOS DOMINIOS" << endl << endl;
// cout << "*************************************" << endl << endl;

// switch(testeNome.run()){
//     case TUNome::SUCESSO:
//     	cout << "NOME - SUCESSO" << endl;
//         break;
//     case TUNome::FALHA:
//     	cout << "NOME - FALHA" << endl;
//         break;
// }

// switch(testeApelido.run()){
//     case TUApelido::SUCESSO:
//     	cout << "APELIDO - SUCESSO" << endl;
//         break;
//     case TUApelido::FALHA:
//     	cout << "APELIDO - FALHA" << endl;
//         break;
// }

// switch(testeTelefone.run()){
//     case TUTelefone::SUCESSO:
//     	cout << "TELEFONE - SUCESSO" << endl;
//         break;
//     case TUTelefone::FALHA:
//     	cout << "TELEFONE - FALHA" << endl;
//         break;
// }

// switch(testeSenha.run()){
//     case TUSenha::SUCESSO:
//     	cout << "SENHA - SUCESSO" << endl;
//         break;
//     case TUSenha::FALHA:
//     	cout << "SENHA - FALHA" << endl;
//         break;
// }

// switch(testeTitulo.run()){
//     case TUTitulo::SUCESSO:
//     	cout << "TITULO - SUCESSO" << endl;
//         break;
//     case TUTitulo::FALHA:
//     	cout << "TITULO - FALHA" << endl;
//         break;
// }

// switch(testeData.run()){
//     case TUData::SUCESSO:
//     	cout << "DATA - SUCESSO" << endl;
//         break;
//     case TUData::FALHA:
//     	cout << "DATA - FALHA" << endl;
//         break;
// }

// switch(testeCodigo.run()){
//     case TUCodigo::SUCESSO:
//     	cout << "CODIGO - SUCESSO" << endl;
//         break;
//     case TUCodigo::FALHA:
//     	cout << "CODIGO - FALHA" << endl;
//         break;
// }

// switch(testeTexto.run()){
//     case TUTexto::SUCESSO:
//     	cout << "TEXTO - SUCESSO" << endl;
//         break;
//     case TUTexto::FALHA:
//     	cout << "TEXTO - FALHA" << endl;
//         break;
// }

// switch(testeGenero.run()){
//     case TUGenero::SUCESSO:
//     	cout << "GENERO - SUCESSO" << endl;
//         break;
//     case TUGenero::FALHA:
//     	cout << "GENERO - FALHA" << endl;
//         break;
// }

// cout << endl;
// cout << "*************************************" << endl << endl;
// cout << "TESTES DE UNIDADES DAS ENTIDADES" << endl << endl;
// cout << "*************************************" << endl << endl;

// switch(testeUsuario.run()){
//     case TUUsuario::SUCESSO:
//         cout << "USUARIO - SUCESSO" << endl;
//         break;
//     case TUUsuario::FALHA:
//         cout << "USUARIO - FALHA" << endl;
//         break;
// }

// switch(testeLivro.run()){
//     case TULivro::SUCESSO:
//         cout << "LIVRO - SUCESSO" << endl;
//         break;
//     case TULivro::FALHA:
//         cout << "LIVRO - FALHA" << endl;
//         break;
// }

// switch(testeResenha.run()){
//     case TUResenha::SUCESSO:
//         cout << "RESENHA - SUCESSO" << endl;
//         break;
//     case TUResenha::FALHA:
//         cout << "RESENHA - FALHA" << endl;
//         break;
// }

// getchar();

    IUCadastro *cntrCadastro;
    cntrCadastro = new CTRLCadastro();

    ILNCadastro *stubLNCadastro;
    stubLNCadastro = new STUBCadastro();

    cntrCadastro->setCntrLNCadastro(stubLNCadastro);

    Resultado resultado;

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