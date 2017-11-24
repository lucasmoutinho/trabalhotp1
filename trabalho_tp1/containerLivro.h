#ifndef __CONTAINERSLIVRO_H_INCLUDED__
#define __CONTAINERSLIVRO_H_INCLUDED__

#include <iostream>
#include <list>
#include <string>
#include "entidadeLivro.h"
#include "entidadeResultado.h"
#include "dominios.h"

using namespace std;

class ContainerLivro
{
private:
  list<Livro> container;

public:
  ContainerLivro();
  virtual ~ContainerLivro();

  Resultado cadastrar(Livro);
  Resultado buscar(Titulo, Livro**);
  Resultado trocar(Titulo);
  Resultado remover(Titulo);
};

#endif