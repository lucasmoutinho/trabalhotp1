#ifndef __INTERFACES_H_INCLUDED__
#define __INTERFACES_H_INCLUDED__

#include "dominios.h"
#include "entidadeUsuario.h"
#include "entidadeLivro.h"
#include "entidadeResenha.h"
#include "entidadeResultado.h"
#include "containerUsuario.h"
#include "containerLivro.h"
#include "containerResenha.h"
#include <stdexcept>

using namespace std;

class IUCadastro;

///Classe que representa a interface de usuario do cadastro.
class IUCadastro{
public:

    IUCadastro();
    virtual ~IUCadastro();

    virtual Resultado cadastrar() throw(runtime_error) = 0;

    virtual void setContainer(ContainerUsuario*) = 0;
};


class IUCadastrolivro;

///Classe que representa a interface de usuario do cadastro do livro.
class IUCadastrolivro{
public:

    IUCadastrolivro();
    virtual ~IUCadastrolivro();

    virtual Resultado cadastrarlivro() throw(runtime_error) = 0;

    virtual void setContainer(ContainerLivro*) = 0;
};


class IUAutenticacao;

///Classe que representa a interface de usuario da autenticação.
class IUAutenticacao{
public:

    IUAutenticacao();
    virtual ~IUAutenticacao();

    virtual Resultado autenticar(Usuario**) throw(runtime_error) = 0;

    virtual void setContainer(ContainerUsuario*) = 0;
};


class IURegistroresenha;

///Classe que representa a interface de usuario do registro de resenhas.
class IURegistroresenha{
public:

    IURegistroresenha();
    virtual ~IURegistroresenha();

    virtual Resultado registrarresenha(string, string) throw(runtime_error) = 0;

    virtual void setContainer(ContainerResenha *) = 0;
};


class IUBuscarusuario;

///Classe que representa a interface de usuario da busca de usuários.
class IUBuscarusuario{
public:

    IUBuscarusuario();
    virtual ~IUBuscarusuario();

    virtual Resultado buscarusuario() throw(runtime_error) = 0;

    virtual void setContainer(ContainerUsuario *) = 0;
};


class IUBuscarlivro;

///Classe que representa a interface de usuario da busca de livros.
class IUBuscarlivro{
public:

    IUBuscarlivro();
    virtual ~IUBuscarlivro();

    virtual Resultado buscarlivro(Livro**) throw(runtime_error) = 0;

    virtual void setContainer(ContainerLivro *) = 0;
};

class IUTrocarlivro;

///Classe que representa a interface de usuario da troca de livros.
class IUTrocarlivro{
public:

    IUTrocarlivro();
    virtual ~IUTrocarlivro();

    virtual Resultado trocarlivro() throw(runtime_error) = 0;

    virtual void setContainer(ContainerLivro *) = 0;
};

class IURemoverLivro;

///Classe que representa a interface de usuario da troca de livros.
class IURemoverLivro{
public:

    IURemoverLivro();
    virtual ~IURemoverLivro();

    virtual Resultado removerLivro() throw(runtime_error) = 0;

    virtual void setContainer(ContainerLivro *) = 0;
};


class IUInterfaceUsuario;

///Classe que representa a interface de usuario da troca de livros.
class IUInterfaceUsuario
{
  public:
    IUInterfaceUsuario();
    virtual ~IUInterfaceUsuario();

    virtual void interfaceUsuario() throw(runtime_error) = 0;
};



#endif
