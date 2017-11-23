#ifndef __ENTIDADESLIVRO_H_INCLUDED__
#define __ENTIDADESLIVRO_H_INCLUDED__

#include "dominios.h"
#include "containerResenha.h"
#include <iostream>
#include <list>
#include <string>
#include <stdexcept>
using namespace std;

///Classe que representa a entidade Livro, esta que contém os atributos: título, autor, data, código e gênero.
class Livro
{
private:
  Titulo titulo;
  Nome autor;
  Data data;
  Codigo codigo;
  Genero genero;
  ContainerResenha *resenhas;

public:
  Livro();
  virtual ~Livro();

  void setContainer(ContainerResenha *resenhas){
  	this->resenhas = resenhas;
  }

  ContainerResenha* getContainer()
  {
  	return this->resenhas;
  }

  void setTitulo(string titulo) throw(invalid_argument)
  {
    ///Método responsável por armazenar o título de determinado livro.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->titulo.setTitulo(titulo);
  }

  string getTitulo() const
  {
    /// Método responsável por retornar o título do livro. Retorna uma string.
    return this->titulo.getTitulo();
  }

  void setAutor(string autor) throw(invalid_argument)
  {
    ///Método responsável por armazenar o autor de determinado livro.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->autor.setNome(autor);
  }

  string getAutor() const
  {
    /// Método responsável por retornar o autor do livro. Retorna uma string.
    return this->autor.getNome();
  }

  void setData(string data) throw(invalid_argument)
  {
    ///Método responsável por armazenar a data de publicação de determinado livro.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->data.setData(data);
  }

  string getData() const
  {
    /// Método responsável por retornar a data de publicação do livro. Retorna uma string.
    return this->data.getData();
  }

  void setCodigo(string codigo) throw(invalid_argument)
  {
    ///Método responsável por armazenar o código de determinado livro.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->codigo.setCodigo(codigo);
  }

  string getCodigo() const
  {
    /// Método responsável por retornar o código do livro. Retorna uma string.
    return this->codigo.getCodigo();
  }

  void setGenero(string genero) throw(invalid_argument)
  {
    ///Método responsável por armazenar o gênero literário de determinado livro.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->genero.setGenero(genero);
  }

  string getGenero() const
  {
    /// Método responsável por retornar o gênero literário do livro. Retorna uma string.
    return this->genero.getGenero();
  }
};

#endif