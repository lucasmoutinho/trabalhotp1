#ifndef __CONTROLADORAS_H_INCLUDED__
#define __CONTROLADORAS_H_INCLUDED__

#include "dominios.h"
#include "entidadeUsuario.h"
#include "entidadeLivro.h"
#include "entidadeResenha.h"
#include "entidadeResultado.h"
#include "interfaces.h"
#include "containerUsuario.h"
#include "containerLivro.h"
#include "containerResenha.h"
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <cstdio>

using namespace std;

///Classe controladora do cadastro de usuário
class CTRLCadastro:public IUCadastro{
public:

    CTRLCadastro();
    virtual ~CTRLCadastro();

    Resultado cadastrar() throw(runtime_error);

    void setContainer(ContainerUsuario*);

  private:

    ContainerUsuario *ContUsuario;
};


void inline CTRLCadastro::setContainer(ContainerUsuario *ContUsuario){
    this->ContUsuario = ContUsuario;
}

///Classe controladora do cadastro de livro
class CTRLCadastrolivro:public IUCadastrolivro{
public:

    CTRLCadastrolivro();
    virtual ~CTRLCadastrolivro();

    Resultado cadastrarlivro() throw(runtime_error);

    void setContainer(ContainerLivro *);

  private:

    ContainerLivro *ContLivro;
};


void inline CTRLCadastrolivro::setContainer(ContainerLivro *ContLivro){
    this->ContLivro = ContLivro;
}

///Classe controladora da autenticação
class CTRLAutenticacao:public IUAutenticacao{
public:

    CTRLAutenticacao();
    virtual ~CTRLAutenticacao();

    Resultado autenticar() throw(runtime_error);

    void setContainer(ContainerUsuario*);

  private:

    ContainerUsuario *ContUsuario;
};


void inline CTRLAutenticacao::setContainer(ContainerUsuario *ContUsuario){
    this->ContUsuario = ContUsuario;
}

///Classe controladora do registro de resenhas
class CTRLRegistroresenha:public IURegistroresenha{
public:

    CTRLRegistroresenha();
    virtual ~CTRLRegistroresenha();

    Resultado registrarresenha() throw(runtime_error);

    void setContainer(ContainerResenha *);

  private:

    ContainerResenha *ContResenha;
};

void inline CTRLRegistroresenha::setContainer(ContainerResenha *ContResenha)
{
    this->ContResenha = ContResenha;
}

///Classe controladora da busca de usuários
class CTRLBuscarusuario:public IUBuscarusuario{
public:

    CTRLBuscarusuario();
    virtual ~CTRLBuscarusuario();

    Resultado buscarusuario() throw(runtime_error);

    void setContainer(ContainerUsuario *);

  private:

    ContainerUsuario *ContUsuario;
};


void inline CTRLBuscarusuario::setContainer(ContainerUsuario *ContUsuario)
{
    this->ContUsuario = ContUsuario;
}

///Classe controladora da busca de livros
class CTRLBuscarlivro:public IUBuscarlivro{
public:

    CTRLBuscarlivro();
    virtual ~CTRLBuscarlivro();

    Resultado buscarlivro() throw(runtime_error);

    void setContainer(ContainerLivro *);

  private:

    ContainerLivro *ContLivro;
};


void inline CTRLBuscarlivro::setContainer(ContainerLivro *ContLivro)
{
    this->ContLivro = ContLivro;
}

///Classe controladora da troca de livros
class CTRLTrocarlivro:public IUTrocarlivro{
public:

    CTRLTrocarlivro();
    virtual ~CTRLTrocarlivro();

    Resultado trocarlivro() throw(runtime_error);

    void setContainer(ContainerLivro *);

  private:

    ContainerLivro *ContLivro;
};


void inline CTRLTrocarlivro::setContainer(ContainerLivro *ContLivro)
{
    this->ContLivro = ContLivro;
}

///Classe controladora da interface de usuario
class CTRLInterfaceUsuario : public IUInterfaceUsuario
{
  public:

    const static int SAIR = 0;
    const static int DESLOGAR = 1;
    const static int CADASTRAR_USUARIO = 2;
    const static int AUTENTICAR_USUARIO = 3;
    const static int BUSCAR_USUARIO = 4;
    const static int CADASTRAR_LIVRO = 5;
    const static int REMOVER_LIVRO = 6;
    const static int BUSCAR_LIVRO = 7;
    const static int TROCAR_LIVRO = 8;
    const static int REGISTRAR_RESENHA = 9;

    CTRLInterfaceUsuario();
    virtual ~CTRLInterfaceUsuario();

    void interfaceUsuario() throw(runtime_error);
};


#endif
