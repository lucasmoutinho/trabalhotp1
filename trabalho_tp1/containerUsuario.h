#ifndef __CONTAINERSUSUARIO_H_INCLUDED__
#define __CONTAINERSUSUARIO_H_INCLUDED__

#include <iostream>
#include <list>
#include <string>
#include "entidadeUsuario.h"
#include "entidadeResultado.h"
#include "dominios.h"

using namespace std;

///Classe que implementa o container para uma lista de usuarios e metodos que envolvem o acesso a tal
class ContainerUsuario
{
private:
  list<Usuario> container;

public:
  ContainerUsuario();
  virtual ~ContainerUsuario();

  Resultado cadastrar(Usuario);
  Resultado autenticar(Apelido, Senha, Usuario**);
  Resultado buscar(Apelido);
};

#endif