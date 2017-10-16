#include "controladoras.h"

CTRLCadastro::CTRLCadastro(){
}

CTRLCadastro::~CTRLCadastro(){
}

Resultado CTRLCadastro::cadastrar() throw(runtime_error){

    Resultado resultado;
    Nome nome;
    Apelido apelido;
    Senha senha;
    Telefone telefone;
    string entrada_nome;
    string entrada_apelido;
    string entrada_senha;
    string entrada_telefone;

    while(true){

        try{
            cout << "**************************************************" << endl;
            cout << "Informe o Nome :" << endl;
            cin >> entrada_nome;
            nome.setNome(entrada_nome);
            cout << "Informe o Apelido :" << endl;
            cin >> entrada_apelido;
            apelido.setApelido(entrada_apelido);
            cout << "Informe a Senha :" << endl;
            cin >> entrada_senha;
            senha.setSenha(entrada_senha);
            cout << "Informe o Telefone :" << endl;
            cin >> entrada_telefone;
            telefone.setTelefone(entrada_telefone);
            cout << endl << "**************************************************" << endl;
            break;
        }
        catch (const invalid_argument &exp){
            cout << endl << "Entrada(s) inválida(s), informe novamente." << endl << endl;
        }
    }

    resultado = LNCadastro->cadastrar(nome,apelido,senha,telefone);

    if(resultado.getValor() == Resultado::FALHA_CADASTRO){
        cout << endl << "Falha ao cadastrar" << endl;
    }

    return resultado;
}
