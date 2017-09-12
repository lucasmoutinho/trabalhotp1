#include "dominios.h"

void Nome::validaNome(string nome) throw(invalid_argument){

	if(nome.length() > LIMITE_NOME){
		throw invalid_argument("Nome nao deve exceder o limite de caracteres");
	}
	
	for(int i = 0;(unsigned)i<nome.length();i++){
		if(!((nome[i] >= 'a' && nome[i] <= 'z') || (nome[i] >= 'A' && nome[i] <= 'Z') || (nome[i] == ' ') || (nome[i] == '.'))){
			throw invalid_argument("Nome deve conter apenas letras, espaco ou ponto");
		}
	}

}

void Nome::setNome(string nome) throw(invalid_argument){
	///ESSE METODO VAI SETAR A SUA CARA
	validaNome(nome);
	this->nome = nome;
}

void Apelido::validaApelido(string apelido) throw(invalid_argument){

	if(apelido.length() > LIMITE_APELIDO){
		throw invalid_argument("Apelido nao deve exceder o limite de caracteres");
	}
	
	for(int i = 0;(unsigned)i<apelido.length();i++){
		if(!((apelido[i] >= 'a' && apelido[i] <= 'z') || (apelido[i] >= 'A' && apelido[i] <= 'Z'))){
			throw invalid_argument("Apelido deve conter apenas letras");
		}
	}
}

void Apelido::setApelido(string apelido) throw(invalid_argument){

	validaApelido(apelido);
	this->apelido = apelido;
}

void Telefone::validaTelefone(string telefone) throw(invalid_argument){
	int i;

	if(telefone.length() != LIMITE_TELEFONE){
		throw invalid_argument("Telefone deve conter o numero de caracteres especificado");
	}

	for(i = INICIO_DDD;i<=FIM_DDD;i++){
		if(!((telefone[i] >= '0' && telefone[i] <= '9'))){
			throw invalid_argument("DDD deve conter apenas algarismos numericos");
		}
	}

	for(i = INICIO_NUMERO;i<=FIM_NUMERO;i++){
		if(!((telefone[i] >= '0' && telefone[i] <= '9'))){
			throw invalid_argument("Numero deve conter apenas algarismos numericos");
		}
	}

    if(telefone[INICIO_DDD-1] != '(' || telefone[FIM_DDD+1] != ')' || telefone[FIM_DDD+2] != '-'){
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

	for(int i = 0;(unsigned)i<senha.length();i++){
		if(!((senha[i] >= 'a' && senha[i] <= 'z') || (senha[i] >= 'A' && senha[i] <= 'Z'))){
			throw invalid_argument("Senha deve conter apenas letras");
		}
	}

	if(string_repete_letra(senha)){
		throw invalid_argument("Senha nao deve repetir caracteres");
	}
}

void Senha::setSenha(string senha) throw(invalid_argument){
	validaSenha(senha);
	this->senha = senha;
}

void Titulo::validaTitulo(string titulo) throw(invalid_argument){

	if(titulo.length() > LIMITE_TITULO){
		throw invalid_argument("Titulo nao deve exceder o limite de caracteres");
	}

	for(int i = 0;(unsigned)i<(titulo.length()-1);i++){
		if(titulo[i] == ' ' && titulo[i+1] == ' '){
			throw invalid_argument("Titulo nao deve conter espaco em branco duplicado");
		}
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
	int i;

	if(data.length() != LIMITE_DATA){
		throw invalid_argument("Data deve conter o numero de caracteres especificado");
	}

	for(i = 0;i<=1;i++){
		if(!((data[i] >= '0' && data[i] <= '9'))){
			throw invalid_argument("Dia deve conter apenas algarismos numericos");
		}
	}

	for(i = 3;i<=4;i++){
		if(!((data[i] >= '0' && data[i] <= '9'))){
			throw invalid_argument("Mes deve conter apenas algarismos numericos");
		}
	}

	for(i = 6;i<=7;i++){
		if(!((data[i] >= '0' && data[i] <= '9'))){
			throw invalid_argument("Ano deve conter apenas algarismos numericos");
		}
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

	for(int i = 0;i<LIMITE_CODIGO;i++){
		if(!((codigo[i] >= '0' && codigo[i] <= '9'))){
			throw invalid_argument("Codigo deve conter apenas algarismos numericos");
		}
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

bool Genero::genero_valido(string genero){

	int i = 0;
	bool valido = false;
	while((unsigned)i < genero.length()){
		genero[i] = toupper(genero[i]);
		i++;
	}
	i = 0;
	while(!valido && i<TAMANHO_LISTA_GENEROS){
		if(!genero.compare(genderList[i])){
			valido = true;
		}
		i++;
	}
	return valido;
}

void Genero::validaGenero(string genero) throw(invalid_argument){

	if(!genero_valido(genero)){
		throw invalid_argument("Genero deve estar presente na lista de generos");
	}
}

void Genero::setGenero(string genero) throw(invalid_argument){
	validaGenero(genero);
	this->genero = genero;
}

void Genero::showGeneros() const{

	for(int i = 0; i < TAMANHO_LISTA_GENEROS; i++){
		cout << genderList[i] << endl;
	}
}

static const string lista_generos[] = {"EPOPEIA", "NOVELA", "CONTO", "ENSAIO", "ROMANCE"};
const string* Genero::genderList = lista_generos;