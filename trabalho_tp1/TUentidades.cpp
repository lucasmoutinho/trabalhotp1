#include "TUentidades.h"

void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
    try{
        usuario->setNome(NOME_VALIDO);
        usuario->setApelido(APELIDO_VALIDO);
        usuario->setTelefone(TELEFONE_VALIDO);
        usuario->setSenha(SENHA_VALIDO);
        if((usuario->getNome()!=NOME_VALIDO)||(usuario->getApelido()!=APELIDO_VALIDO)||(usuario->getTelefone()!=TELEFONE_VALIDO)||(usuario->getSenha()!=SENHA_VALIDO)){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUUsuario::testarCenarioFalha(){
    try{
        usuario->setNome(NOME_INVALIDO);
        usuario->setApelido(APELIDO_INVALIDO);
        usuario->setTelefone(TELEFONE_INVALIDO);
        usuario->setSenha(SENHA_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

const string TUUsuario::NOME_VALIDO = "Jorge";
const string TUUsuario::NOME_INVALIDO = "Jorjinho sarrada";
const string TUUsuario::APELIDO_VALIDO = "Joao";
const string TUUsuario::APELIDO_INVALIDO = "Joa1";
const string TUUsuario::TELEFONE_VALIDO = "(61)-123456789";
const string TUUsuario::TELEFONE_INVALIDO = "(61)123456789";
const string TUUsuario::SENHA_VALIDO = "vida";
const string TUUsuario::SENHA_INVALIDO = "nata";

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TULivro::setUp(){
    livro = new Livro();
    estado = SUCESSO;
}

void TULivro::tearDown(){
    delete livro;
}

void TULivro::testarCenarioSucesso(){
    try{
    	livro->setTitulo(TITULO_VALIDO);
        livro->setAutor(AUTOR_VALIDO);
        livro->setData(DATA_VALIDO);
        livro->setCodigo(CODIGO_VALIDO);
        livro->setGenero(GENERO_VALIDO);
        if((livro->getTitulo()!=TITULO_VALIDO)||(livro->getAutor()!=AUTOR_VALIDO)||(livro->getData()!=DATA_VALIDO)||(livro->getCodigo()!=CODIGO_VALIDO)||(livro->getGenero()!=GENERO_VALIDO)){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TULivro::testarCenarioFalha(){
    try{
        livro->setTitulo(TITULO_INVALIDO);
        livro->setAutor(AUTOR_INVALIDO);
        livro->setData(DATA_INVALIDO);
        livro->setCodigo(CODIGO_INVALIDO);
        livro->setGenero(GENERO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

const string TULivro::TITULO_VALIDO = "Pulp fiction";
const string TULivro::TITULO_INVALIDO = "Pulp  fiction";
const string TULivro::AUTOR_VALIDO = "Joao";
const string TULivro::AUTOR_INVALIDO = "Joa1";
const string TULivro::DATA_VALIDO = "12/12/12";
const string TULivro::DATA_INVALIDO = "12/12/12/12";
const string TULivro::CODIGO_VALIDO = "01234";
const string TULivro::CODIGO_INVALIDO = "012345";
const string TULivro::GENERO_VALIDO = "EPOPEIA";
const string TULivro::GENERO_INVALIDO = "COMEDIA";

int TULivro::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUResenha::setUp(){
    resenha = new Resenha();
    estado = SUCESSO;
}

void TUResenha::tearDown(){
    delete resenha;
}

void TUResenha::testarCenarioSucesso(){
    try{
        resenha->setAutor(AUTOR_VALIDO);
    	resenha->setTitulo(TITULO_VALIDO);
        resenha->setTexto(TEXTO_VALIDO);
        if((resenha->getAutor()!=AUTOR_VALIDO)||(resenha->getTitulo()!=TITULO_VALIDO)||(resenha->getTexto()!=TEXTO_VALIDO)){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUResenha::testarCenarioFalha(){
    try{
        resenha->setAutor(AUTOR_INVALIDO);
    	resenha->setTitulo(TITULO_INVALIDO);
        resenha->setTexto(TEXTO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

const string TUResenha::AUTOR_VALIDO = "Joao";
const string TUResenha::AUTOR_INVALIDO = "Joa1";
const string TUResenha::TITULO_VALIDO = "Pulp fiction";
const string TUResenha::TITULO_INVALIDO = "Pulp  fiction";
const string TUResenha::TEXTO_VALIDO = "bananas de pijamas";
const string TUResenha::TEXTO_INVALIDO = "bananas de pijamasbananas de pijamasbananas de pijamasbananas de pijamas";

int TUResenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}