#include "containerResenha.h"

Resultado ContainerResenha::cadastrar(Resenha resenha)
{
///Metodo da classe container de resenhas que permite o cadastro de resenhas

  Resultado resultado;
  string chave1 = resenha.getTexto();
  string chave2 = resenha.getAutor();
  string chave3 = resenha.getTitulo();

  for (list<Resenha>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {

    if (elemento->getTexto() == chave1 && elemento->getAutor() == chave2 && elemento->getTitulo() == chave3)
    {

      resultado.setValor(Resultado::FALHA_REGISTRO_RESENHA);
      return resultado;
    }
  }

  container.push_back(resenha);

  cout << endl
       << endl
       << "**************************************************" << endl;
  cout << "Resenha registrada" << endl;
  cout << "Autor :  " << resenha.getAutor() << endl;
  cout << "Titulo :  " << resenha.getTitulo() << endl;
  cout << "Texto :  " << resenha.getTexto() << endl;
  cout << "**************************************************" << endl
       << endl;

  resultado.setValor(Resultado::SUCESSO_REGISTRO_RESENHA);
  return resultado;
}

Resultado ContainerResenha::buscar()
{
///Metodo da classe container de resenhas que permite a busca de resenhas

  Resultado resultado;

  for (list<Resenha>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {
    cout << "Autor: "<< elemento->getAutor() <<"-- Texto: "<< elemento->getTexto() << endl;
  }

  return resultado;
}

ContainerResenha::ContainerResenha()
{
}

ContainerResenha::~ContainerResenha()
{
}