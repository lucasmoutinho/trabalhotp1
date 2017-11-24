#ifndef __CONTAINERSLIVRO_H_INCLUDED__
#define __CONTAINERSLIVRO_H_INCLUDED__

#include <iostream>
#include <list>
#include <string>
#include "entidadeLivro.h"
#include "entidadeResultado.h"
#include "dominios.h"

using namespace std;


///Classe que implementa o container para uma lista de livros e metodos que envolvem o acesso a tal
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