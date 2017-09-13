#ifndef __TU_DOMINIOS_H_INCLUDED__
#define __TU_DOMINIOS_H_INCLUDED__

#include "dominios.h"
#include "entidades.h"
#include <string>
#include <stdexcept>

using namespace std;

///Uma Classe de testes de unidade para o domínio Nome.
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
	///Constante adotada para indicar o sucesso na execução do teste de unidade.
	const static int SUCESSO =  0;
	///Constante adotada para indicar a falha na execução do teste de unidade.
    const static int FALHA   = -1;
    ///Método responsável por executar os testes para cenários de Sucesso e Falha.
    int run();
};

///Uma Classe de testes de unidade para o domínio Apelido.
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
	///Constante adotada para indicar o sucesso na execução do teste de unidade.
	const static int SUCESSO =  0;
	///Constante adotada para indicar a falha na execução do teste de unidade.
    const static int FALHA   = -1;
    ///Método responsável por executar os testes para cenários de Sucesso e Falha.
    int run();
};

///Uma Classe de testes de unidade para o domínio Telefone.
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
	///Constante adotada para indicar o sucesso na execução do teste de unidade.
	const static int SUCESSO =  0;
	///Constante adotada para indicar a falha na execução do teste de unidade.
    const static int FALHA   = -1;
    ///Método responsável por executar os testes para cenários de Sucesso e Falha.
    int run();
};

///Uma Classe de testes de unidade para o domínio Senha.
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
	///Constante adotada para indicar o sucesso na execução do teste de unidade.
	const static int SUCESSO =  0;
	///Constante adotada para indicar a falha na execução do teste de unidade.
    const static int FALHA   = -1;
    ///Método responsável por executar os testes para cenários de Sucesso e Falha.
    int run();
};

///Uma Classe de testes de unidade para o domínio Titulo.
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
	///Constante adotada para indicar o sucesso na execução do teste de unidade.
	const static int SUCESSO =  0;
	///Constante adotada para indicar a falha na execução do teste de unidade.
    const static int FALHA   = -1;
    ///Método responsável por executar os testes para cenários de Sucesso e Falha.
    int run();
};

///Uma Classe de testes de unidade para o domínio Data.
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
	///Constante adotada para indicar o sucesso na execução do teste de unidade.
	const static int SUCESSO =  0;
	///Constante adotada para indicar a falha na execução do teste de unidade.
    const static int FALHA   = -1;
    ///Método responsável por executar os testes para cenários de Sucesso e Falha.
    int run();
};

///Uma Classe de testes de unidade para o domínio Codigo.
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
	///Constante adotada para indicar o sucesso na execução do teste de unidade.
	const static int SUCESSO =  0;
	///Constante adotada para indicar a falha na execução do teste de unidade.
    const static int FALHA   = -1;
    ///Método responsável por executar os testes para cenários de Sucesso e Falha.
    int run();
};

///Uma Classe de testes de unidade para o domínio Texto.
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
	///Constante adotada para indicar o sucesso na execução do teste de unidade.
	const static int SUCESSO =  0;
	///Constante adotada para indicar a falha na execução do teste de unidade.
    const static int FALHA   = -1;
    ///Método responsável por executar os testes para cenários de Sucesso e Falha.
    int run();
};

///Uma Classe de testes de unidade para o domínio Genero.
class TUGenero{
private:

	const static string VALOR_VALIDO;
	const static string VALOR_INVALIDO;

	Genero* genero;
	int estado;

	void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
	///Constante adotada para indicar o sucesso na execução do teste de unidade.
	const static int SUCESSO =  0;
	///Constante adotada para indicar a falha na execução do teste de unidade.
    const static int FALHA   = -1;
    ///Método responsável por executar os testes para cenários de Sucesso e Falha.
    int run();
};

#endif