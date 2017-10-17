#ifndef __COMANDOS_H_INCLUDED__
#define __COMANDOS_H_INCLUDED__

#include "interfaces.h"
#include "dominios.h"
#include "entidades.h"
#include "controladoras.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;

class ComandoIUusuarioautenticado{
public:

    virtual void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error) = 0;

    virtual ~ComandoIUusuarioautenticado();

};

class ComandoIUUsuarioincluir:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

class ComandoIUUsuarioexcluir:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

class ComandoIUUsuarioregistrarresenha:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

class ComandoIUUsuariotrocarlivro:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

class ComandoIUUsuariobuscarlivro:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

class ComandoIUUsuariobuscarusuario:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

#endif