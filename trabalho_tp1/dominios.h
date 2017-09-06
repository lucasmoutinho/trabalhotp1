#ifndef __DOMINIOS_H_INCLUDED__
#define __DOMINIOS_H_INCLUDED__

#include <string>
#include <stdexcept>
using namespace std;

class Nome{
private:
	const static int LIMITE_NOME = 15;
	string nome;

	void validaNome(string) throw(invalid_argument);

public:

	void setNome(string) throw(invalid_argument);
	void getNome(string);
};

class Apelido{
private:
	const static int LIMITE_APELIDO = 5;
	string apelido;

	void validaApelido(string) throw(invalid_argument);

public:

	void setApelido(string) throw(invalid_argument);
	void getApelido(string);
};

class Telefone{
private:
	const static int LIMITE_DDD = 2;
	const static int LIMITE_NUMERO = 9;
	string telefone;

	void validaDDD(string) throw(invalid_argument);
	void validaNumero(string) throw(invalid_argument);

public:

	void setTelefone(string) throw(invalid_argument);
	void getTelefone(string);
};

class Senha{
private:
	const static int LIMITE_SENHA = 4;
	string senha;

	void validaSenha(string) throw(invalid_argument);

public:

	void setSenha(string) throw(invalid_argument);
	void getSenha(string);
};

#endif