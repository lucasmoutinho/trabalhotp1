#ifndef __DOMINIOS_H_INCLUDED__
#define __DOMINIOS_H_INCLUDED__

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Nome{
private:
	const static int LIMITE_NOME = 15;
	string nome;

	void validaNome(string) throw(invalid_argument);

public:

	void setNome(string) throw(invalid_argument);
	string getNome() const{
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
		return apelido;
	}
};

class Telefone{
private:
	const static int LIMITE_DDD = 2;
	const static int LIMITE_NUMERO = 9;
	const static int LIMITE_TELEFONE = LIMITE_DDD + LIMITE_NUMERO + 3;
	string telefone;

	void validaTelefone(string) throw(invalid_argument);
	bool telefone_formato_correto(string);

public:

	void setTelefone(string) throw(invalid_argument);
	string getTelefone() const{
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
		return senha;
	}
};

class Titulo{
private:
	const static int LIMITE_TITULO = 20;
	string titulo;

	void validaTitulo(string) throw(invalid_argument);
	bool string_contem_espaco_em_branco_duplicado(string);

public:

	void setTitulo(string) throw(invalid_argument);
	string getTitulo() const{
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
		return texto;
	}
};

class Genero{
private:
	const static string* genderList;
	const static int TAMANHO_LISTA_GENEROS = 5;
	string genero;

	void validaGenero(int) throw(invalid_argument);

public:

	void setGenero(int) throw(invalid_argument);
	string getGenero() const{
		return genero;
	}
	void showGeneros() const;
};

#endif