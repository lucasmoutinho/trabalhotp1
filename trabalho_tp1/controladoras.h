#ifndef __CONTROLADORAS_H_INCLUDED__
#define __CONTROLADORAS_H_INCLUDED__

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "comandos.h"
#include <iostream>
#include <stdexcept>
#include <stdio.h>

using namespace std;

class CTRLCadastro:public IUCadastro{
public:

    CTRLCadastro();
    virtual ~CTRLCadastro();

    Resultado cadastrar() throw(runtime_error);

    void setCntrLNCadastro(ILNCadastro*);

private:

    ILNCadastro *LNCadastro;
};

void inline CTRLCadastro::setCntrLNCadastro(ILNCadastro *LNCadastro){
    this->LNCadastro = LNCadastro;
}

class CTRLCadastrolivro:public IUCadastrolivro{
public:

    CTRLCadastrolivro();
    virtual ~CTRLCadastrolivro();

    Resultado cadastrarlivro() throw(runtime_error);

    void setCntrLNCadastrolivro(ILNCadastrolivro*);

private:

    ILNCadastrolivro *LNCadastrolivro;
};

void inline CTRLCadastrolivro::setCntrLNCadastrolivro(ILNCadastrolivro *LNCadastrolivro){
    this->LNCadastrolivro = LNCadastrolivro;
}

class CTRLAutenticacao:public IUAutenticacao{
public:

    CTRLAutenticacao();
    virtual ~CTRLAutenticacao();

    Resultado autenticar() throw(runtime_error);

    void setCntrLNAutenticacao(ILNAutenticacao*);

private:

    ILNAutenticacao *LNAutenticacao;
};

void inline CTRLAutenticacao::setCntrLNAutenticacao(ILNAutenticacao *LNAutenticacao){
    this->LNAutenticacao = LNAutenticacao;
}

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
    this->LNRegistroresenha = LNRegistroresenha;
}

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
    this->LNBuscarusuario = LNBuscarusuario;
}

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
    this->LNBuscarlivro = LNBuscarlivro;
}

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
    this->LNTrocarlivro = LNTrocarlivro;
}

class CTRLComandosusuarioautenticado:public IUComandosusuarioautenticado{
public:

    CTRLComandosusuarioautenticado();
    virtual ~CTRLComandosusuarioautenticado();

    void comandosusuarioautenticado() throw(runtime_error);

    void setCntrLNComandosusuarioautenticado(ILNComandosusuarioautenticado*);

private:

    const static int INCLUIR = 0;
    const static int REMOVER = 1;
    const static int REGISTRAR_RESENHA = 2;
    const static int TROCAR_LIVRO = 3;
    const static int BUSCAR_LIVRO = 4;
    const static int BUSCAR_USUARIO = 5;
    const static int RETORNAR_MENU = 6;

    ILNComandosusuarioautenticado *cntrLNComandosusuarioautenticado;
};

void inline CTRLComandosusuarioautenticado::setCntrLNComandosusuarioautenticado(ILNComandosusuarioautenticado *cntrLNComandosusuarioautenticado){
    this->cntrLNComandosusuarioautenticado = cntrLNComandosusuarioautenticado;
}

#endif
