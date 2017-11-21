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
  cout << container.begin()->getApelido();
  resultado.setValor(Resultado::SUCESSO_CADASTRO);
  return resultado;
}