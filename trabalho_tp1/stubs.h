#ifndef __STUBS_H_INCLUDED__
#define __STUBS_H_INCLUDED__

#include "dominios.h"
#include "entidades.h"
#include "controladoras.h"
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

    Resultado cadastrar(Nome nome, Apelido apelido, Senha senha, Telefone telefone) throw(runtime_error);

};

///Classe que representa o STUB de cadastro de livros
class STUBCadastrolivro:public ILNCadastrolivro{
public:

    STUBCadastrolivro();
    virtual ~STUBCadastrolivro();

    static const string TRIGGER_FALHA_CADASTRO_LIVRO;
    static const string TRIGGER_ERRO_SISTEMA_CADASTRO_LIVRO;

    Resultado cadastrarlivro(Titulo titulo, Nome autor, Data data, Codigo codigo, Genero genero) throw(runtime_error);

};

///Classe que representa o STUB de autenticação
class STUBAutenticacao:public ILNAutenticacao{
public:

    STUBAutenticacao();
    virtual ~STUBAutenticacao();

    static const string TRIGGER_FALHA_AUTENTICACAO;
    static const string TRIGGER_ERRO_SISTEMA_AUTENTICACAO;

    Resultado autenticar(Apelido apelido, Senha senha) throw(runtime_error);

};

///Classe que representa o STUB de cadastro de registro de resenhas
class STUBRegistroresenha:public ILNRegistroresenha{
public:

    STUBRegistroresenha();
    virtual ~STUBRegistroresenha();

    static const string TRIGGER_FALHA_REGISTRO_RESENHA;
    static const string TRIGGER_ERRO_SISTEMA_REGISTRO_RESENHA;

    Resultado registrarresenha(Nome autor, Titulo titulo, Texto texto) throw(runtime_error);

};

///Classe que representa o STUB de busca por usuários
class STUBBuscarusuario:public ILNBuscarusuario{
public:

    STUBBuscarusuario();
    virtual ~STUBBuscarusuario();

    static const string TRIGGER_FALHA_BUSCAR_USUARIO;
    static const string TRIGGER_ERRO_SISTEMA_BUSCAR_USUARIO;
    static const string USUARIO_CADASTRADO;

    Resultado buscarusuario(Apelido apelido) throw(runtime_error);

};

///Classe que representa o STUB de busca por livros
class STUBBuscarlivro:public ILNBuscarlivro{
public:

    STUBBuscarlivro();
    virtual ~STUBBuscarlivro();

    static const string TRIGGER_FALHA_BUSCAR_LIVRO;
    static const string TRIGGER_ERRO_SISTEMA_BUSCAR_LIVRO;
    static const string LIVRO_CADASTRADO;

    Resultado buscarlivro(Titulo titulo) throw(runtime_error);

};

///Classe que representa o STUB de troca de livros
class STUBTrocarlivro:public ILNTrocarlivro{
public:

    STUBTrocarlivro();
    virtual ~STUBTrocarlivro();

    static const string TRIGGER_FALHA_TROCAR_LIVRO;
    static const string TRIGGER_ERRO_SISTEMA_TROCAR_LIVRO;
    static const string LIVRO_DISPONIVEL_TROCA;

    Resultado trocarlivro(Titulo titulo) throw(runtime_error);

};

///Classe que representa o STUB de comandos de um usuário autenticado
class STUBComandosusuarioautenticado:public ILNComandosusuarioautenticado{
public:

    STUBComandosusuarioautenticado();
    virtual ~STUBComandosusuarioautenticado();

    static const string TRIGGER_FALHA_CADASTRO_LIVRO;
    static const string TRIGGER_ERRO_SISTEMA_CADASTRO_LIVRO;
    static const string TRIGGER_FALHA_REGISTRO_RESENHA;
    static const string TRIGGER_ERRO_SISTEMA_REGISTRO_RESENHA;
    static const string TRIGGER_FALHA_BUSCAR_USUARIO;
    static const string TRIGGER_ERRO_SISTEMA_BUSCAR_USUARIO;
    static const string TRIGGER_FALHA_BUSCAR_LIVRO;
    static const string TRIGGER_ERRO_SISTEMA_BUSCAR_LIVRO;
    static const string TRIGGER_FALHA_TROCAR_LIVRO;
    static const string TRIGGER_ERRO_SISTEMA_TROCAR_LIVRO;
    static const string LIVRO_DISPONIVEL_TROCA;
    static const string LIVRO_CADASTRADO;
    static const string USUARIO_CADASTRADO;

    Resultado incluir(Titulo titulo, Nome autor, Data data, Codigo codigo, Genero genero) throw(runtime_error);
    Resultado remover(Titulo titulo) throw(runtime_error);
    Resultado registrarresenha(Nome autor, Titulo titulo, Texto texto) throw(runtime_error);
    Resultado trocarlivro(Titulo titulo) throw(runtime_error);
    Resultado buscarlivro(Titulo titulo) throw(runtime_error);
    Resultado buscarusuario(Apelido apelido) throw(runtime_error);

};

#endif
