#include "stubs.h"

STUBCadastro::STUBCadastro(){
}

STUBCadastro::~STUBCadastro(){
}

const string STUBCadastro::TRIGGER_FALHA_CADASTRO = "Lucas";
const string STUBCadastro::TRIGGER_ERRO_SISTEMA_CADASTRO = "Caio";

Resultado STUBCadastro::cadastrar(Nome nome, Apelido apelido, Senha senha, Telefone telefone) throw(runtime_error){

    Resultado resultado;

    cout << endl << "Usuario Cadastrado" << endl;
    cout << "Nome :  " << nome.getNome() << endl;
    cout << "Apelido :  " << apelido.getApelido() << endl;
    cout << "Senha :  " << senha.getSenha() << endl;
    cout << "Telefone :  " << telefone.getTelefone() << endl;

    if(apelido.getApelido() == TRIGGER_FALHA_CADASTRO){
        resultado.setValor(Resultado::FALHA_CADASTRO);
    }
    else if(apelido.getApelido() == TRIGGER_ERRO_SISTEMA_CADASTRO){
        throw runtime_error("Erro de Sistema");
    }
    else{
        resultado.setValor(Resultado::SUCESSO_CADASTRO);
    }

    return resultado;
}
