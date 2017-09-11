#include <iostream>
#include <string>
#include "dominios.h"
#include "entidades.h"

using namespace std;

int main(){
	Usuario user;
	Resenha res;
	Livro livro;
	Nome nome;
	nome.setNome("luiz");
	user.setNome("luiz");
	user.setApelido("Lukk");
	user.setSenha("lone");
	user.setTelefone("(22)-123456789");
	livro.setTitulo("bananao");
	livro.setAutor("j");
	livro.setCodigo("01234");
	livro.setData("12/12/12");
	livro.setGenero(4);
	res.setTituloLivro("bananao");
	res.setNomeAutor("luz");
	res.setResenha("E UMA HISTORIA SOBRE MEU BANANAO");
	cout << nome.getNome() << endl;
	cout << user.getNome() <<endl;
	cout << user.getApelido() <<endl;
	cout << user.getSenha() <<endl;
	cout << user.getTelefone() <<endl;
	cout << livro.getTitulo() <<endl;
	cout << livro.getAutor() <<endl;
	cout << livro.getCodigo() <<endl;
	cout << livro.getGenero() <<endl;
	cout << livro.getData() <<endl;
	cout << res.getTituloLivro() <<endl;
	cout << res.getNomeAutor() <<endl;
	cout << res.getResenha() <<endl;
	return 0;
}