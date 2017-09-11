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

	void setTelefone(string) throw(invalid_argument);

	string getTelefone() const{
		return this->telefone.getTelefone();
	}

	void setSenha(string) throw(invalid_argument);

	string getSenha() const{
		return this->senha.getSenha();
	}
			
};

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
		return this->titulo.getTitulo();
	}

	void setAutor(string) throw(invalid_argument);

	string getAutor() const{
		return this->autor.getNome();
	}

	void setData(string) throw(invalid_argument);

	string getData() const{
		return this->data.getData();
	}

	void setCodigo(string) throw(invalid_argument);

	string getCodigo() const{
		return this->codigo.getCodigo();
	}

	void setGenero(int) throw(invalid_argument);

	string getGenero() const{
		return this->genero.getGenero();
	}

};

class Resenha{
private:

	Nome autor;
	Titulo livro;
	Texto resenha;

public:

	void setLivro(string) throw(invalid_argument);

	string getLivro() const{
		return this->livro.getTitulo();
	}

	void setAutor(string) throw(invalid_argument);

	string getAutor() const{
		return this->autor.getNome();
	}

	void setResenha(string);

	string getResenha() const{
		return this->resenha.getTexto();
	}	
};

#endif