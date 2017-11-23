#ifndef __TU_ENTIDADES_H_INCLUDED__
#define __TU_ENTIDADES_H_INCLUDED__

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
#include <string>
#include <stdexcept>

using namespace std;

///Uma Classe de testes de unidade para a entidade Usuario.
class TUUsuario{
private:

	const static string NOME_VALIDO;
	const static string NOME_INVALIDO;
	const static string APELIDO_VALIDO;
	const static string APELIDO_INVALIDO;
	const static string TELEFONE_VALIDO;
	const static string TELEFONE_INVALIDO;
	const static string SENHA_VALIDO;
	const static string SENHA_INVALIDO;

	Usuario* usuario;
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

///Uma Classe de testes de unidade para a entidade Livro.
class TULivro{
private:

	const static string TITULO_VALIDO;
	const static string TITULO_INVALIDO;
	const static string AUTOR_VALIDO;
	const static string AUTOR_INVALIDO;
	const static string DATA_VALIDO;
	const static string DATA_INVALIDO;
	const static string CODIGO_VALIDO;
	const static string CODIGO_INVALIDO;
	const static string GENERO_VALIDO;
	const static string GENERO_INVALIDO;

	Livro* livro;
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

///Uma Classe de testes de unidade para a entidade Resenha.
class TUResenha{
private:

	const static string AUTOR_VALIDO;
	const static string AUTOR_INVALIDO;
	const static string TITULO_VALIDO;
	const static string TITULO_INVALIDO;
	const static string TEXTO_VALIDO;
	const static string TEXTO_INVALIDO;

	Resenha* resenha;
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
