#ifndef __INTERFACES_H_INCLUDED__
#define __INTERFACES_H_INCLUDED__

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
#include <stdexcept>

using namespace std;

class IUCadastro;
class ILNCadastro;

///Classe que representa a interface de usuario do cadastro.
class IUCadastro{
public:

    IUCadastro();
    virtual ~IUCadastro();

    virtual Resultado cadastrar() throw(runtime_error) = 0;

    virtual void setCntrLNCadastro(ILNCadastro*) = 0;
    virtual void setContainer(ContainerUsuario*) = 0;
};

///Classe que representa a interface da logica de negócio do cadastro.
class ILNCadastro{
public:

    virtual ~ILNCadastro();

    virtual Resultado cadastrar(const Nome&,const Apelido&,const Senha&,const Telefone&) throw(runtime_error) = 0;

};

class IUCadastrolivro;
class ILNCadastrolivro;

///Classe que representa a interface de usuario do cadastro do livro.
class IUCadastrolivro{
public:

    IUCadastrolivro();
    virtual ~IUCadastrolivro();

    virtual Resultado cadastrarlivro() throw(runtime_error) = 0;

    virtual void setCntrLNCadastrolivro(ILNCadastrolivro*) = 0;
    virtual void setContainer(ContainerLivro*) = 0;
};

///Classe que representa a interface da logica de negócio do cadastro do livro.
class ILNCadastrolivro{
public:

    virtual ~ILNCadastrolivro();

    virtual Resultado cadastrarlivro(const Titulo&,const Nome&,const Data&,const Codigo&,const Genero&) throw(runtime_error) = 0;

};

class IUAutenticacao;
class ILNAutenticacao;

///Classe que representa a interface de usuario da autenticação.
class IUAutenticacao{
public:

    IUAutenticacao();
    virtual ~IUAutenticacao();

    virtual Resultado autenticar() throw(runtime_error) = 0;

    virtual void setCntrLNAutenticacao(ILNAutenticacao*) = 0;
    virtual void setContainer(ContainerUsuario*) = 0;
};

///Classe que representa a interface da lógica de negócio da autenticação.
class ILNAutenticacao{
public:

    virtual ~ILNAutenticacao();

    virtual Resultado autenticar(const Apelido&,const Senha&) throw(runtime_error) = 0;

};

class IURegistroresenha;
class ILNRegistroresenha;

///Classe que representa a interface de usuario do registro de resenhas.
class IURegistroresenha{
public:

    IURegistroresenha();
    virtual ~IURegistroresenha();

    virtual Resultado registrarresenha() throw(runtime_error) = 0;

    virtual void setCntrLNRegistroresenha(ILNRegistroresenha*) = 0;
    virtual void setContainer(ContainerResenha *) = 0;
};

///Classe que representa a interface da lógica de negócios do registro de resenhas.
class ILNRegistroresenha{
public:

    virtual ~ILNRegistroresenha();

    virtual Resultado registrarresenha(const Nome&,const Titulo&,const Texto&) throw(runtime_error) = 0;

};

class IUBuscarusuario;
class ILNBuscarusuario;

///Classe que representa a interface de usuario da busca de usuários.
class IUBuscarusuario{
public:

    IUBuscarusuario();
    virtual ~IUBuscarusuario();

    virtual Resultado buscarusuario() throw(runtime_error) = 0;

    virtual void setCntrLNBuscarusuario(ILNBuscarusuario*) = 0;
    virtual void setContainer(ContainerUsuario *) = 0;
};

///Classe que representa a interface da lógica de negócios da busca de usuários.
class ILNBuscarusuario{
public:

    virtual ~ILNBuscarusuario();

    virtual Resultado buscarusuario(const Apelido&) throw(runtime_error) = 0;

};

class IUBuscarlivro;
class ILNBuscarlivro;

///Classe que representa a interface de usuario da busca de livros.
class IUBuscarlivro{
public:

    IUBuscarlivro();
    virtual ~IUBuscarlivro();

    virtual Resultado buscarlivro() throw(runtime_error) = 0;

    virtual void setCntrLNBuscarlivro(ILNBuscarlivro*) = 0;
    virtual void setContainer(ContainerLivro *) = 0;
};

///Classe que representa a interface da lógica de negócios da busca de livros.
class ILNBuscarlivro{
public:

    virtual ~ILNBuscarlivro();

    virtual Resultado buscarlivro(const Titulo&) throw(runtime_error) = 0;

};

class IUTrocarlivro;
class ILNTrocarlivro;

///Classe que representa a interface de usuario da troca de livros.
class IUTrocarlivro{
public:

    IUTrocarlivro();
    virtual ~IUTrocarlivro();

    virtual Resultado trocarlivro() throw(runtime_error) = 0;

    virtual void setCntrLNTrocarlivro(ILNTrocarlivro*) = 0;
    virtual void setContainer(ContainerLivro *) = 0;
};

///Classe que representa a interface da lógica de negócios da troca de livros.
class ILNTrocarlivro{
public:

    virtual ~ILNTrocarlivro();

    virtual Resultado trocarlivro(const Titulo&) throw(runtime_error) = 0;

};

class IUInterfaceUsuario;
class ILNInterfaceUsuario;

///Classe que representa a interface de usuario da troca de livros.
class IUInterfaceUsuario
{
  public:
    IUInterfaceUsuario();
    virtual ~IUInterfaceUsuario();

    virtual void interfaceUsuario() throw(runtime_error) = 0;
};



#endif
