#ifndef __DOMINIOS_H_INCLUDED__
#define __DOMINIOS_H_INCLUDED__

#include <iostream>
#include <string>
#include <stdexcept>
#include <cctype>
using namespace std;

///Classe que representa o domínio Nome.
class Nome{
private:
	const static int LIMITE_NOME = 15;
	string nome;
	void validaNome(string) throw(invalid_argument);

public:

	const static string NOME_INVALIDO;
	void setNome(string) throw(invalid_argument);
	string getNome() const{
		/// Método responsável por retornar o nome que fora armazenado. Retorna uma string.
		return nome;
	}
};

///Classe que representa o domínio Apelido.
class Apelido{
private:
	const static int LIMITE_APELIDO = 5;
	string apelido;

	void validaApelido(string) throw(invalid_argument);

public:

	const static string APELIDO_INVALIDO;
	void setApelido(string) throw(invalid_argument);
	string getApelido() const{
		/// Método responsável por retornar o apelido que fora armazenado. Retorna uma string.
		return apelido;
	}
};

///Classe que representa o domínio Telefone.
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

	const static string TELEFONE_INVALIDO;
	void setTelefone(string) throw(invalid_argument);
	string getTelefone() const{
		/// Método responsável por retornar o telefone que fora armazenado. Retorna uma string.
		return telefone;
	}
};

///Classe que representa o domínio Senha.
class Senha{
private:
	const static int LIMITE_SENHA = 4;
	string senha;

	void validaSenha(string) throw(invalid_argument);
	bool string_repete_letra(string);

public:

	const static string SENHA_INVALIDO;
	void setSenha(string) throw(invalid_argument);
	string getSenha() const{
		/// Método responsável por retornar a senha que fora armazenada. Retorna uma string.
		return senha;
	}
};

///Classe que representa o domínio Titulo.
class Titulo{
private:
	const static int LIMITE_TITULO = 20;
	string titulo;

	void validaTitulo(string) throw(invalid_argument);

public:

	const static string TITULO_INVALIDO;
	void setTitulo(string) throw(invalid_argument);
	string getTitulo() const{
		/// Método responsável por retornar o título que fora armazenado. Retorna uma string.
		return titulo;
	}
};

///Classe que representa o domínio Data.
class Data{
private:
	const static int LIMITE_DATA = 8;
	string data;

	void validaData(string) throw(invalid_argument);
	bool data_formato_correto(string);

public:

	const static string DATA_INVALIDO;
	void setData(string) throw(invalid_argument);
	string getData() const{
		/// Método responsável por retornar a data que fora armazenada. Retorna uma string.
		return data;
	}
};

///Classe que representa o domínio Codigo.
class Codigo{
private:
	const static int LIMITE_CODIGO = 5;
	string codigo;

	void validaCodigo(string) throw(invalid_argument);

public:

	const static string CODIGO_INVALIDO;
	void setCodigo(string) throw(invalid_argument);
	string getCodigo() const{
		/// Método responsável por retornar o código que fora armazenado. Retorna uma string.
		return codigo;
	}
};

///Classe que representa o domínio Texto.
class Texto{
private:
	const static int LIMITE_TEXTO = 40;
	string texto;

	void validaTexto(string) throw(invalid_argument);

public:

	const static string TEXTO_INVALIDO;
	void setTexto(string) throw(invalid_argument);
	string getTexto() const{
		/// Método responsável por retornar o texto que fora armazenado. Retorna uma string.
		return texto;
	}
};

///Classe que representa o domínio Genero.
class Genero{
private:
	const static string* genderList;
	const static int TAMANHO_LISTA_GENEROS = 5;
	string genero;

	void validaGenero(string) throw(invalid_argument);
	bool genero_valido(string);
	
public:

	const static string GENERO_INVALIDO;
	void setGenero(string) throw(invalid_argument);
	string getGenero() const{
		/// Método responsável por retornar o gênero literário que fora armazenado. Retorna uma string.
		return genero;
	}
	void showGeneros() const;
};

#endif