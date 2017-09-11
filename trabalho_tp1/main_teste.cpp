#include <iostream>
#include <string>
#include "dominios.h"
#include "entidades.h"

using namespace std;

int main(){
	Usuario user;
	Resenha res;
	Livro livro;
	user.setNome("fernando");
	user.setApelido("Lukk");
	user.setSenha("lone");
	user.setTelefone("(22)-123456789");
	livro.setTitulo("bananao");
	livro.setAutor("luis");
	livro.setCodigo("01234");
	livro.setData("12/12/12");
	livro.setGenero(4);
	res.setLivro("bananao");
	res.setAutor("lucas");
	res.setResenha("E UMA HISTORIA SOBRE MEU BANANAO");
	cout << user.getNome() <<endl;
	cout << user.getApelido() <<endl;
	cout << user.getSenha() <<endl;
	cout << user.getTelefone() <<endl;
	cout << livro.getTitulo() <<endl;
	cout << livro.getAutor() <<endl;
	cout << livro.getCodigo() <<endl;
	cout << livro.getGenero() <<endl;
	cout << livro.getData() <<endl;
	cout << res.getLivro() <<endl;
	cout << res.getAutor() <<endl;
	cout << res.getResenha() <<endl;
	return 0;
}