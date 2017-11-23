#include "containers.h"

Resultado ContainerUsuario::cadastrar(Usuario usuario){

  Resultado resultado;
  string chave = usuario.getApelido();

  for (list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){

    if (elemento->getApelido() == chave){

      resultado.setValor(Resultado::FALHA_CADASTRO);
      return resultado;
    }
  }

  container.push_back(usuario);

  cout << endl<< endl<< "**************************************************" << endl;
  cout << "Usuario Cadastrado" << endl;
  cout << "Nome :  " << usuario.getNome() << endl;
  cout << "Apelido :  " << usuario.getApelido() << endl;
  cout << "Senha :  " << usuario.getSenha() << endl;
  cout << "Telefone :  " << usuario.getTelefone() << endl;
  cout << "**************************************************" << endl<< endl;

  resultado.setValor(Resultado::SUCESSO_CADASTRO);
  return resultado;
}

Resultado ContainerLivro::cadastrar(Livro livro){

  Resultado resultado;
  string chave = livro.getTitulo();

  for (list<Livro>::iterator elemento = container.begin(); elemento != container.end(); elemento++){

    if (elemento->getTitulo() == chave)
    {

      resultado.setValor(Resultado::FALHA_CADASTRO_LIVRO);
      return resultado;
    }
  }

  container.push_back(livro);

  cout << endl<< endl<< "**************************************************" << endl;
  cout << "Livro Cadastrado" << endl;
  cout << "Titulo :  " << livro.getTitulo() << endl;
  cout << "Autor :  " << livro.getAutor() << endl;
  cout << "Data :  " << livro.getData() << endl;
  cout << "Codigo :  " << livro.getCodigo() << endl;
  cout << "Genero :  " << livro.getGenero() << endl;
  cout << "**************************************************" << endl<< endl;

  resultado.setValor(Resultado::SUCESSO_CADASTRO_LIVRO);
  return resultado;
}

Resultado ContainerUsuario::autenticar(Apelido apelido, Senha senha)
{

  Resultado resultado;
  string chave1 = apelido.getApelido();
  string chave2 = senha.getSenha();

  for (list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {

    if (elemento->getApelido() == chave1 && elemento->getSenha() == chave2)
    {

      resultado.setValor(Resultado::SUCESSO_AUTENTICACAO);

      cout << endl<< endl<< "**************************************************" << endl;
      cout << "Usuario Autenticado com Sucesso" << endl;
      cout << "Apelido :  " << apelido.getApelido() << endl;
      cout << "Senha :  " << senha.getSenha() << endl;
      cout << "**************************************************" << endl<< endl;

      return resultado;
    }
  }

  resultado.setValor(Resultado::FALHA_AUTENTICACAO);
  return resultado;
}

Resultado ContainerResenha::cadastrar(Resenha resenha)
{

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

  cout << endl<< endl<< "**************************************************" << endl;
  cout << "Resenha registrada" << endl;
  cout << "Autor :  " << resenha.getAutor() << endl;
  cout << "Titulo :  " << resenha.getTitulo() << endl;
  cout << "Texto :  " << resenha.getTexto() << endl;
  cout << "**************************************************" << endl<< endl;

  resultado.setValor(Resultado::SUCESSO_REGISTRO_RESENHA);
  return resultado;
}

Resultado ContainerUsuario::buscar(Apelido apelido)
{

  Resultado resultado;
  string chave = apelido.getApelido();

  cout << endl<< endl<< "**************************************************" << endl;
  cout << "Pesquisando usuario com apelido: " << chave << " ..." << endl;
  cout << "**************************************************" << endl<< endl;

  for (list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {

    if (elemento->getApelido() == chave)
    {

      resultado.setValor(Resultado::SUCESSO_BUSCA_USUARIO);

      cout << endl<< "**************************************************" << endl;
      cout << "Usuario encontrado" << endl;
      cout << "Nome :  " << elemento->getNome() << endl;
      cout << "Apelido :  " << elemento->getApelido() << endl;
      cout << "Telefone :  " << elemento->getTelefone() << endl;
      cout << "**************************************************" << endl << endl;

      return resultado;
    }
  }

  resultado.setValor(Resultado::USUARIO_NAO_ENCONTRADO);
  return resultado;
}

Resultado ContainerLivro::buscar(Titulo titulo)
{

  Resultado resultado;
  string chave = titulo.getTitulo();

  cout << endl << endl<< "**************************************************" << endl;
  cout << "Pesquisando livro com titulo: " << chave << " ..." << endl;
  cout << "**************************************************" << endl << endl;

  for (list<Livro>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {

    if (elemento->getTitulo() == chave)
    {

      resultado.setValor(Resultado::SUCESSO_BUSCA_LIVRO);

      cout << endl << "**************************************************" << endl;
      cout << "Livro encontrado" << endl;
      cout << "Titulo :  " << elemento->getTitulo() << endl;
      cout << "Autor :  "<< elemento->getAutor()<< endl;
      cout << "Data de publicacao :  "<< elemento->getData()<< endl;
      cout << "Genero literario :  "<< elemento->getGenero()<< endl;
      cout << "Resenhas acerca do livro :  "<<  endl;
      cout << "**************************************************" << endl<< endl;

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

  cout << endl<< endl<< "**************************************************" << endl;
  cout << "Pesquisando livro com titulo: " << chave << " ..." << endl;
  cout << "**************************************************" << endl<< endl;

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