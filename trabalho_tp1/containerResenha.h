#ifndef __CONTAINERSRESENHA_H_INCLUDED__
#define __CONTAINERSRESENHA_H_INCLUDED__

#include <iostream>
#include <list>
#include <string>
#include "entidadeResenha.h"
#include "entidadeResultado.h"
#include "dominios.h"

using namespace std;

///Classe que implementa o container para uma lista de resenhas e metodos que envolvem o acesso a tal
class ContainerResenha
{
private:
  list<Resenha> container;

public:
  ContainerResenha();
  virtual ~ContainerResenha();

  Resultado cadastrar(Resenha);
  Resultado buscar();
};

#endif