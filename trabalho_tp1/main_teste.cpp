#include <iostream>
#include <string>
#include "dominios.h"
using namespace std;

int main(){
	Telefone* obj = new Telefone;
	string str1, str2;
	cout << "Escreva um DDD" << endl;
	cin >> str1;
	cout << "Escreva um numero" << endl;
	cin >> str2;
	obj->setTelefone(str1, str2);
	cout << obj->getTelefone() << endl;
	obj->showTelefone();
	return 0;
}