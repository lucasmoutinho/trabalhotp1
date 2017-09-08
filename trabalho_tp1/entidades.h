#ifndef __ENTIDADES_H_INCLUDED__
#define __ENTIDADES_H_INCLUDED__

#include "dominios.h"
using namespace std;

class usuario{
private:

	Nome nome;
	Apelido apelido;
	Telefone telefone;
	Senha senha;
	
public:
	
	void setNome(const Nome& nome){
		this->nome = nome;
	}

	Nome getNome() const{
		return nome;
	}

	void setApelido(const Apelido& apelido){
		this->apelido = apelido;
	}

	Apelido getApelido() const{
		return apelido;
	}

	void setTelefone(const Telefone& telefone){
		this->telefone = telefone;
	}

	Telefone getTelefone() const{
		return telefone;
	}

	void setSenha(const Senha& senha){
		this->senha = senha;
	}

	Senha getSenha() const{
		return senha;
	}
			
};

#endif