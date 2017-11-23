#include <iostream>
#include <cstdio>
#include "dominios.h"
#include "entidades.h"
#include "TUdominios.h"
#include "TUentidades.h"
#include "interfaces.h"
#include "controladoras.h"
#include "comandos.h"
#include "stubs.h"
#include "containers.h"

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
