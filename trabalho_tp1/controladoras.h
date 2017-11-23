#ifndef __CONTROLADORAS_H_INCLUDED__
#define __CONTROLADORAS_H_INCLUDED__

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "comandos.h"
#include "containers.h"
#include <iostream>
#include <stdexcept>
#include <stdio.h>

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

private:

    ILNRegistroresenha *LNRegistroresenha;
};

void inline CTRLRegistroresenha::setCntrLNRegistroresenha(ILNRegistroresenha *LNRegistroresenha){
    ///Método responsável por fazer a ligação entre controladora de registro de resenhas e lógica de negócio
    this->LNRegistroresenha = LNRegistroresenha;
}

///Classe controladora da busca de usuários
class CTRLBuscarusuario:public IUBuscarusuario{
public:

    CTRLBuscarusuario();
    virtual ~CTRLBuscarusuario();

    Resultado buscarusuario() throw(runtime_error);

    void setCntrLNBuscarusuario(ILNBuscarusuario*);

private:

    ILNBuscarusuario *LNBuscarusuario;
};

void inline CTRLBuscarusuario::setCntrLNBuscarusuario(ILNBuscarusuario *LNBuscarusuario){
    ///Método responsável por fazer a ligação entre controladora de busca de usuários e lógica de negócio
    this->LNBuscarusuario = LNBuscarusuario;
}

///Classe controladora da busca de livros
class CTRLBuscarlivro:public IUBuscarlivro{
public:

    CTRLBuscarlivro();
    virtual ~CTRLBuscarlivro();

    Resultado buscarlivro() throw(runtime_error);

    void setCntrLNBuscarlivro(ILNBuscarlivro*);

private:

    ILNBuscarlivro *LNBuscarlivro;
};

void inline CTRLBuscarlivro::setCntrLNBuscarlivro(ILNBuscarlivro *LNBuscarlivro){
    ///Método responsável por fazer a ligação entre controladora de busca de livro e lógica de negócio
    this->LNBuscarlivro = LNBuscarlivro;
}

///Classe controladora da troca de livros
class CTRLTrocarlivro:public IUTrocarlivro{
public:

    CTRLTrocarlivro();
    virtual ~CTRLTrocarlivro();

    Resultado trocarlivro() throw(runtime_error);

    void setCntrLNTrocarlivro(ILNTrocarlivro*);

private:

    ILNTrocarlivro *LNTrocarlivro;
};

void inline CTRLTrocarlivro::setCntrLNTrocarlivro(ILNTrocarlivro *LNTrocarlivro){
    ///Método responsável por fazer a ligação entre controladora de troca de livro e lógica de negócio
    this->LNTrocarlivro = LNTrocarlivro;
}

///Classe controladora dos comandos de um usuário autenticado
class CTRLComandosusuarioautenticado:public IUComandosusuarioautenticado{
public:

    CTRLComandosusuarioautenticado();
    virtual ~CTRLComandosusuarioautenticado();

    void comandosusuarioautenticado() throw(runtime_error);

    void setCntrLNComandosusuarioautenticado(ILNComandosusuarioautenticado*);

private:

    const static int RETORNAR_MENU = 0;
    const static int INCLUIR = 1;
    const static int REMOVER = 2;
    const static int REGISTRAR_RESENHA = 3;
    const static int TROCAR_LIVRO = 4;
    const static int BUSCAR_LIVRO = 5;
    const static int BUSCAR_USUARIO = 6;

    ILNComandosusuarioautenticado *cntrLNComandosusuarioautenticado;
};

void inline CTRLComandosusuarioautenticado::setCntrLNComandosusuarioautenticado(ILNComandosusuarioautenticado *cntrLNComandosusuarioautenticado){
    ///Método responsável por fazer a ligação entre controladora de comandos de um usuário autenticado e lógica de negócio
    this->cntrLNComandosusuarioautenticado = cntrLNComandosusuarioautenticado;
}

#endif
