#include <iostream>
#include <cstdio>
#include "dominios.h"
#include "entidadeUsuario.h"
#include "entidadeLivro.h"
#include "entidadeResenha.h"
#include "entidadeResultado.h"
#include "TUdominios.h"
#include "TUentidades.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"
#include "containerUsuario.h"
#include "containerLivro.h"
#include "containerResenha.h"

using namespace std;

int main(){

    ///Interface de Usuario

    IUInterfaceUsuario *cntrInILNInterfaceUsuario;
    cntrInILNInterfaceUsuario = new CTRLInterfaceUsuario();

    cntrInILNInterfaceUsuario->interfaceUsuario();

    ///Deletando objetos criados anteriormente

    delete cntrInILNInterfaceUsuario;
    
    return 0;
}
