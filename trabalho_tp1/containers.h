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
  ContainerResenha *resenhas;

public:
  ContainerLivro();
  virtual ~ContainerLivro();

  Resultado cadastrar(Livro);
  Resultado buscar(Titulo);
  Resultado trocar(Titulo);
  void setContainer(ContainerResenha *);

};

void inline ContainerLivro::setContainer(ContainerResenha *resenhas)
{
  this->resenhas = resenhas;
}

class ContainerUsuario
{
private:
  list<Usuario> container;
  ContainerLivro *estante;

public:
  ContainerUsuario();
  virtual ~ContainerUsuario();

  Resultado cadastrar(Usuario);
  Resultado autenticar(Apelido, Senha);
  Resultado buscar(Apelido);
  void setContainer(ContainerLivro *);

};

void inline ContainerUsuario::setContainer(ContainerLivro *estante)
{
  this->estante = estante;
}

#endif