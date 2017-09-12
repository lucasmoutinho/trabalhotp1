#include "entidades.h"

void Usuario::setNome(string nome) throw(invalid_argument){
	this->nome.setNome(nome);
}

void Usuario::setApelido(string apelido) throw(invalid_argument){
	this->apelido.setApelido(apelido);
}

void Usuario::setTelefone(string telefone) throw(invalid_argument){
	this->telefone.setTelefone(telefone);
}

void Usuario::setSenha(string senha) throw(invalid_argument){
	this->senha.setSenha(senha);
}

void Livro::setTitulo(string titulo) throw(invalid_argument){
	this->titulo.setTitulo(titulo);
}

void Livro::setAutor(string autor) throw(invalid_argument){
	this->autor.setNome(autor);
}

void Livro::setData(string data) throw(invalid_argument){
	this->data.setData(data);
}

void Livro::setCodigo(string codigo) throw(invalid_argument){
	this->codigo.setCodigo(codigo);
}

void Livro::setGenero(string genero) throw(invalid_argument){
	this->genero.setGenero(genero);
}

void Resenha::setTitulo(string titulo) throw(invalid_argument){
	this->titulo.setTitulo(titulo);
}

void Resenha::setAutor(string autor) throw(invalid_argument){
	this->autor.setNome(autor);
}

void Resenha::setResenha(string resenha){
	this->resenha.setTexto(resenha);
}
