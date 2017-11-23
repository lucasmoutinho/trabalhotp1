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
  resultado.setValor(Resultado::SUCESSO_CADASTRO_LIVRO);
  return resultado;
}