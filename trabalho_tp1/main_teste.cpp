#include <iostream>
#include <string>
#include "dominios.h"
#include "entidades.h"

using namespace std;

int main(){
	Usuario user;
	user.setNome("Lucas");
	user.setApelido("Lukk");
	user.setSenha("lone");
	user.setTelefone("22","123456789");
	cout << user.getNome() <<endl;
	cout << user.getApelido() <<endl;
	cout << user.getSenha() <<endl;
	cout << user.getTelefone() <<endl;
	user.showTelefone();
	return 0;
}