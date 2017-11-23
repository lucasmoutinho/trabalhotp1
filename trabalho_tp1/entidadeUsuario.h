#ifndef __ENTIDADESUSUARIO_H_INCLUDED__
#define __ENTIDADESUSUARIO_H_INCLUDED__

#include "dominios.h"
#include "containerLivro.h"
#include <iostream>
#include <list>
#include <string>
#include <stdexcept>
using namespace std;

///Classe que representa a entidade Usuario, esta que contém os atributos: nome, apelido, telefone e senha.
class Usuario
{
private:
  Nome nome;
  Apelido apelido;
  Telefone telefone;
  Senha senha;
  ContainerLivro *estante;

public:
  Usuario();
  virtual ~Usuario();

  void setContainer(ContainerLivro *estante)
  {
  	this->estante = estante;
  }

  ContainerLivro* getContainer()
  {
  	return this->estante;
  }

  void setNome(string nome) throw(invalid_argument)
  {
    ///Método responsável por armazenar o nome de determinado usuário.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->nome.setNome(nome);
  }

  string getNome() const
  {
    /// Método responsável por retornar o nome do usuário. Retorna uma string.
    return this->nome.getNome();
  }

  void setApelido(string apelido) throw(invalid_argument)
  {
    ///Método responsável por armazenar o apelido de determinado usuário.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->apelido.setApelido(apelido);
  }

  string getApelido() const
  {
    /// Método responsável por retornar o apelido do usuário. Retorna uma string.
    return this->apelido.getApelido();
  }

  void setTelefone(string telefone) throw(invalid_argument)
  {
    ///Método responsável por armazenar o telefone de determinado usuário.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->telefone.setTelefone(telefone);
  }

  string getTelefone() const
  {
    /// Método responsável por retornar o telefone do usuário. Retorna uma string.
    return this->telefone.getTelefone();
  }

  void setSenha(string senha) throw(invalid_argument)
  {
    ///Método responsável por armazenar a senha de determinado usuário.
    ///É necessário uma string como entrada e lança uma exceção caso esta não seja válida.
    this->senha.setSenha(senha);
  }

  string getSenha() const
  {
    /// Método responsável por retornar a senha do usuário que fora armazenada. Retorna uma string.
    return this->senha.getSenha();
  }
};

#endif