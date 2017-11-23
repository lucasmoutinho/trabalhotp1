#ifndef __CONTAINERS_H_INCLUDED__
#define __CONTAINERS_H_INCLUDED__

#include <iostream>
#include <list>
#include <string>
#include "entidades.h"
#include "dominios.h"

using namespace std;

class ContainerUsuario{
private:

  list<Usuario> container;

public:

  Resultado cadastrar(Usuario);
  Resultado autenticar(Apelido, Senha);
  Resultado buscar(Apelido);
};

class ContainerLivro
{
private:
  list<Livro> container;

public:
  Resultado cadastrar(Livro);
};

class ContainerResenha
{
private:
  list<Resenha> container;

public:
  Resultado cadastrar(Resenha);
};

#endif