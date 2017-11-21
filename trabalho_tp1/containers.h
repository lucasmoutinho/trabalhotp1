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
};

#endif