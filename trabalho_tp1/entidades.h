#ifndef __ENTIDADES_H_INCLUDED__
#define __ENTIDADES_H_INCLUDED__

#include "dominios.h"
#include <string>
#include <stdexcept>
using namespace std;

class Usuario{
private:

	Nome nome;
	Apelido apelido;
	Telefone telefone;
	Senha senha;
	
public:
	
	void setNome(string) throw(invalid_argument);

	string getNome() const{
		return this->nome.getNome();
	}

	void setApelido(string) throw(invalid_argument);

	string getApelido() const{
		return this->apelido.getApelido();
	}

	void setTelefone(string, string) throw(invalid_argument);

	void showTelefone() const;

	string getTelefone() const{
		return this->telefone.getTelefone();
	}

	void setSenha(string) throw(invalid_argument);

	string getSenha() const{
		return this->senha.getSenha();
	}
			
};

class Resenha{
private:

public:

};

#endif