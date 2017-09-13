#ifndef __DOMINIOS_H_INCLUDED__
#define __DOMINIOS_H_INCLUDED__

#include <iostream>
#include <string>
#include <stdexcept>
#include <cctype>
using namespace std;

class Nome{
private:
	const static int LIMITE_NOME = 15;
	string nome;
	void validaNome(string) throw(invalid_argument);

public:

	void setNome(string) throw(invalid_argument);
	string getNome() const{
		/// Método responsável por retornar o nome que fora armazenado. Retorna uma string.
		return nome;
	}
};

class Apelido{
private:
	const static int LIMITE_APELIDO = 5;
	string apelido;

	void validaApelido(string) throw(invalid_argument);

public:

	void setApelido(string) throw(invalid_argument);
	string getApelido() const{
		/// Método responsável por retornar o apelido que fora armazenado. Retorna uma string.
		return apelido;
	}
};

class Telefone{
private:
	const static int INICIO_DDD = 1;
	const static int FIM_DDD = 2;
	const static int INICIO_NUMERO = 5;
	const static int FIM_NUMERO = 13;
	const static int LIMITE_TELEFONE = 14;
	string telefone;

	void validaTelefone(string) throw(invalid_argument);

public:

	void setTelefone(string) throw(invalid_argument);
	string getTelefone() const{
		/// Método responsável por retornar o telefone que fora armazenado. Retorna uma string.
		return telefone;
	}
};

class Senha{
private:
	const static int LIMITE_SENHA = 4;
	string senha;

	void validaSenha(string) throw(invalid_argument);
	bool string_repete_letra(string);

public:

	void setSenha(string) throw(invalid_argument);
	string getSenha() const{
		/// Método responsável por retornar a senha que fora armazenada. Retorna uma string.
		return senha;
	}
};

class Titulo{
private:
	const static int LIMITE_TITULO = 20;
	string titulo;

	void validaTitulo(string) throw(invalid_argument);

public:

	void setTitulo(string) throw(invalid_argument);
	string getTitulo() const{
		/// Método responsável por retornar o título que fora armazenado. Retorna uma string.
		return titulo;
	}
};

class Data{
private:
	const static int LIMITE_DATA = 8;
	string data;

	void validaData(string) throw(invalid_argument);
	bool data_formato_correto(string);

public:

	void setData(string) throw(invalid_argument);
	string getData() const{
		/// Método responsável por retornar a data que fora armazenada. Retorna uma string.
		return data;
	}
};

class Codigo{
private:
	const static int LIMITE_CODIGO = 5;
	string codigo;

	void validaCodigo(string) throw(invalid_argument);

public:

	void setCodigo(string) throw(invalid_argument);
	string getCodigo() const{
		/// Método responsável por retornar o código que fora armazenado. Retorna uma string.
		return codigo;
	}
};

class Texto{
private:
	const static int LIMITE_TEXTO = 40;
	string texto;

	void validaTexto(string) throw(invalid_argument);

public:

	void setTexto(string) throw(invalid_argument);
	string getTexto() const{
		/// Método responsável por retornar o texto que fora armazenado. Retorna uma string.
		return texto;
	}
};

class Genero{
private:
	const static string* genderList;
	const static int TAMANHO_LISTA_GENEROS = 5;
	string genero;

	void validaGenero(string) throw(invalid_argument);
	bool genero_valido(string);
	
public:

	void setGenero(string) throw(invalid_argument);
	string getGenero() const{
		/// Método responsável por retornar o gênero literário que fora armazenado. Retorna uma string.
		return genero;
	}
	void showGeneros() const;
};

#endif