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


#endif
