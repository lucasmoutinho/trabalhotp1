#include <iostream>
#include <string>
#include "dominios.h"
#include "entidades.h"

using namespace std;

int main(){
	Usuario user;
	Resenha res;
	user.setNome("Lucas");
	user.setApelido("Lukk");
	user.setSenha("lone");
	user.setTelefone("22","123456789");
	res.setNomeDoLivro("bananao");
	res.setNomeDoAutor("luiz");
	res.setResenha("É UMA HISTORIA BEM MERDA SOBRE MEU BANANAO");
	cout << user.getNome() <<endl;
	cout << user.getApelido() <<endl;
	cout << user.getSenha() <<endl;
	cout << user.getTelefone() <<endl;
	user.showTelefone();
	cout << res.getNomeDoLivro() <<endl;
	cout << res.getNomeDoAutor() <<endl;
	cout << res.getResenha() <<endl;
	return 0;
}