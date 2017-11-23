#ifndef __CONTROLADORAS_H_INCLUDED__
#define __CONTROLADORAS_H_INCLUDED__

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
#include <stdio.h>
#include <cstdio>

using namespace std;

///Classe controladora do cadastro de usuário
class CTRLCadastro:public IUCadastro{
public:

    CTRLCadastro();
    virtual ~CTRLCadastro();

    Resultado cadastrar() throw(runtime_error);

    void setCntrLNCadastro(ILNCadastro*);
    void setContainer(ContainerUsuario*);

  private:

    ILNCadastro *LNCadastro;
    ContainerUsuario *ContUsuario;
};

void inline CTRLCadastro::setCntrLNCadastro(ILNCadastro *LNCadastro){
    ///Método responsável por fazer a ligação entre controladora de cadastro de usuário e lógica de negócio
    this->LNCadastro = LNCadastro;
}

void inline CTRLCadastro::setContainer(ContainerUsuario *ContUsuario){
    this->ContUsuario = ContUsuario;
}

///Classe controladora do cadastro de livro
class CTRLCadastrolivro:public IUCadastrolivro{
public:

    CTRLCadastrolivro();
    virtual ~CTRLCadastrolivro();

    Resultado cadastrarlivro() throw(runtime_error);

    void setCntrLNCadastrolivro(ILNCadastrolivro*);
    void setContainer(ContainerLivro *);

  private:

    ILNCadastrolivro *LNCadastrolivro;
    ContainerLivro *ContLivro;
};

void inline CTRLCadastrolivro::setCntrLNCadastrolivro(ILNCadastrolivro *LNCadastrolivro){
     ///Método responsável por fazer a ligação entre controladora de cadastro de livro e lógica de negócio
    this->LNCadastrolivro = LNCadastrolivro;
}

void inline CTRLCadastrolivro::setContainer(ContainerLivro *ContLivro){
    this->ContLivro = ContLivro;
}

///Classe controladora da autenticação
class CTRLAutenticacao:public IUAutenticacao{
public:

    CTRLAutenticacao();
    virtual ~CTRLAutenticacao();

    Resultado autenticar() throw(runtime_error);

    void setCntrLNAutenticacao(ILNAutenticacao*);
    void setContainer(ContainerUsuario*);

  private:

    ILNAutenticacao *LNAutenticacao;
    ContainerUsuario *ContUsuario;
};

void inline CTRLAutenticacao::setCntrLNAutenticacao(ILNAutenticacao *LNAutenticacao){
    ///Método responsável por fazer a ligação entre controladora de autenticação e lógica de negócio
    this->LNAutenticacao = LNAutenticacao;
}

void inline CTRLAutenticacao::setContainer(ContainerUsuario *ContUsuario){
    this->ContUsuario = ContUsuario;
}

///Classe controladora do registro de resenhas
class CTRLRegistroresenha:public IURegistroresenha{
public:

    CTRLRegistroresenha();
    virtual ~CTRLRegistroresenha();

    Resultado registrarresenha() throw(runtime_error);

    void setCntrLNRegistroresenha(ILNRegistroresenha*);
    void setContainer(ContainerResenha *);

  private:

    ILNRegistroresenha *LNRegistroresenha;
    ContainerResenha *ContResenha;
};

void inline CTRLRegistroresenha::setCntrLNRegistroresenha(ILNRegistroresenha *LNRegistroresenha){
    ///Método responsável por fazer a ligação entre controladora de registro de resenhas e lógica de negócio
    this->LNRegistroresenha = LNRegistroresenha;
}

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

    void setCntrLNBuscarusuario(ILNBuscarusuario*);
    void setContainer(ContainerUsuario *);

  private:

    ILNBuscarusuario *LNBuscarusuario;
    ContainerUsuario *ContUsuario;
};

void inline CTRLBuscarusuario::setCntrLNBuscarusuario(ILNBuscarusuario *LNBuscarusuario){
    ///Método responsável por fazer a ligação entre controladora de busca de usuários e lógica de negócio
    this->LNBuscarusuario = LNBuscarusuario;
}

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

    void setCntrLNBuscarlivro(ILNBuscarlivro*);
    void setContainer(ContainerLivro *);

  private:

    ILNBuscarlivro *LNBuscarlivro;
    ContainerLivro *ContLivro;
};

void inline CTRLBuscarlivro::setCntrLNBuscarlivro(ILNBuscarlivro *LNBuscarlivro){
    ///Método responsável por fazer a ligação entre controladora de busca de livro e lógica de negócio
    this->LNBuscarlivro = LNBuscarlivro;
}

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

    void setCntrLNTrocarlivro(ILNTrocarlivro*);
    void setContainer(ContainerLivro *);

  private:

    ILNTrocarlivro *LNTrocarlivro;
    ContainerLivro *ContLivro;
};

void inline CTRLTrocarlivro::setCntrLNTrocarlivro(ILNTrocarlivro *LNTrocarlivro){
    ///Método responsável por fazer a ligação entre controladora de troca de livro e lógica de negócio
    this->LNTrocarlivro = LNTrocarlivro;
}

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
