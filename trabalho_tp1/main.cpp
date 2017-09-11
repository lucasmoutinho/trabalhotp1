#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main(){

    TUNome teste;

    switch(teste.run()){
        case TUNome::SUCESSO: 
        	cout << "SUCESSO" << endl;
            break;
        case TUNome::FALHA: 
        	cout << "FALHA" << endl;
            break;
    }

    return 0;
}