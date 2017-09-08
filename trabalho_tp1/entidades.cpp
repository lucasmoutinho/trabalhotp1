#include "entidades.h"

void Usuario::setNome(string nome) throw(invalid_argument){
	this->nome.setNome(nome);
}

void Usuario::setApelido(string apelido) throw(invalid_argument){
	this->apelido.setApelido(apelido);
}

void Usuario::setTelefone(string ddd, string numero) throw(invalid_argument){
	this->telefone.setTelefone(ddd,numero);
}

void Usuario::showTelefone() const{
	this->telefone.showTelefone();
}

void Usuario::setSenha(string senha) throw(invalid_argument){
	this->senha.setSenha(senha);
}