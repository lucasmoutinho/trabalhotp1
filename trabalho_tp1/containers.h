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
  Resultado cadastrar(Resenha);
};

class ContainerLivro
{
private:
  list<Livro> container;
  ContainerResenha *resenhas;

public:
  Resultado cadastrar(Livro);
  Resultado buscar(Titulo);
  Resultado trocar(Titulo);
};

class ContainerUsuario
{
private:
  list<Usuario> container;
  ContainerLivro *estante;

public:
  Resultado cadastrar(Usuario);
  Resultado autenticar(Apelido, Senha);
  Resultado buscar(Apelido);
};

#endif