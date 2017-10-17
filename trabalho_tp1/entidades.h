#ifndef __ENTIDADES_H_INCLUDED__
#define __ENTIDADES_H_INCLUDED__

#include "dominios.h"
#include <string>
#include <stdexcept>
using namespace std;

///Classe que representa a entidade Usuario, esta que contém os atributos: nome, apelido, telefone e senha.
class Usuario{
private:

	Nome nome;
	Apelido apelido;
	Telefone telefone;
	Senha senha;

public:

	void setNome(string nome) throw(invalid_argument){
		///Método responsável por armazenar o nome de determinado usuário.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->nome.setNome(nome);
	}

	string getNome() const{
		/// Método responsável por retornar o nome do usuário. Retorna uma string.
		return this->nome.getNome();
	}

	void setApelido(string apelido) throw(invalid_argument){
		///Método responsável por armazenar o apelido de determinado usuário.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->apelido.setApelido(apelido);
	}

	string getApelido() const{
		/// Método responsável por retornar o apelido do usuário. Retorna uma string.
		return this->apelido.getApelido();
	}

	void setTelefone(string telefone) throw(invalid_argument){
		///Método responsável por armazenar o telefone de determinado usuário.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->telefone.setTelefone(telefone);
	}

	string getTelefone() const{
		/// Método responsável por retornar o telefone do usuário. Retorna uma string.
		return this->telefone.getTelefone();
	}

	void setSenha(string senha) throw(invalid_argument){
		///Método responsável por armazenar a senha de determinado usuário.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->senha.setSenha(senha);
	}

	string getSenha() const{
		/// Método responsável por retornar a senha do usuário que fora armazenada. Retorna uma string.
		return this->senha.getSenha();
	}

};

///Classe que representa a entidade Livro, esta que contém os atributos: título, autor, data, código e gênero.
class Livro{
private:

	Titulo titulo;
	Nome autor;
	Data data;
	Codigo codigo;
	Genero genero;

public:

	void setTitulo(string titulo) throw(invalid_argument){
		///Método responsável por armazenar o título de determinado livro.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->titulo.setTitulo(titulo);
	}

	string getTitulo() const{
		/// Método responsável por retornar o título do livro. Retorna uma string.
		return this->titulo.getTitulo();
	}

	void setAutor(string autor) throw(invalid_argument){
		///Método responsável por armazenar o autor de determinado livro.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->autor.setNome(autor);
	}

	string getAutor() const{
		/// Método responsável por retornar o autor do livro. Retorna uma string.
		return this->autor.getNome();
	}

	void setData(string data) throw(invalid_argument){
		///Método responsável por armazenar a data de publicação de determinado livro.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->data.setData(data);
	}

	string getData() const{
		/// Método responsável por retornar a data de publicação do livro. Retorna uma string.
		return this->data.getData();
	}

	void setCodigo(string codigo) throw(invalid_argument){
		///Método responsável por armazenar o código de determinado livro.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->codigo.setCodigo(codigo);
	}

	string getCodigo() const{
		/// Método responsável por retornar o código do livro. Retorna uma string.
		return this->codigo.getCodigo();
	}

	void setGenero(string genero) throw(invalid_argument){
		///Método responsável por armazenar o gênero literário de determinado livro.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->genero.setGenero(genero);
	}

	string getGenero() const{
		/// Método responsável por retornar o gênero literário do livro. Retorna uma string.
		return this->genero.getGenero();
	}

};

///Classe que representa a entidade Resenha, esta que contém os atributos: autor, título e texto.
class Resenha{
private:

	Nome autor;
	Titulo titulo;
	Texto texto;

public:

	void setTitulo(string titulo) throw(invalid_argument){
		///Método responsável por armazenar o título do livro da resenha.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->titulo.setTitulo(titulo);
	}

	string getTitulo() const{
		/// Método responsável por retornar o título do livro da resenha. Retorna uma string.
		return this->titulo.getTitulo();
	}

	void setAutor(string autor) throw(invalid_argument){
		///Método responsável por armazenar o autor da resenha.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->autor.setNome(autor);
	}

	string getAutor() const{
		/// Método responsável por retornar o autor da resenha. Retorna uma string.
		return this->autor.getNome();
	}

	void setTexto(string texto){
		///Método responsável por armazenar o conteúdo textual da resenha.
		///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
		this->texto.setTexto(texto);
	}

	string getTexto() const{
		/// Método responsável por retornar o conteúdo textual da resenha. Retorna uma string.
		return this->texto.getTexto();
	}
};

///Classe que representa a entidade Resultados, esta que contém valores a serem validados pelas STUBS/CONTROLADORAS respectivas.
class Resultado{
protected:

	int valor;

public:

	const static int FALHA_CADASTRO = 0;
	const static int SUCESSO_CADASTRO = 1;
	const static int FALHA_CADASTRO_LIVRO = 2;
	const static int SUCESSO_CADASTRO_LIVRO = 3;
	const static int FALHA_AUTENTICACAO = 4;
	const static int SUCESSO_AUTENTICACAO = 5;
	const static int FALHA_REGISTRO_RESENHA = 6;
	const static int SUCESSO_REGISTRO_RESENHA = 7;
	const static int FALHA_BUSCA_USUARIO = 8;
	const static int SUCESSO_BUSCA_USUARIO = 9;
	const static int USUARIO_NAO_ENCONTRADO = 10;
	const static int FALHA_BUSCA_LIVRO = 11;
	const static int SUCESSO_BUSCA_LIVRO = 12;
	const static int LIVRO_NAO_ENCONTRADO = 13;
	const static int FALHA_TROCA_LIVRO = 14;
	const static int SUCESSO_TROCA_LIVRO = 15;
	const static int TROCA_NAO_ENCONTRADO = 16;

	void setValor(int valor){
		///Método responsável por armazenar o valor de validação.
		///É necessário um valor inteiro como entrada.
		this->valor = valor;
	}

	int getValor() const{
		/// Método responsável por retornar o valor de validação. Retorna um inteiro.
		return valor;
	}
};


#endif
