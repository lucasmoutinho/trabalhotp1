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

	void setNome(string) throw(invalid_argument);

	string getNome() const{
		/// Método responsável por retornar o nome do usuário. Retorna uma string.
		return this->nome.getNome();
	}

	void setApelido(string) throw(invalid_argument);

	string getApelido() const{
		/// Método responsável por retornar o apelido do usuário. Retorna uma string.
		return this->apelido.getApelido();
	}

	void setTelefone(string) throw(invalid_argument);

	string getTelefone() const{
		/// Método responsável por retornar o telefone do usuário. Retorna uma string.
		return this->telefone.getTelefone();
	}

	void setSenha(string) throw(invalid_argument);

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

	void setTitulo(string) throw(invalid_argument);

	string getTitulo() const{
		/// Método responsável por retornar o título do livro. Retorna uma string.
		return this->titulo.getTitulo();
	}

	void setAutor(string) throw(invalid_argument);

	string getAutor() const{
		/// Método responsável por retornar o autor do livro. Retorna uma string.
		return this->autor.getNome();
	}

	void setData(string) throw(invalid_argument);

	string getData() const{
		/// Método responsável por retornar a data de publicação do livro. Retorna uma string.
		return this->data.getData();
	}

	void setCodigo(string) throw(invalid_argument);

	string getCodigo() const{
		/// Método responsável por retornar o código do livro. Retorna uma string.
		return this->codigo.getCodigo();
	}

	void setGenero(string) throw(invalid_argument);

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

	void setTitulo(string) throw(invalid_argument);

	string getTitulo() const{
		/// Método responsável por retornar o título do livro da resenha. Retorna uma string.
		return this->titulo.getTitulo();
	}

	void setAutor(string) throw(invalid_argument);

	string getAutor() const{
		/// Método responsável por retornar o autor da resenha. Retorna uma string.
		return this->autor.getNome();
	}

	void setTexto(string);

	string getTexto() const{
		/// Método responsável por retornar o conteúdo textual da resenha. Retorna uma string.
		return this->texto.getTexto();
	}
};

#endif
