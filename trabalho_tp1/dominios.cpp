#include "dominios.h"

bool string_contem_numero(string str){

	int i = 0, j = 0;
	int numeros[] = {0,1,2,3,4,5,6,7,8,9};
	bool contem_numero = false;

	while(!contem_numero && (unsigned)i<str.length()){
		while(!contem_numero && (unsigned)j<sizeof(numeros)){
			if((str[i] - '0') == numeros[j]){
				contem_numero = true;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return contem_numero;
}

void Nome::validaNome(string nome) throw(invalid_argument){

	if(nome.length() > LIMITE_NOME){
		throw invalid_argument("Nome nao deve exceder o limite de caracteres");
	}
	if(string_contem_numero(nome)){
		throw invalid_argument("Nome nao deve conter algarismos");
	}
}

void Nome::setNome(string nome) throw(invalid_argument){

	validaNome(nome);
	this->nome = nome;
}

void Apelido::validaApelido(string apelido) throw(invalid_argument){

	if(apelido.length() > LIMITE_APELIDO){
		throw invalid_argument("Apelido nao deve exceder o limite de caracteres");
	}
	if(string_contem_numero(apelido)){
		throw invalid_argument("Apelido nao deve conter algarismos");
	}
}

void Apelido::setApelido(string apelido) throw(invalid_argument){

	validaApelido(apelido);
	this->apelido = apelido;
}

bool Telefone::string_contem_apenas_numeros(string str){

	int i = 0, j = 0;
	int numeros[] = {0,1,2,3,4,5,6,7,8,9};
	bool eh_numero = true;

	while(eh_numero && (unsigned)i<str.length()){
		eh_numero = false;
		while(!eh_numero && (unsigned)j<sizeof(numeros)){
			if((str[i] - '0') == numeros[j]){
				eh_numero = true;
			}
			j++;
		}
		j=0;
		i++;
	}
	return eh_numero;	
}

void Telefone::validaTelefone(string ddd, string numero) throw(invalid_argument){

	if(ddd.length() > LIMITE_DDD || ddd.length() < LIMITE_DDD){
		throw invalid_argument("DDD com quantidade de algarismos invalida");
	}
	if(!string_contem_apenas_numeros(ddd)){
		throw invalid_argument("DDD deve conter apenas algarismos de 0 a 9");
	}
	if(numero.length() > LIMITE_NUMERO || numero.length() < LIMITE_NUMERO){
		throw invalid_argument("Numero com quantidade de algarismos invalida");
	}
	if(!string_contem_apenas_numeros(numero)){
		throw invalid_argument("Numero deve conter apenas algarismos de 0 a 9");
	}
}

void Telefone::setTelefone(string ddd, string numero) throw(invalid_argument){
	
	validaTelefone(ddd, numero);
	this->telefone = ddd + numero;
}

void Telefone::showTelefone() const{

	cout << '(' << telefone.substr(0,LIMITE_DDD) << ")-" 
	<< telefone.substr(LIMITE_DDD , LIMITE_DDD + LIMITE_NUMERO) << endl;
}

bool Senha::string_repete_letra(string str){

	int i = 0, j = 0;
	bool repete_letra = false;
	const int TAMANHO = (int)str.length();

	while(!repete_letra && i<TAMANHO){
		j = i+1;
		while(!repete_letra && j<TAMANHO){
			if(str[i] == str[j]){
				repete_letra = true;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return repete_letra;
}

void Senha::validaSenha(string senha) throw(invalid_argument){

	if(senha.length() > LIMITE_SENHA){
		throw invalid_argument("Senha nao deve exceder o limite de caracteres");
	}
	if(string_contem_numero(senha)){
		throw invalid_argument("Senha nao deve conter algarismos");
	}
	if(string_repete_letra(senha)){
		throw invalid_argument("Senha nao deve repetir caracteres");
	}
}

void Senha::setSenha(string senha) throw(invalid_argument){

	validaSenha(senha);
	this->senha = senha;
}