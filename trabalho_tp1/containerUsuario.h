#ifndef __CONTAINERSUSUARIO_H_INCLUDED__
#define __CONTAINERSUSUARIO_H_INCLUDED__

#include <iostream>
#include <list>
#include <string>
#include "entidadeUsuario.h"
#include "entidadeResultado.h"
#include "dominios.h"

using namespace std;

class ContainerUsuario
{
private:
  list<Usuario> container;

public:
  ContainerUsuario();
  virtual ~ContainerUsuario();

  Resultado cadastrar(Usuario);
  Resultado autenticar(Apelido, Senha);
  Resultado buscar(Apelido);
};

#endif