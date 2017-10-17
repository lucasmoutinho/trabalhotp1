#include "controladoras.h"

CTRLCadastro::CTRLCadastro(){
}

CTRLCadastro::~CTRLCadastro(){
}

Resultado CTRLCadastro::cadastrar() throw(runtime_error){

    Resultado resultado;
    Nome nome;
    Apelido apelido;
    Senha senha;
    Telefone telefone;
    string entrada_nome;
    string entrada_apelido;
    string entrada_senha;
    string entrada_telefone;

    while(true){

        try{
            getchar();
            cout << "**************************************************" << endl;
            cout << "Informe o Nome :" << endl;
            getline(cin, entrada_nome);
            nome.setNome(entrada_nome);
            cout << "Informe o Apelido :" << endl;
            getline(cin, entrada_apelido);
            apelido.setApelido(entrada_apelido);
            cout << "Informe a Senha :" << endl;
            getline(cin, entrada_senha);
            senha.setSenha(entrada_senha);
            cout << "Informe o Telefone :" << endl;
            getline(cin, entrada_telefone);
            telefone.setTelefone(entrada_telefone);
            cout << endl << "**************************************************" << endl;
            break;
        }
        catch (const invalid_argument &exp){
            cout << endl << "Entrada(s) inválida(s), informe novamente." << endl << endl;
        }
    }

    resultado = LNCadastro->cadastrar(nome,apelido,senha,telefone);

    if(resultado.getValor() == Resultado::FALHA_CADASTRO){
        cout << endl << "Falha ao cadastrar usuario" << endl << endl;
    }

    return resultado;
}

CTRLCadastrolivro::CTRLCadastrolivro(){
}

CTRLCadastrolivro::~CTRLCadastrolivro(){
}

Resultado CTRLCadastrolivro::cadastrarlivro() throw(runtime_error){

    Resultado resultado;
    Titulo titulo;
    Nome autor;
    Data data;
    Codigo codigo;
    Genero genero;
    string entrada_titulo;
    string entrada_autor;
    string entrada_data;
    string entrada_codigo;
    string entrada_genero;

    while(true){

        try{
            getchar();
            cout << "**************************************************" << endl;
            cout << "Informe o Titulo :" << endl;
            getline(cin, entrada_titulo);
            titulo.setTitulo(entrada_titulo);
            cout << "Informe o Autor :" << endl;
            getline(cin, entrada_autor);
            autor.setNome(entrada_autor);
            cout << "Informe a Data :" << endl;
            getline(cin, entrada_data);
            data.setData(entrada_data);
            cout << "Informe o Codigo :" << endl;
            getline(cin, entrada_codigo);
            codigo.setCodigo(entrada_codigo);
            cout << "Informe o Genero :" << endl;
            getline(cin, entrada_genero);
            genero.setGenero(entrada_genero);
            cout << endl << "**************************************************" << endl;
            break;
        }
        catch (const invalid_argument &exp){
            cout << endl << "Entrada(s) inválida(s), informe novamente." << endl << endl;
        }
    }

    resultado = LNCadastrolivro->cadastrarlivro(titulo, autor, data, codigo, genero);

    if(resultado.getValor() == Resultado::FALHA_CADASTRO_LIVRO){
        cout << endl << "Falha ao cadastrar livro" << endl << endl;
    }

    return resultado;
}

CTRLAutenticacao::CTRLAutenticacao(){
}

CTRLAutenticacao::~CTRLAutenticacao(){
}

Resultado CTRLAutenticacao::autenticar() throw(runtime_error){

    Resultado resultado;
    Apelido apelido;
    Senha senha;
    string entrada_apelido;
    string entrada_senha;

    while(true){

        try{
            getchar();
            cout << "**************************************************" << endl;
            cout << "Informe o Apelido :" << endl;
            getline(cin, entrada_apelido);;
            apelido.setApelido(entrada_apelido);
            cout << "Informe a Senha :" << endl;
            getline(cin, entrada_senha);;
            senha.setSenha(entrada_senha);
            cout << endl << "**************************************************" << endl;
            break;
        }
        catch (const invalid_argument &exp){
            cout << endl << "Entrada(s) inválida(s), informe novamente." << endl << endl;
        }
    }

    resultado = LNAutenticacao->autenticar(apelido, senha);

    if(resultado.getValor() == Resultado::FALHA_AUTENTICACAO){
        cout << endl << "Falha ao autenticar usuario" << endl << endl;
    }

    return resultado;
}

CTRLRegistroresenha::CTRLRegistroresenha(){
}

CTRLRegistroresenha::~CTRLRegistroresenha(){
}

Resultado CTRLRegistroresenha::registrarresenha() throw(runtime_error){

    Resultado resultado;
    Nome autor;
    Titulo titulo;
    Texto texto;
    string entrada_autor;
    string entrada_titulo;
    string entrada_texto;

    while(true){

        try{
            getchar();
            cout << "**************************************************" << endl;
            cout << "Informe o Autor :" << endl;
            getline(cin, entrada_autor);;
            autor.setNome(entrada_autor);
            cout << "Informe a Titulo :" << endl;
            getline(cin, entrada_titulo);;
            titulo.setTitulo(entrada_titulo);
            cout << "Informe o Texto :" << endl;
            getline(cin, entrada_texto);
            texto.setTexto(entrada_texto);
            cout << endl << "**************************************************" << endl;
            break;
        }
        catch (const invalid_argument &exp){
            cout << endl << "Entrada(s) inválida(s), informe novamente." << endl << endl;
        }
    }

    resultado = LNRegistroresenha->registrarresenha(autor, titulo, texto);

    if(resultado.getValor() == Resultado::FALHA_REGISTRO_RESENHA){
        cout << endl << "Falha ao registrar resenha" << endl << endl;
    }

    return resultado;
}

CTRLBuscarusuario::CTRLBuscarusuario(){
}

CTRLBuscarusuario::~CTRLBuscarusuario(){
}

Resultado CTRLBuscarusuario::buscarusuario() throw(runtime_error){

    Resultado resultado;
    Apelido apelido;
    string entrada_apelido;

    while(true){

        try{
            getchar();
            cout << "**************************************************" << endl;
            cout << "Informe o Apelido do usuario que deseja encontrar :" << endl;
            getline(cin, entrada_apelido);
            apelido.setApelido(entrada_apelido);
            cout << endl << "**************************************************" << endl;
            break;
        }
        catch (const invalid_argument &exp){
            cout << endl << "Entrada(s) inválida(s), informe novamente." << endl << endl;
        }
    }

    resultado = LNBuscarusuario->buscarusuario(apelido);

    if(resultado.getValor() == Resultado::FALHA_BUSCA_USUARIO){
        cout << endl << "Falha ao buscar usuário" << endl << endl;
    }
    else if(resultado.getValor() == Resultado::SUCESSO_BUSCA_USUARIO){
        cout << endl << "**************************************************" << endl;
        cout << "Usuário encontrado" << endl;
        cout << "Nome :  " << "Joao" << endl;
        cout << "Apelido :  " << apelido.getApelido() << endl;
        cout << "Telefone :  " << "(61)-123456789" << endl;
        cout << "**************************************************" << endl << endl;
    }
    else if(resultado.getValor() == Resultado::USUARIO_NAO_ENCONTRADO){
        cout << endl << "**************************************************" << endl;
        cout << "Usuário não encontrado" << endl;
        cout << "**************************************************" << endl << endl;
    }

    return resultado;
}

CTRLBuscarlivro::CTRLBuscarlivro(){
}

CTRLBuscarlivro::~CTRLBuscarlivro(){
}

Resultado CTRLBuscarlivro::buscarlivro() throw(runtime_error){

    Resultado resultado;
    Titulo titulo;
    string entrada_titulo;

    while(true){

        try{
            getchar();
            cout << "**************************************************" << endl;
            cout << "Informe o Título do livro que deseja encontrar :" << endl;
            getline(cin, entrada_titulo);
            titulo.setTitulo(entrada_titulo);
            cout << endl << "**************************************************" << endl;
            break;
        }
        catch (const invalid_argument &exp){
            cout << endl << "Entrada(s) inválida(s), informe novamente." << endl << endl;
        }
    }

    resultado = LNBuscarlivro->buscarlivro(titulo);

    if(resultado.getValor() == Resultado::FALHA_BUSCA_LIVRO){
        cout << endl << "Falha ao buscar livro" << endl << endl;
    }
    else if(resultado.getValor() == Resultado::SUCESSO_BUSCA_LIVRO){
        cout << endl << "**************************************************" << endl;
        cout << "Livro encontrado" << endl;
        cout << "Titulo :  " << titulo.getTitulo() << endl;
        cout << "Autor :  " << "Lucas" << endl;
        cout << "Data de publicacao :  " << "10/10/10" << endl;
        cout << "Genero literario :  " << "EPOPEIA" << endl;
        cout << "Resenhas acerca do livro :  " << "Nenhuma" << endl;
        cout << "**************************************************" << endl << endl;
    }
    else if(resultado.getValor() == Resultado::LIVRO_NAO_ENCONTRADO){
        cout << endl << "**************************************************" << endl;
        cout << "Livro não encontrado" << endl;
        cout << "**************************************************" << endl << endl;
    }

    return resultado;
}