#ifndef __ENTIDADESRESENHA_H_INCLUDED__
#define __ENTIDADESRESENHA_H_INCLUDED__

#include "dominios.h"
#include <iostream>
#include <list>
#include <string>
#include <stdexcept>
using namespace std;

///Classe que representa a entidade Resenha, esta que contém os atributos: autor, título e texto.
class Resenha
{
private:
  Nome autor;
  Titulo titulo;
  Texto texto;

public:
  Resenha();
  virtual ~Resenha();

  void setTitulo(string titulo) throw(invalid_argument)
  {
    ///Método responsável por armazenar o título do livro da resenha.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->titulo.setTitulo(titulo);
  }

  string getTitulo() const
  {
    /// Método responsável por retornar o título do livro da resenha. Retorna uma string.
    return this->titulo.getTitulo();
  }

  void setAutor(string autor) throw(invalid_argument)
  {
    ///Método responsável por armazenar o autor da resenha.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->autor.setNome(autor);
  }

  string getAutor() const
  {
    /// Método responsável por retornar o autor da resenha. Retorna uma string.
    return this->autor.getNome();
  }

  void setTexto(string texto)
  {
    ///Método responsável por armazenar o conteúdo textual da resenha.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->texto.setTexto(texto);
  }

  string getTexto() const
  {
    /// Método responsável por retornar o conteúdo textual da resenha. Retorna uma string.
    return this->texto.getTexto();
  }
};

#endif