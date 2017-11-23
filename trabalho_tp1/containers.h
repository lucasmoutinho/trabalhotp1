#ifndef __CONTAINERS_H_INCLUDED__
#define __CONTAINERS_H_INCLUDED__

#include <iostream>
#include <list>
#include <string>
#include "entidades.h"
#include "dominios.h"

using namespace std;

class ContainerResenha
{
private:
  list<Resenha> container;

public:
  ContainerResenha();
  virtual ~ContainerResenha();

  Resultado cadastrar(Resenha);
};

class ContainerLivro
{
private:
  list<Livro> container;

public:
  ContainerLivro();
  virtual ~ContainerLivro();

  Resultado cadastrar(Livro);
  Resultado buscar(Titulo);
  Resultado trocar(Titulo);
  
};

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

void inline ContainerUsuario::setContainer(ContainerLivro *estante)
{
  this->estante = estante;
}

#endif