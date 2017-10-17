#include "comandos.h"

ComandoIUusuarioautenticado::~ComandoIUusuarioautenticado(){
}

void ComandoIUUsuarioincluir::comandosusuarioautenticado(ILNComandosusuarioautenticado* cntrLNComandosusuarioautenticado) throw(runtime_error){

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
            cout << "Informe o Titulo do livro que deseja incluir na estante :" << endl;
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

    resultado = cntrLNComandosusuarioautenticado->incluir(titulo, autor, data, codigo, genero);

    if(resultado.getValor() == Resultado::FALHA_CADASTRO_LIVRO){
        cout << endl << "Falha ao incluir livro na estante" << endl << endl;
    }
}

void ComandoIUUsuarioexcluir::comandosusuarioautenticado(ILNComandosusuarioautenticado* cntrLNComandosusuarioautenticado) throw(runtime_error){
    
    Resultado resultado;
    Titulo titulo;
    string entrada_titulo;

    while(true){

        try{
            getchar();
            cout << "**************************************************" << endl;
            cout << "Informe o Titulo do livro que deseja remover na estante :" << endl;
            getline(cin, entrada_titulo);
            titulo.setTitulo(entrada_titulo);
            cout << endl << "**************************************************" << endl;
            break;
        }
        catch (const invalid_argument &exp){
            cout << endl << "Entrada(s) inválida(s), informe novamente." << endl << endl;
        }
    }

    resultado = cntrLNComandosusuarioautenticado->remover(titulo);

    if(resultado.getValor() == Resultado::FALHA_CADASTRO_LIVRO){
        cout << endl << "Falha ao exluir livro na estante" << endl << endl;
    }
}

void ComandoIUUsuarioregistrarresenha::comandosusuarioautenticado(ILNComandosusuarioautenticado* cntrLNComandosusuarioautenticado) throw(runtime_error){
    
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
            cout << "Informe o Autor da resenha :" << endl;
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

    resultado = cntrLNComandosusuarioautenticado->registrarresenha(autor, titulo, texto);

    if(resultado.getValor() == Resultado::FALHA_REGISTRO_RESENHA){
        cout << endl << "Falha ao registrar resenha" << endl << endl;
    }
}

void ComandoIUUsuariotrocarlivro::comandosusuarioautenticado(ILNComandosusuarioautenticado* cntrLNComandosusuarioautenticado) throw(runtime_error){
    
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

    resultado = cntrLNComandosusuarioautenticado->trocarlivro(titulo);

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
}

void ComandoIUUsuariobuscarlivro::comandosusuarioautenticado(ILNComandosusuarioautenticado* cntrLNComandosusuarioautenticado) throw(runtime_error){
    
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

    resultado = cntrLNComandosusuarioautenticado->buscarlivro(titulo);

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
}

void ComandoIUUsuariobuscarusuario::comandosusuarioautenticado(ILNComandosusuarioautenticado* cntrLNComandosusuarioautenticado) throw(runtime_error){
    
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

    resultado = cntrLNComandosusuarioautenticado->buscarusuario(apelido);

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
}