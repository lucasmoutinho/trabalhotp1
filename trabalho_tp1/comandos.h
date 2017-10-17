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

///Classe de execução dos comandos de um usuário autenticado
class ComandoIUusuarioautenticado{
public:

    virtual void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error) = 0;

    virtual ~ComandoIUusuarioautenticado();

};

///Classe do comando de inclusão de um usuário autenticado
class ComandoIUUsuarioincluir:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

///Classe do comando de exclusão de um usuário autenticado
class ComandoIUUsuarioexcluir:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

///Classe do comando de registro de resenha de um usuário autenticado
class ComandoIUUsuarioregistrarresenha:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

///Classe do comando de troca de livros de um usuário autenticado
class ComandoIUUsuariotrocarlivro:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

///Classe do comando de busca de livros um usuário autenticado
class ComandoIUUsuariobuscarlivro:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

///Classe do comando de busca de usuarios de um usuário autenticado
class ComandoIUUsuariobuscarusuario:public ComandoIUusuarioautenticado{
public:

    void comandosusuarioautenticado(ILNComandosusuarioautenticado*) throw(runtime_error);

};

#endif