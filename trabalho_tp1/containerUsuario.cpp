#include "containerUsuario.h"

Resultado ContainerUsuario::cadastrar(Usuario usuario)
{
///Metodo da classe container de usuarios que permite o cadastro de usuarios

  Resultado resultado;
  string chave = usuario.getApelido();

  for (list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {

    if (elemento->getApelido() == chave)
    {

      resultado.setValor(Resultado::FALHA_CADASTRO);
      return resultado;
    }
  }

  container.push_back(usuario);

  cout << endl
       << endl
       << "**************************************************" << endl;
  cout << "Usuario Cadastrado" << endl;
  cout << "Nome :  " << usuario.getNome() << endl;
  cout << "Apelido :  " << usuario.getApelido() << endl;
  cout << "Senha :  " << usuario.getSenha() << endl;
  cout << "Telefone :  " << usuario.getTelefone() << endl;
  cout << "**************************************************" << endl
       << endl;

  resultado.setValor(Resultado::SUCESSO_CADASTRO);
  return resultado;
}

Resultado ContainerUsuario::autenticar(Apelido apelido, Senha senha, Usuario** user)
{
///Metodo da classe container de usuarios que permite a autenticacao de usuarios

  Resultado resultado;
  string chave1 = apelido.getApelido();
  string chave2 = senha.getSenha();

  for (list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {

    if (elemento->getApelido() == chave1 && elemento->getSenha() == chave2)
    {

      resultado.setValor(Resultado::SUCESSO_AUTENTICACAO);

      cout << endl << endl << "**************************************************" << endl;
      cout << "Usuario Autenticado com Sucesso" << endl;
      cout << "Apelido :  " << elemento->getApelido() << endl;
      cout << "Senha :  " << elemento->getSenha() << endl;
      cout << "**************************************************" << endl << endl;
      *user = &(*elemento);
      return resultado;
    }
  }

  resultado.setValor(Resultado::FALHA_AUTENTICACAO);
  return resultado;
}

Resultado ContainerUsuario::buscar(Apelido apelido)
{
///Metodo da classe container de usuarios que permite a busca de usuarios

  Resultado resultado;
  string chave = apelido.getApelido();

  cout << endl
       << endl
       << "**************************************************" << endl;
  cout << "Pesquisando usuario com apelido: " << chave << " ..." << endl;
  cout << "**************************************************" << endl
       << endl;

  for (list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
  {

    if (elemento->getApelido() == chave)
    {

      resultado.setValor(Resultado::SUCESSO_BUSCA_USUARIO);

      cout << endl
           << "**************************************************" << endl;
      cout << "Usuario encontrado" << endl;
      cout << "Nome :  " << elemento->getNome() << endl;
      cout << "Apelido :  " << elemento->getApelido() << endl;
      cout << "Telefone :  " << elemento->getTelefone() << endl;
      cout << "**************************************************" << endl
           << endl;

      return resultado;
    }
  }

  resultado.setValor(Resultado::USUARIO_NAO_ENCONTRADO);
  return resultado;
}

ContainerUsuario::ContainerUsuario()
{
}

ContainerUsuario::~ContainerUsuario()
{
}
