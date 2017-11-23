#include "containerLivro.h"

Resultado ContainerLivro::cadastrar(Livro livro)
{

  Resultado resultado;
  string chave = livro.getTitulo();

  for (list<Livro>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {

    if (elemento->getTitulo() == chave)
    {

      resultado.setValor(Resultado::FALHA_CADASTRO_LIVRO);
      return resultado;
    }
  }

  container.push_back(livro);

  cout << endl
       << endl
       << "**************************************************" << endl;
  cout << "Livro Cadastrado" << endl;
  cout << "Titulo :  " << livro.getTitulo() << endl;
  cout << "Autor :  " << livro.getAutor() << endl;
  cout << "Data :  " << livro.getData() << endl;
  cout << "Codigo :  " << livro.getCodigo() << endl;
  cout << "Genero :  " << livro.getGenero() << endl;
  cout << "**************************************************" << endl
       << endl;

  resultado.setValor(Resultado::SUCESSO_CADASTRO_LIVRO);
  return resultado;
}

Resultado ContainerLivro::buscar(Titulo titulo)
{

  Resultado resultado;
  string chave = titulo.getTitulo();

  cout << endl
       << endl
       << "**************************************************" << endl;
  cout << "Pesquisando livro com titulo: " << chave << " ..." << endl;
  cout << "**************************************************" << endl
       << endl;

  for (list<Livro>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {

    if (elemento->getTitulo() == chave)
    {

      resultado.setValor(Resultado::SUCESSO_BUSCA_LIVRO);

      cout << endl
           << "**************************************************" << endl;
      cout << "Livro encontrado" << endl;
      cout << "Titulo :  " << elemento->getTitulo() << endl;
      cout << "Autor :  " << elemento->getAutor() << endl;
      cout << "Data de publicacao :  " << elemento->getData() << endl;
      cout << "Genero literario :  " << elemento->getGenero() << endl;
      cout << "Resenhas acerca do livro :  " << endl;
      cout << "**************************************************" << endl
           << endl;

      return resultado;
    }
  }

  resultado.setValor(Resultado::LIVRO_NAO_ENCONTRADO);
  return resultado;
}


Resultado ContainerLivro::trocar(Titulo titulo)
{

  Resultado resultado;
  string chave = titulo.getTitulo();

  cout << endl
       << endl
       << "**************************************************" << endl;
  cout << "Pesquisando livro com titulo: " << chave << " ..." << endl;
  cout << "**************************************************" << endl
       << endl;

  for (list<Livro>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {

    if (elemento->getTitulo() == chave)
    {

      resultado.setValor(Resultado::SUCESSO_TROCA_LIVRO);

      cout << endl
           << "**************************************************" << endl;
      cout << "Livro encontrado" << endl;
      cout << "Titulo :  " << elemento->getTitulo() << endl;
      cout << "Autor :  " << elemento->getAutor() << endl;
      cout << "Data de publicacao :  " << elemento->getData() << endl;
      cout << "Genero literario :  " << elemento->getGenero() << endl;
      cout << "Resenhas acerca do livro :  " << endl;
      cout << "**************************************************" << endl
           << endl;

      return resultado;
    }
  }

  resultado.setValor(Resultado::FALHA_TROCA_LIVRO);
  return resultado;
}

Resultado ContainerLivro::remover(Titulo titulo)
{

  Resultado resultado;
  string chave = titulo.getTitulo();

  cout << endl
       << endl
       << "**************************************************" << endl;
  cout << "Pesquisando livro com titulo: " << chave << " ..." << endl;
  cout << "**************************************************" << endl
       << endl;

  for (list<Livro>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {

    if (elemento->getTitulo() == chave)
    {

      resultado.setValor(Resultado::SUCESSO_REMOVE_LIVRO);
      container.erase(elemento);

      cout << endl
           << "**************************************************" << endl;
      cout << "Livro encontrado e removido com sucesso..." << endl;
      cout << "**************************************************" << endl
           << endl;

      return resultado;
    }
  }

  resultado.setValor(Resultado::FALHA_REMOVE_LIVRO);
  return resultado;
}

ContainerLivro::ContainerLivro()
{
}

ContainerLivro::~ContainerLivro()
{
}