#ifndef __CONTAINERSRESENHA_H_INCLUDED__
#define __CONTAINERSRESENHA_H_INCLUDED__

#include <iostream>
#include <list>
#include <string>
#include "entidadeResenha.h"
#include "entidadeResultado.h"
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

#endif