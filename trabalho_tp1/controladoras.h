#ifndef __CONTROLADORAS_H_INCLUDED__
#define __CONTROLADORAS_H_INCLUDED__

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include <iostream>
#include <stdexcept>
#include <stdio.h>

using namespace std;

class CTRLCadastro:public IUCadastro{
public:

    CTRLCadastro();
    virtual ~CTRLCadastro();

    Resultado cadastrar() throw(runtime_error);

    const static int FALHA_AO_CADASTRAR = 0;
    const static int SUCESSO_AO_CADASTRAR = 1;

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
    
    const static int FALHA_AO_CADASTRAR_LIVRO = 0;
    const static int SUCESSO_AO_CADASTRAR_LIVRO = 1;

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
    
    const static int FALHA_AO_AUTENTICAR = 0;
    const static int SUCESSO_AO_AUTENTICAR = 1;

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
    
    const static int FALHA_AO_REGISTRAR_RESENHA = 0;
    const static int SUCESSO_AO_REGISTRAR_RESENHA = 1;

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
    
    const static int FALHA_AO_BUSCAR_USUARIO = 0;
    const static int SUCESSO_AO_BUSCAR_USUARIO = 1;

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
    
    const static int FALHA_AO_BUSCAR_LIVRO = 0;
    const static int SUCESSO_AO_BUSCAR_LIVRO = 1;

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
    
    const static int FALHA_AO_TROCAR_LIVRO = 0;
    const static int SUCESSO_AO_TROCAR_LIVRO = 1;

    void setCntrLNTrocarlivro(ILNTrocarlivro*);

private:

    ILNTrocarlivro *LNTrocarlivro;
};

void inline CTRLTrocarlivro::setCntrLNTrocarlivro(ILNTrocarlivro *LNTrocarlivro){
    this->LNTrocarlivro = LNTrocarlivro;
}

#endif
