#include "entidades.h"

void setNome(string nome) throw(invalid_argument){
	this->nome.setNome(nome);
}

void Usuario::setApelido(string apelido) throw(invalid_argument){
	this->apelido.setApelido(apelido);
}

void Usuario::setTelefone(string telefone) throw(invalid_argument){
	this->telefone.setTelefone(telefone);
}

void Usuario::showTelefone(){
	this->telefone.showTelefone();
}

void Usuario::setSenha(string senha) throw(invalid_argument){
	this->senha.setSenha(senha);
}