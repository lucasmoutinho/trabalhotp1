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

<<<<<<< HEAD
class TUApelido{
private:

	const static string VALOR_VALIDO;
	const static string VALOR_INVALIDO;

	Apelido* apelido;
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

class TUTelefone{
private:

	const static string VALOR_VALIDO;
	const static string VALOR_INVALIDO;

	Telefone* telefone;
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

class TUSenha{
private:

	const static string VALOR_VALIDO;
	const static string VALOR_INVALIDO;

	Senha* senha;
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

class TUTitulo{
private:

	const static string VALOR_VALIDO;
	const static string VALOR_INVALIDO;

	Titulo* titulo;
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

class TUData{
private:

	const static string VALOR_VALIDO;
	const static string VALOR_INVALIDO;

	Data* data;
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

class TUCodigo{
private:

	const static string VALOR_VALIDO;
	const static string VALOR_INVALIDO;

	Codigo* codigo;
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

class TUTexto{
private:

	const static string VALOR_VALIDO;
	const static string VALOR_INVALIDO;

	Texto* texto;
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

class TUGenero{
private:

	const static int INDEX_VALIDO = 0;
	const static int INDEX_INVALIDO = 5;
	const static string VALOR_VALIDO;

	Genero* genero;
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
=======
#endif
>>>>>>> a4430176dd9ede971be3dfbe1b1ae889cdfd5bd1
