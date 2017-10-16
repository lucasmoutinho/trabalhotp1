#include "stubs.h"

STUBCadastro::STUBCadastro(){
}

STUBCadastro::~STUBCadastro(){
}

const string STUBCadastro::TRIGGER_FALHA_CADASTRO = "Lucas";
const string STUBCadastro::TRIGGER_ERRO_SISTEMA_CADASTRO = "Caio";

Resultado STUBCadastro::cadastrar(Nome nome, Apelido apelido, Senha senha, Telefone telefone) throw(runtime_error){

    Resultado resultado;

    cout << endl << endl << "**************************************************" << endl;
    cout << "Usuario Cadastrado" << endl;
    cout << "Nome :  " << nome.getNome() << endl;
    cout << "Apelido :  " << apelido.getApelido() << endl;
    cout << "Senha :  " << senha.getSenha() << endl;
    cout << "Telefone :  " << telefone.getTelefone() << endl;
    cout << "**************************************************" << endl << endl;

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

STUBCadastrolivro::STUBCadastrolivro(){
}

STUBCadastrolivro::~STUBCadastrolivro(){
}

const string STUBCadastrolivro::TRIGGER_FALHA_CADASTRO_LIVRO = "12/12/12";
const string STUBCadastrolivro::TRIGGER_ERRO_SISTEMA_CADASTRO_LIVRO = "12/11/12";

Resultado STUBCadastrolivro::cadastrarlivro(Titulo titulo, Nome autor, Data data, Codigo codigo, Genero genero) throw(runtime_error){

    Resultado resultado;

    cout << endl << endl << "**************************************************" << endl;
    cout << "Livro Cadastrado" << endl;
    cout << "Titulo :  " << titulo.getTitulo() << endl;
    cout << "Autor :  " << autor.getNome() << endl;
    cout << "Data :  " << data.getData() << endl;
    cout << "Codigo :  " << codigo.getCodigo() << endl;
    cout << "Genero :  " << genero.getGenero() << endl;
    cout << "**************************************************" << endl << endl;


    if(data.getData() == TRIGGER_FALHA_CADASTRO_LIVRO){
        resultado.setValor(Resultado::FALHA_CADASTRO_LIVRO);
    }
    else if(data.getData() == TRIGGER_ERRO_SISTEMA_CADASTRO_LIVRO){
        throw runtime_error("Erro de Sistema");
    }
    else{
        resultado.setValor(Resultado::SUCESSO_CADASTRO_LIVRO); 
    }

    return resultado;
}