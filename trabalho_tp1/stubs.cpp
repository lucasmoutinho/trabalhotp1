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

STUBAutenticacao::STUBAutenticacao(){
}

STUBAutenticacao::~STUBAutenticacao(){
}

const string STUBAutenticacao::TRIGGER_FALHA_AUTENTICACAO = "malu";
const string STUBAutenticacao::TRIGGER_ERRO_SISTEMA_AUTENTICACAO = "cao";

Resultado STUBAutenticacao::autenticar(Apelido apelido, Senha senha) throw(runtime_error){

    Resultado resultado;

    cout << endl << endl << "**************************************************" << endl;
    cout << "Usuario Autenticado" << endl;
    cout << "Apelido :  " << apelido.getApelido() << endl;
    cout << "Senha :  " << senha.getSenha() << endl;
    cout << "**************************************************" << endl << endl;


    if(senha.getSenha() == TRIGGER_FALHA_AUTENTICACAO){
        resultado.setValor(Resultado::FALHA_AUTENTICACAO);
    }
    else if(senha.getSenha() == TRIGGER_ERRO_SISTEMA_AUTENTICACAO){
        throw runtime_error("Erro de Sistema");
    }
    else{
        resultado.setValor(Resultado::SUCESSO_AUTENTICACAO); 
    }

    return resultado;
}

STUBRegistroresenha::STUBRegistroresenha(){
}

STUBRegistroresenha::~STUBRegistroresenha(){
}

const string STUBRegistroresenha::TRIGGER_FALHA_REGISTRO_RESENHA = "BANANA";
const string STUBRegistroresenha::TRIGGER_ERRO_SISTEMA_REGISTRO_RESENHA = "LARANJA";

Resultado STUBRegistroresenha::registrarresenha(Nome autor, Titulo titulo, Texto texto) throw(runtime_error){

    Resultado resultado;

    cout << endl << endl << "**************************************************" << endl;
    cout << "Resenha registrada" << endl;
    cout << "Autor :  " << autor.getNome() << endl;
    cout << "Titulo :  " << titulo.getTitulo() << endl;
    cout << "Texto :  " << texto.getTexto() << endl;
    cout << "**************************************************" << endl << endl;


    if(titulo.getTitulo() == TRIGGER_FALHA_REGISTRO_RESENHA){
        resultado.setValor(Resultado::FALHA_REGISTRO_RESENHA);
    }
    else if(titulo.getTitulo() == TRIGGER_ERRO_SISTEMA_REGISTRO_RESENHA){
        throw runtime_error("Erro de Sistema");
    }
    else{
        resultado.setValor(Resultado::SUCESSO_REGISTRO_RESENHA); 
    }

    return resultado;
}

STUBBuscarusuario::STUBBuscarusuario(){
}

STUBBuscarusuario::~STUBBuscarusuario(){
}

const string STUBBuscarusuario::TRIGGER_FALHA_BUSCAR_USUARIO = "luca";
const string STUBBuscarusuario::TRIGGER_ERRO_SISTEMA_BUSCAR_USUARIO = "caio";
const string STUBBuscarusuario::USUARIO_CADASTRADO = "jon";

Resultado STUBBuscarusuario::buscarusuario(Apelido apelido) throw(runtime_error){

    Resultado resultado;

    cout << endl << endl << "**************************************************" << endl;
    cout << "Usuário pesquisado" << endl;
    cout << "Apelido :  " << apelido.getApelido() << endl;
    cout << "**************************************************" << endl << endl;


    if(apelido.getApelido() == TRIGGER_FALHA_BUSCAR_USUARIO){
        resultado.setValor(Resultado::FALHA_BUSCA_USUARIO);
    }
    else if(apelido.getApelido() == TRIGGER_ERRO_SISTEMA_BUSCAR_USUARIO){
        throw runtime_error("Erro de Sistema");
    }
    else if(apelido.getApelido() == USUARIO_CADASTRADO){
        resultado.setValor(Resultado::SUCESSO_BUSCA_USUARIO); 
    }
    else{
        resultado.setValor(Resultado::USUARIO_NAO_ENCONTRADO);
    }

    return resultado;
}