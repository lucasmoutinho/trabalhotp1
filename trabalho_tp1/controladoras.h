#ifndef __CONTROLADORAS_H_INCLUDED__
#define __CONTROLADORAS_H_INCLUDED__

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include <iostream>
#include <stdexcept>

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
    const static int SUCESSO_AO_REGISTAR_RESENHA = 1;

    void setCntrLNRegistroresenha(ILNRegistroresenha*);

private:

    ILNRegistroresenha *LNRegistroresenha;
};

void inline CTRLRegistroresenha::setCntrLNRegistroresenha(ILNRegistroresenha *LNRegistroresenha){
    this->LNRegistroresenha = LNRegistroresenha;
}

#endif
