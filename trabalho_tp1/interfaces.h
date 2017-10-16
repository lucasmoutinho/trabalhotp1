#ifndef __INTERFACES_H_INCLUDED__
#define __INTERFACES_H_INCLUDED__

#include "dominios.h"
#include "entidades.h"
#include <stdexcept>

using namespace std;

class ILNCadastro;
class IUCadastro;

class IUCadastro{
public:

    IUCadastro();
    virtual ~IUCadastro();

    virtual Resultado cadastrar() throw(runtime_error) = 0;

    virtual void setCntrLNCadastro(ILNCadastro*) = 0;
};

class ILNCadastro{
public:

    virtual Resultado cadastrar(Nome nome, Apelido apelido, Senha senha, Telefone telefone) throw(runtime_error) = 0;

    virtual ~ILNCadastro();

};

class ILNCadastrolivro;
class IUCadastrolivro;

class IUCadastrolivro{
public:

    IUCadastrolivro();
    virtual ~IUCadastrolivro();

    virtual Resultado cadastrarlivro() throw(runtime_error) = 0;

    virtual void setCntrLNCadastrolivro(ILNCadastrolivro*) = 0;
};

class ILNCadastrolivro{
public:

    virtual Resultado cadastrarlivro(Titulo titulo, Nome autor, Data data, Codigo codigo, Genero genero) throw(runtime_error) = 0;

    virtual ~ILNCadastrolivro();
};

#endif
