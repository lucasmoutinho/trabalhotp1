#ifndef __STUBS_H_INCLUDED__
#define __STUBS_H_INCLUDED__

#include "dominios.h"
#include "entidadeUsuario.h"
#include "entidadeLivro.h"
#include "entidadeResenha.h"
#include "entidadeResultado.h"
#include "TUdominios.h"
#include "TUentidades.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"
#include "containerUsuario.h"
#include "containerLivro.h"
#include "containerResenha.h"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

///Classe que representa o STUB de cadastro de usuários
class STUBCadastro:public ILNCadastro{
public:

    STUBCadastro();
    virtual ~STUBCadastro();

    static const string TRIGGER_FALHA_CADASTRO;
    static const string TRIGGER_ERRO_SISTEMA_CADASTRO;

    Resultado cadastrar(const Nome&, const Apelido&, const Senha&,const Telefone&) throw(runtime_error);

};

///Classe que representa o STUB de cadastro de livros
class STUBCadastrolivro:public ILNCadastrolivro{
public:

    STUBCadastrolivro();
    virtual ~STUBCadastrolivro();

    static const string TRIGGER_FALHA_CADASTRO_LIVRO;
    static const string TRIGGER_ERRO_SISTEMA_CADASTRO_LIVRO;

    Resultado cadastrarlivro(const Titulo&, const Nome&, const Data&, const Codigo&, const Genero&) throw(runtime_error);

};

///Classe que representa o STUB de autenticação
class STUBAutenticacao:public ILNAutenticacao{
public:

    STUBAutenticacao();
    virtual ~STUBAutenticacao();

    static const string TRIGGER_FALHA_AUTENTICACAO;
    static const string TRIGGER_ERRO_SISTEMA_AUTENTICACAO;

    Resultado autenticar(const Apelido&, const Senha&) throw(runtime_error);

};

///Classe que representa o STUB de cadastro de registro de resenhas
class STUBRegistroresenha:public ILNRegistroresenha{
public:

    STUBRegistroresenha();
    virtual ~STUBRegistroresenha();

    static const string TRIGGER_FALHA_REGISTRO_RESENHA;
    static const string TRIGGER_ERRO_SISTEMA_REGISTRO_RESENHA;

    Resultado registrarresenha(const Nome&, const Titulo&, const Texto&) throw(runtime_error);

};

///Classe que representa o STUB de busca por usuários
class STUBBuscarusuario:public ILNBuscarusuario{
public:

    STUBBuscarusuario();
    virtual ~STUBBuscarusuario();

    static const string TRIGGER_FALHA_BUSCAR_USUARIO;
    static const string TRIGGER_ERRO_SISTEMA_BUSCAR_USUARIO;
    static const string USUARIO_CADASTRADO;

    Resultado buscarusuario(const Apelido&) throw(runtime_error);

};

///Classe que representa o STUB de busca por livros
class STUBBuscarlivro:public ILNBuscarlivro{
public:

    STUBBuscarlivro();
    virtual ~STUBBuscarlivro();

    static const string TRIGGER_FALHA_BUSCAR_LIVRO;
    static const string TRIGGER_ERRO_SISTEMA_BUSCAR_LIVRO;
    static const string LIVRO_CADASTRADO;

    Resultado buscarlivro(const Titulo&) throw(runtime_error);

};

///Classe que representa o STUB de troca de livros
class STUBTrocarlivro:public ILNTrocarlivro{
public:

    STUBTrocarlivro();
    virtual ~STUBTrocarlivro();

    static const string TRIGGER_FALHA_TROCAR_LIVRO;
    static const string TRIGGER_ERRO_SISTEMA_TROCAR_LIVRO;
    static const string LIVRO_DISPONIVEL_TROCA;

    Resultado trocarlivro(const Titulo&) throw(runtime_error);

};


#endif
