#ifndef __INTERFACES_H_INCLUDED__
#define __INTERFACES_H_INCLUDED__

#include "dominios.h"
#include "entidades.h"
#include <stdexcept>

using namespace std;

class IUCadastro;
class ILNCadastro;

class IUCadastro{
public:

    IUCadastro();
    virtual ~IUCadastro();

    virtual Resultado cadastrar() throw(runtime_error) = 0;

    virtual void setCntrLNCadastro(ILNCadastro*) = 0;
};

class ILNCadastro{
public:

    virtual ~ILNCadastro();

    virtual Resultado cadastrar(Nome nome, Apelido apelido, Senha senha, Telefone telefone) throw(runtime_error) = 0;

};

class IUCadastrolivro;
class ILNCadastrolivro;

class IUCadastrolivro{
public:

    IUCadastrolivro();
    virtual ~IUCadastrolivro();

    virtual Resultado cadastrarlivro() throw(runtime_error) = 0;

    virtual void setCntrLNCadastrolivro(ILNCadastrolivro*) = 0;
};

class ILNCadastrolivro{
public:

    virtual ~ILNCadastrolivro();

    virtual Resultado cadastrarlivro(Titulo titulo, Nome autor, Data data, Codigo codigo, Genero genero) throw(runtime_error) = 0;

};

class IUAutenticacao;
class ILNAutenticacao;

class IUAutenticacao{
public:

    IUAutenticacao();
    virtual ~IUAutenticacao();

    virtual Resultado autenticar() throw(runtime_error) = 0;

    virtual void setCntrLNAutenticacao(ILNAutenticacao*) = 0;
};

class ILNAutenticacao{
public:

    virtual ~ILNAutenticacao();

    virtual Resultado autenticar(Apelido apelido, Senha senha) throw(runtime_error) = 0;

};

class IURegistroresenha;
class ILNRegistroresenha;

class IURegistroresenha{
public:

    IURegistroresenha();
    virtual ~IURegistroresenha();

    virtual Resultado registrarresenha() throw(runtime_error) = 0;

    virtual void setCntrLNRegistroresenha(ILNRegistroresenha*) = 0;
};

class ILNRegistroresenha{
public:

    virtual ~ILNRegistroresenha();

    virtual Resultado registrarresenha(Nome autor, Titulo titulo, Texto texto) throw(runtime_error) = 0;

};

#endif
