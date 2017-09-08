#ifndef __DOMINIOS_H_INCLUDED__
#define __DOMINIOS_H_INCLUDED__

#include <iostream>
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
	string getNome() const{
		return nome;
	}
};

class Apelido{
private:
	const static int LIMITE_APELIDO = 5;
	string apelido;

	void validaApelido(string) throw(invalid_argument);

public:

	void setApelido(string) throw(invalid_argument);
	string getApelido() const{
		return apelido;
	}
};

class Telefone{
private:
	const static int LIMITE_NUMERO = 9;
	const static int LIMITE_DDD = 2;
	string telefone;

	void validaTelefone(string, string) throw(invalid_argument);
	bool string_contem_apenas_numeros(string);

public:

	void setTelefone(string, string) throw(invalid_argument);
	void showTelefone() const;
	string getTelefone() const{
		return telefone;
	}
};

class Senha{
private:
	const static int LIMITE_SENHA = 4;
	string senha;

	void validaSenha(string) throw(invalid_argument);
	bool string_repete_letra(string);

public:

	void setSenha(string) throw(invalid_argument);
	string getSenha() const{
		return senha;
	}
};

#endif