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

void Resenha::setNomeDoLivro(string nome) throw(invalid_argument){
	this->nomeDoLivro.setNome(nome);	
}

void Resenha::setNomeDoAutor(string nome) throw(invalid_argument){
	this->nomeDoAutor.setNome(nome);	
}

void Resenha::setResenha(string resenha){
	this->resenha = resenha;
}