#include "entidades.h"

void Usuario::setNome(string nome) throw(invalid_argument){
	///Método responsável por armazenar o nome de determinado usuário.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->nome.setNome(nome);
}

void Usuario::setApelido(string apelido) throw(invalid_argument){
	///Método responsável por armazenar o apelido de determinado usuário.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->apelido.setApelido(apelido);
}

void Usuario::setTelefone(string telefone) throw(invalid_argument){
	///Método responsável por armazenar o telefone de determinado usuário.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->telefone.setTelefone(telefone);
}

void Usuario::setSenha(string senha) throw(invalid_argument){
	///Método responsável por armazenar a senha de determinado usuário.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->senha.setSenha(senha);
}

void Livro::setTitulo(string titulo) throw(invalid_argument){
	///Método responsável por armazenar o título de determinado livro.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->titulo.setTitulo(titulo);
}

void Livro::setAutor(string autor) throw(invalid_argument){
	///Método responsável por armazenar o autor de determinado livro.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->autor.setNome(autor);
}

void Livro::setData(string data) throw(invalid_argument){
	///Método responsável por armazenar a data de publicação de determinado livro.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->data.setData(data);
}

void Livro::setCodigo(string codigo) throw(invalid_argument){
	///Método responsável por armazenar o código de determinado livro.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->codigo.setCodigo(codigo);
}

void Livro::setGenero(string genero) throw(invalid_argument){
	///Método responsável por armazenar o gênero literário de determinado livro.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->genero.setGenero(genero);
}

void Resenha::setTitulo(string titulo) throw(invalid_argument){
	///Método responsável por armazenar o título do livro da resenha.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->titulo.setTitulo(titulo);
}

void Resenha::setAutor(string autor) throw(invalid_argument){
	///Método responsável por armazenar o autor da resenha.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->autor.setNome(autor);
}

void Resenha::setTexto(string texto){
	///Método responsável por armazenar o conteúdo textual da resenha.
	///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
	this->texto.setTexto(texto);
}
