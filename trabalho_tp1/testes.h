#ifndef __TESTES_H_INCLUDED__
#define __TESTES_H_INCLUDED__

#include "dominios.h"
#include "entidades.h"
#include <string>
#include <stdexcept>

using namespace std;

class TUNome{
private:

	const static string VALOR_VALIDO;
	const static string VALOR_INVALIDO;

	Nome* nome;
	int estado;

	void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

#endif