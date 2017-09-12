#include "dominios.h"

bool string_contem_apenas_letras(string str){

	int cont = 0;
	bool contem_apenas_letras = true;

	while(contem_apenas_letras && (unsigned)cont<str.length()){
		contem_apenas_letras = false;
		if(str[cont] >= 'a' && str[cont] <= 'z'){
			contem_apenas_letras = true;
		}
		else if(str[cont] >= 'A' && str[cont] <= 'Z'){
			contem_apenas_letras = true;	
		}
		cont++;
	}
	return contem_apenas_letras;
}

bool string_contem_apenas_numeros(string str){

	int cont1 = 0, cont2 = 0;
	int numeros[] = {0,1,2,3,4,5,6,7,8,9};
	bool eh_numero = true;

	while(eh_numero && (unsigned)cont1<str.length()){
		eh_numero = false;
		while(!eh_numero && (unsigned)cont2<sizeof(numeros)){
			if((str[cont1] - '0') == numeros[cont2]){
				eh_numero = true;
			}
			cont2++;
		}
		cont2=0;
		cont1++;
	}
	return eh_numero;	
}

bool Nome::string_contem_apenas_letras_espaco_e_ponto(string str){

	int cont = 0;
	bool contem_apenas_letras = true;

	while(contem_apenas_letras && (unsigned)cont<str.length()){
		contem_apenas_letras = false;
		if(str[cont] >= 'a' && str[cont] <= 'z'){
			contem_apenas_letras = true;
		}
		else if(str[cont] >= 'A' && str[cont] <= 'Z'){
			contem_apenas_letras = true;	
		}
		else if(str[cont] == ' ' || str[cont] == '.'){
			contem_apenas_letras = true;	
		}
		cont++;
	}
	return contem_apenas_letras;
}

void Nome::validaNome(string nome) throw(invalid_argument){

	if(nome.length() > LIMITE_NOME){
		throw invalid_argument("Nome nao deve exceder o limite de caracteres");
	}
	if(!string_contem_apenas_letras_espaco_e_ponto(nome)){
		throw invalid_argument("Nome deve conter apenas letras, espaco ou ponto");
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
	if(!string_contem_apenas_letras(apelido)){
		throw invalid_argument("Apelido deve conter apenas letras");
	}
}

void Apelido::setApelido(string apelido) throw(invalid_argument){

	validaApelido(apelido);
	this->apelido = apelido;
}

bool Telefone::telefone_formato_correto(string telefone){

    bool formato_correto = true;
    if(telefone[0] != '(' || telefone[LIMITE_DDD+1] != ')' || telefone[LIMITE_DDD+2] != '-'){
    	formato_correto = false;
    }
    return formato_correto;

}

void Telefone::validaTelefone(string telefone) throw(invalid_argument){

	if(telefone.length() != LIMITE_TELEFONE){
		throw invalid_argument("Telefone deve conter o numero de caracteres especificado");
	}
	if(!string_contem_apenas_numeros(telefone.substr(1,LIMITE_DDD))){
		throw invalid_argument("DDD deve conter apenas algarismos numericos");
	}
	if(!string_contem_apenas_numeros(telefone.substr(LIMITE_DDD+3,LIMITE_NUMERO))){
		throw invalid_argument("Numero deve conter apenas algarismos numericos");
	}
    if(!telefone_formato_correto(telefone)){
		throw invalid_argument("O telefone deve estar no formato (XX)-XXXXXXXXX");
	}
}

void Telefone::setTelefone(string telefone) throw(invalid_argument){
	
	validaTelefone(telefone);
	this->telefone = telefone;
}

bool Senha::string_repete_letra(string str){

	int cont1 = 0, cont2 = 0;
	bool repete_letra = false;
	const int TAMANHO_STRING = (int)str.length();

	while(!repete_letra && cont1<TAMANHO_STRING){
		cont2 = cont1+1;
		while(!repete_letra && cont2<TAMANHO_STRING){
			if(str[cont1] == str[cont2]){
				repete_letra = true;
			}
			cont2++;
		}
		cont2 = 0;
		cont1++;
	}
	return repete_letra;
}

void Senha::validaSenha(string senha) throw(invalid_argument){

	if(senha.length() > LIMITE_SENHA){
		throw invalid_argument("Senha nao deve exceder o limite de caracteres");
	}
	if(!string_contem_apenas_letras(senha)){
		throw invalid_argument("Senha deve conter apenas letras");
	}
	if(string_repete_letra(senha)){
		throw invalid_argument("Senha nao deve repetir caracteres");
	}
}

void Senha::setSenha(string senha) throw(invalid_argument){

	validaSenha(senha);
	this->senha = senha;
}

bool Titulo::string_contem_espaco_em_branco_duplicado(string str){

    int cont=0;
    bool espaco_branco_duplo = false;
    const int TAMANHO = (int)str.length();

    while(!espaco_branco_duplo && cont<TAMANHO-1){
        if (str[cont]== ' ' && str[cont+1]== ' '){
            espaco_branco_duplo = true;
        }
        cont++;
    }
    return espaco_branco_duplo;
}

void Titulo::validaTitulo(string titulo) throw(invalid_argument){

	if(titulo.length() > LIMITE_TITULO){
		throw invalid_argument("Titulo nao deve exceder o limite de caracteres");
	}
	if(string_contem_espaco_em_branco_duplicado(titulo)){
		throw invalid_argument("Titulo nao deve conter espaco em branco duplicado");
	}
}

void Titulo::setTitulo(string titulo) throw(invalid_argument){
	validaTitulo(titulo);
	this->titulo = titulo;
}

bool Data::data_formato_correto(string str){

    int aux[LIMITE_DATA], dia, mes, ano;
    bool formato_correto = true;
    aux[0] = str[0] - '0';
    aux[1] = str[1] - '0';
    aux[2] = str[2];
    aux[3] = str[3] - '0';
    aux[4] = str[4] - '0';
    aux[5] = str[5];
    aux[6] = str[6] - '0';
    aux[7] = str[7] - '0';
    dia = aux[0]*10 + aux[1];
    mes = aux[3]*10 + aux[4];
    ano = aux[6]*10 + aux[7];

    if ((dia > 31) || (dia < 1) || (mes > 12) || (mes < 1) || (ano < 0) || (ano > 99) || aux[2] != '/' || aux[5] != '/'){
        formato_correto = false;
    }
    return formato_correto;
}

void Data::validaData(string data) throw(invalid_argument){

	if(data.length() != LIMITE_DATA){
		throw invalid_argument("Data deve conter o numero de caracteres especificado");
	}
	if(!string_contem_apenas_numeros(data.substr(0,2))){
		throw invalid_argument("Dia deve conter apenas algarismos numericos");
	}
	if(!string_contem_apenas_numeros(data.substr(3,2))){
		throw invalid_argument("Mes deve conter apenas algarismos numericos");
	}
	if(!string_contem_apenas_numeros(data.substr(6,2))){
		throw invalid_argument("Ano deve conter apenas algarismos numericos");
	}
    if(!data_formato_correto(data)){
		throw invalid_argument("A data deve estar no formato DD/MM/AA e deve apresentar o dia entre 01 e 31, o mes entre 01 e 12 e o ano entre 00 e 99");
	}
}

void Data::setData(string data) throw(invalid_argument){
	validaData(data);
	this->data = data;
}

void Codigo::validaCodigo(string codigo) throw(invalid_argument){

	if(codigo.length() != LIMITE_CODIGO){
		throw invalid_argument("Codigo deve conter o numero de caracteres especificado");
	}
	if(!string_contem_apenas_numeros(codigo)){
		throw invalid_argument("Codigo deve conter apenas algarismos de 0 a 9");
	}
}

void Codigo::setCodigo(string codigo) throw(invalid_argument){
	validaCodigo(codigo);
	this->codigo = codigo;
}

void Texto::validaTexto(string texto) throw(invalid_argument){

	if(texto.length() > LIMITE_TEXTO){
		throw invalid_argument("Texto nao deve exceder o limite de caracteres");
	}
}

void Texto::setTexto(string texto) throw(invalid_argument){
	validaTexto(texto);
	this->texto = texto;
}

void Genero::validaGenero(int genero) throw(invalid_argument){

	if(genero<0 || genero >= TAMANHO_LISTA_GENEROS){
		throw invalid_argument("Entrada numerica invalida");
	}
}

void Genero::setGenero(int genero) throw(invalid_argument){
	validaGenero(genero);
	this->genero = genderList[genero];
}

void Genero::showGeneros() const{

	for(int i = 0; i<TAMANHO_LISTA_GENEROS; i++){
		cout << i << " - " << genderList[i] << endl;
	}
}

static const string lista_generos[] = {"EPOPEIA", "NOVELA", "CONTO", "ENSAIO", "ROMANCE"};
const string* Genero::genderList = lista_generos;