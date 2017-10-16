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

#endif
