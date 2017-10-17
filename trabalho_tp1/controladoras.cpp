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

CTRLTrocarlivro::CTRLTrocarlivro(){
}

CTRLTrocarlivro::~CTRLTrocarlivro(){
}

Resultado CTRLTrocarlivro::trocarlivro() throw(runtime_error){

    Resultado resultado;
    Titulo titulo;
    string entrada_titulo;

    while(true){

        try{
            getchar();
            cout << "**************************************************" << endl;
            cout << "Informe o Título do livro que deseja trocar :" << endl;
            getline(cin, entrada_titulo);
            titulo.setTitulo(entrada_titulo);
            cout << endl << "**************************************************" << endl;
            break;
        }
        catch (const invalid_argument &exp){
            cout << endl << "Entrada(s) inválida(s), informe novamente." << endl << endl;
        }
    }

    resultado = LNTrocarlivro->trocarlivro(titulo);

    if(resultado.getValor() == Resultado::FALHA_TROCA_LIVRO){
        cout << endl << "Falha ao buscar titulo do livro para troca" << endl << endl;
    }
    else if(resultado.getValor() == Resultado::SUCESSO_TROCA_LIVRO){
        cout << endl << "**************************************************" << endl;
        cout << "Livro disponivel para troca" << endl;
        cout << "Titulo do livro :  " << titulo.getTitulo() << endl;
        cout << "Lista de usuarios com exemplares e que desejam a troca:" << endl;
        cout << "USER1 :  " << "Lucas" << endl;
        cout << "USER2 :  " << "Joao" << endl;
        cout << "USER3 :  " << "Nato" << endl;
        cout << "USER4 :  " << "Pedro" << endl;
        cout << "USER5 :  " << "Caio" << endl;
        cout << "**************************************************" << endl << endl;
    }
    else if(resultado.getValor() == Resultado::TROCA_NAO_ENCONTRADO){
        cout << endl << "**************************************************" << endl;
        cout << "Livro não disponivel para troca" << endl;
        cout << "**************************************************" << endl << endl;
    }

    return resultado;
}

CTRLComandosusuarioautenticado::CTRLComandosusuarioautenticado(){
}

CTRLComandosusuarioautenticado::~CTRLComandosusuarioautenticado(){
}

void CTRLComandosusuarioautenticado::comandosusuarioautenticado() throw(runtime_error){

    ComandoIUusuarioautenticado* comando;
    int opcao;

    while(true){

        cout << "**************************************************" << endl;
        cout << "Selecione uma opcao, entre as abaixo, como usuario autenticado :" << endl;
        cout << "Incluir livro - " << INCLUIR <<  endl;
        cout << "Remover livro - " << REMOVER <<  endl;
        cout << "Registrar resenha - " << REGISTRAR_RESENHA <<  endl;
        cout << "Trocar livro - " << TROCAR_LIVRO <<  endl;
        cout << "Buscar livro - " << BUSCAR_LIVRO <<  endl;
        cout << "Buscar usuario - " << BUSCAR_USUARIO <<  endl;
        cout << "Retornar ao menu - " << RETORNAR_MENU <<  endl;
        cout << "**************************************************" << endl << endl;
        cin >> opcao;

        switch(opcao){
            case INCLUIR:   
                comando = new ComandoIUUsuarioincluir();
                comando->comandosusuarioautenticado(cntrLNComandosusuarioautenticado);
                delete comando;
                break;
            case REMOVER:   
                comando = new ComandoIUUsuarioexcluir();
                comando->comandosusuarioautenticado(cntrLNComandosusuarioautenticado);
                delete comando;
                break;
            case REGISTRAR_RESENHA:   
                comando = new ComandoIUUsuarioregistrarresenha();
                comando->comandosusuarioautenticado(cntrLNComandosusuarioautenticado);
                delete comando;
                break;
            case TROCAR_LIVRO:   
                comando = new ComandoIUUsuariotrocarlivro();
                comando->comandosusuarioautenticado(cntrLNComandosusuarioautenticado);
                delete comando;
                break;
            case BUSCAR_LIVRO:   
                comando = new ComandoIUUsuariobuscarlivro();
                comando->comandosusuarioautenticado(cntrLNComandosusuarioautenticado);
                delete comando;
                break;
            case BUSCAR_USUARIO:   
                comando = new ComandoIUUsuariobuscarusuario();
                comando->comandosusuarioautenticado(cntrLNComandosusuarioautenticado);
                delete comando;
                break;
            case RETORNAR_MENU:
                break;
            default:
                cout << "Valor invalido, informe novamente" << endl;
                break;
        }

        if(opcao == RETORNAR_MENU){
            break;
        }
    }
}