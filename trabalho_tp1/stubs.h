#ifndef __STUBS_H_INCLUDED__
#define __STUBS_H_INCLUDED__

#include "dominios.h"
#include "entidades.h"
#include "controladoras.h"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class STUBCadastro:public ILNCadastro{
public:

    STUBCadastro();
    virtual ~STUBCadastro();

    static const string TRIGGER_FALHA_CADASTRO;
    static const string TRIGGER_ERRO_SISTEMA_CADASTRO;

    Resultado cadastrar(Nome nome, Apelido apelido, Senha senha, Telefone telefone) throw(runtime_error);

};

class STUBCadastrolivro:public ILNCadastrolivro{
public:

    STUBCadastrolivro();
    virtual ~STUBCadastrolivro();

    static const string TRIGGER_FALHA_CADASTRO_LIVRO;
    static const string TRIGGER_ERRO_SISTEMA_CADASTRO_LIVRO;

    Resultado cadastrarlivro(Titulo titulo, Nome autor, Data data, Codigo codigo, Genero genero) throw(runtime_error);

};

class STUBAutenticacao:public ILNAutenticacao{
public:

    STUBAutenticacao();
    virtual ~STUBAutenticacao();

    static const string TRIGGER_FALHA_AUTENTICACAO;
    static const string TRIGGER_ERRO_SISTEMA_AUTENTICACAO;

    Resultado autenticar(Apelido apelido, Senha senha) throw(runtime_error);

};

class STUBRegistroresenha:public ILNRegistroresenha{
public:

    STUBRegistroresenha();
    virtual ~STUBRegistroresenha();

    static const string TRIGGER_FALHA_REGISTRO_RESENHA;
    static const string TRIGGER_ERRO_SISTEMA_REGISTRO_RESENHA;

    Resultado registrarresenha(Nome autor, Titulo titulo, Texto texto) throw(runtime_error);

};

class STUBBuscarusuario:public ILNBuscarusuario{
public:

    STUBBuscarusuario();
    virtual ~STUBBuscarusuario();

    static const string TRIGGER_FALHA_BUSCAR_USUARIO;
    static const string TRIGGER_ERRO_SISTEMA_BUSCAR_USUARIO;
    static const string USUARIO_CADASTRADO;

    Resultado buscarusuario(Apelido apelido) throw(runtime_error);

};


#endif
