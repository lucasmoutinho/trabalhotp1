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
	void getNome() const{
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
	void getApelido() const{
		return apelido;
	}
};

class Telefone{
private:
	const static int LIMITE_TELEFONE = 9;
	int telefone[9];

	void validaTelefone(int) throw(invalid_argument);

public:

	void setTelefone(int) throw(invalid_argument);
	void getTelefone() const{
		return telefone;
	}
};

class Senha{
private:
	const static int LIMITE_SENHA = 4;
	string senha;

	void validaSenha(string) throw(invalid_argument);

public:

	void setSenha(string) throw(invalid_argument);
	void getSenha() const{
		return senha;
	}
};

#endif