#ifndef __ENTIDADESRESULTADO_H_INCLUDED__
#define __ENTIDADESRESULTADO_H_INCLUDED__

#include "dominios.h"
#include <iostream>
#include <list>
#include <string>
#include <stdexcept>
using namespace std;

///Classe que representa a entidade Resultados, esta que contém valores a serem validados pelas STUBS/CONTROLADORAS respectivas.
class Resultado
{
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

  Resultado();
  virtual ~Resultado();

  void setValor(int valor)
  {
    ///Método responsável por armazenar o valor de validação.
    ///É necessário um valor inteiro como entrada.
    this->valor = valor;
  }

  int getValor() const
  {
    /// Método responsável por retornar o valor de validação. Retorna um inteiro.
    return valor;
  }
};

#endif