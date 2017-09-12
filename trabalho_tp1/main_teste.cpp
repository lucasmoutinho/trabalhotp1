#include <iostream>
#include <string>
#include <cctype>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main(){
	Usuario user;
	Resenha res;
	Livro livro;
	Nome nome;
	nome.setNome("lucas");
	user.setNome("luiz");
	user.setApelido("Luk");
	user.setSenha("lon");
	user.setTelefone("(22)-123456789");
	livro.setTitulo("bananao");
	livro.setAutor("i");
	livro.setCodigo("01234");
	livro.setData("12/12/12");
	livro.setGenero("EPOPEIA");
	res.setTitulo("bananao");
	res.setAutor("luz");
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
	cout << res.getTitulo() <<endl;
	cout << res.getAutor() <<endl;
	cout << res.getResenha() <<endl;
	return 0;
}