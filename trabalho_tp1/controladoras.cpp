#include "controladoras.h"


CTRLCadastro::CTRLCadastro(){
}

CTRLCadastro::~CTRLCadastro(){
}

Resultado CTRLCadastro::cadastrar() throw(runtime_error){
    ///Método de cadastramento de usuario da controladora

    Resultado resultado;
    Nome nome;
    Apelido apelido;
    Senha senha;
    Telefone telefone;
    Usuario usuario;
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
            cout << endl << "Entrada(s) invalida(s), informe novamente." << endl;
            cout << "Pressione Enter para continuar" << endl << endl;
        }
    }

    usuario.setNome(nome.getNome());
    usuario.setApelido(apelido.getApelido());
    usuario.setSenha(senha.getSenha());
    usuario.setTelefone(telefone.getTelefone());

    resultado = ContUsuario->cadastrar(usuario);

    if(resultado.getValor() == Resultado::FALHA_CADASTRO){
        cout << endl << "Falha ao cadastrar usuario" << endl;
        cout << "Pressione Enter para continuar" << endl << endl;
    }

    return resultado;
}

CTRLCadastrolivro::CTRLCadastrolivro(){
}

CTRLCadastrolivro::~CTRLCadastrolivro(){
}

Resultado CTRLCadastrolivro::cadastrarlivro() throw(runtime_error){
    ///Método de cadastramento de livro da controladora

    Resultado resultado;
    Titulo titulo;
    Nome autor;
    Data data;
    Codigo codigo;
    Genero genero;
    Livro livro;
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
            cout << endl << "Entrada(s) invalida(s), informe novamente." << endl;
            cout << "Pressione Enter para continuar" << endl << endl;
        }
    }

    livro.setAutor(autor.getNome());
    livro.setCodigo(codigo.getCodigo());
    livro.setData(data.getData());
    livro.setGenero(genero.getGenero());
    livro.setTitulo(titulo.getTitulo());

    resultado = ContLivro->cadastrar(livro);

    if(resultado.getValor() == Resultado::FALHA_CADASTRO_LIVRO){
        cout << endl << "Falha ao cadastrar livro" << endl;
        cout << "Pressione Enter para continuar" << endl << endl;
    }

    return resultado;
}

CTRLAutenticacao::CTRLAutenticacao(){
}

CTRLAutenticacao::~CTRLAutenticacao(){
}

Resultado CTRLAutenticacao::autenticar() throw(runtime_error){
    ///Método de autenticação da controladora

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
            cout << endl << "Entrada(s) invalida(s), informe novamente." << endl;
            cout << "Pressione Enter para continuar" << endl << endl;
        }
    }

    resultado = ContUsuario->autenticar(apelido, senha);

    if(resultado.getValor() == Resultado::FALHA_AUTENTICACAO){
        cout << endl << "Falha ao autenticar usuario" << endl;
        cout << "Pressione Enter para continuar" << endl << endl;
    }

    return resultado;
}

CTRLRegistroresenha::CTRLRegistroresenha(){
}

CTRLRegistroresenha::~CTRLRegistroresenha(){
}

Resultado CTRLRegistroresenha::registrarresenha() throw(runtime_error){
    ///Método de registramento de resenha da controladora

    Resultado resultado;
    Nome autor;
    Titulo titulo;
    Texto texto;
    Resenha resenha;
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
            cout << endl << "Entrada(s) invalida(s), informe novamente." << endl;
            cout << "Pressione Enter para continuar" << endl << endl;
        }
    }

    resenha.setAutor(autor.getNome());
    resenha.setTexto(texto.getTexto());
    resenha.setTitulo(titulo.getTitulo());

    resultado = ContResenha->cadastrar(resenha);

    if(resultado.getValor() == Resultado::FALHA_REGISTRO_RESENHA){
        cout << endl << "Falha ao registrar resenha" << endl;
        cout << "Pressione Enter para continuar" << endl << endl;
    }

    return resultado;
}

CTRLBuscarusuario::CTRLBuscarusuario(){
}

CTRLBuscarusuario::~CTRLBuscarusuario(){
}

Resultado CTRLBuscarusuario::buscarusuario() throw(runtime_error){
    ///Método de busca de usuarios da controladora

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
            cout << endl << "Entrada(s) invalida(s), informe novamente." << endl;
            cout << "Pressione Enter para continuar" << endl << endl;
        }
    }

    resultado = ContUsuario->buscar(apelido);

    if(resultado.getValor() == Resultado::USUARIO_NAO_ENCONTRADO){
        cout << endl << "**************************************************" << endl;
        cout << "Usuario nao encontrado" << endl;
        cout << "**************************************************" << endl << endl;
    }

    return resultado;
}

CTRLBuscarlivro::CTRLBuscarlivro(){
}

CTRLBuscarlivro::~CTRLBuscarlivro(){
}

Resultado CTRLBuscarlivro::buscarlivro() throw(runtime_error){
    ///Método de busca de livros da controladora

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
            cout << endl << "Entrada(s) invalida(s), informe novamente." << endl;
            cout << "Pressione Enter para continuar" << endl << endl;
        }
    }

    resultado = ContLivro->buscar(titulo);

    if(resultado.getValor() == Resultado::FALHA_BUSCA_LIVRO){
        cout << endl << "Falha ao buscar livro" << endl;
        cout << "Pressione Enter para continuar" << endl << endl;
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
        cout << "Livro nao encontrado" << endl;
        cout << "**************************************************" << endl << endl;
    }

    return resultado;
}

CTRLTrocarlivro::CTRLTrocarlivro(){
}

CTRLTrocarlivro::~CTRLTrocarlivro(){
}

Resultado CTRLTrocarlivro::trocarlivro() throw(runtime_error){
    ///Método de troca de livros da controladora

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
            cout << endl << "Entrada(s) invalida(s), informe novamente." << endl;
            cout << "Pressione Enter para continuar" << endl << endl;
        }
    }

    resultado = ContLivro->trocar(titulo);

    if(resultado.getValor() == Resultado::FALHA_TROCA_LIVRO){
        cout << endl << "Falha ao buscar titulo do livro para troca" << endl;
        cout << "Pressione Enter para continuar" << endl << endl;
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
        cout << "Livro nao disponivel para troca" << endl;
        cout << "**************************************************" << endl << endl;
    }

    return resultado;
}

CTRLInterfaceUsuario::CTRLInterfaceUsuario()
{
}

CTRLInterfaceUsuario::~CTRLInterfaceUsuario()
{
}

void CTRLInterfaceUsuario::interfaceUsuario() throw(runtime_error){
    //Controladora da Interface de Usuario

    //Declaracao de Containers

    ContainerUsuario *ContUsuario;
    ContUsuario = new ContainerUsuario();

    ContainerLivro *ContLivro;
    ContLivro = new ContainerLivro();

    ContainerResenha *ContResenha;
    ContResenha = new ContainerResenha();

    ///Cadastro Usuario

    IUCadastro *cntrCadastro;
    cntrCadastro = new CTRLCadastro();

    cntrCadastro->setContainer(ContUsuario);

    ///Cadastro Livro

    IUCadastrolivro *cntrCadastrolivro;
    cntrCadastrolivro = new CTRLCadastrolivro();

    cntrCadastrolivro->setContainer(ContLivro);

    ///Autenticação

    IUAutenticacao *cntrAutenticacao;
    cntrAutenticacao = new CTRLAutenticacao();

    cntrAutenticacao->setContainer(ContUsuario);

    ///Registro Resenha

    IURegistroresenha *cntrRegistroresenha;
    cntrRegistroresenha = new CTRLRegistroresenha();

    cntrRegistroresenha->setContainer(ContResenha);

    ///Buscar usuario

    IUBuscarusuario *cntrBuscarusuario;
    cntrBuscarusuario = new CTRLBuscarusuario();

    cntrBuscarusuario->setContainer(ContUsuario);

    ///Buscar livro

    IUBuscarlivro *cntrBuscarlivro;
    cntrBuscarlivro = new CTRLBuscarlivro();

    cntrBuscarlivro->setContainer(ContLivro);

    ///Trocar livro

    IUTrocarlivro *cntrTrocarlivro;
    cntrTrocarlivro = new CTRLTrocarlivro();

    cntrTrocarlivro->setContainer(ContLivro);

    //Variaveis de interface

    Resultado resultado;
    int opcao;

    while (true)
    {
        cout << "**************************************************" << endl;
        cout << "Selecione uma opcao, entre as abaixo, como usuario autenticado :" << endl;
        cout << "Retornar ao menu - " << SAIR<< endl;
        cout << "Incluir livro - " << CADASTRAR_LIVRO << endl;
        cout << "Remover livro - " << REMOVER_LIVRO << endl;
        cout << "Registrar resenha - " << REGISTRAR_RESENHA << endl;
        cout << "Trocar livro - " << TROCAR_LIVRO << endl;
        cout << "Buscar livro - " << BUSCAR_LIVRO << endl;
        cout << "Buscar usuario - " << BUSCAR_USUARIO << endl;
        cout << "**************************************************" << endl<< endl;
        cin >> opcao;

        switch (opcao){
            case 1:

                while (true)
                {
                    try
                    {
                        resultado = cntrCadastro->cadastrar();
                        if (resultado.getValor() == Resultado::SUCESSO_CADASTRO)
                        {
                            break;
                        }
                    }
                    catch (const runtime_error &exp)
                    {
                        cout << "Erro de Sistema" << endl;
                        cout << "Pressione Enter para continuar" << endl;
                    }
                }
                break;

            case 2:

                while (true)
                {
                    try
                    {
                        resultado = cntrCadastrolivro->cadastrarlivro();
                        if (resultado.getValor() == Resultado::SUCESSO_CADASTRO_LIVRO)
                        {
                            break;
                        }
                    }
                    catch (const runtime_error &exp)
                    {
                        cout << "Erro de Sistema" << endl;
                        cout << "Pressione Enter para continuar" << endl;
                    }
                }
                break;

            case 3:

                while (true)
                {
                    try
                    {
                        resultado = cntrAutenticacao->autenticar();
                        if (resultado.getValor() == Resultado::SUCESSO_AUTENTICACAO)
                        {
                            break;
                        }
                    }
                    catch (const runtime_error &exp)
                    {
                        cout << "Erro de Sistema" << endl;
                        cout << "Pressione Enter para continuar" << endl;
                    }
                }
                break;

            case 4:

                while (true)
                {
                    try
                    {
                        resultado = cntrRegistroresenha->registrarresenha();
                        if (resultado.getValor() == Resultado::SUCESSO_REGISTRO_RESENHA)
                        {
                            break;
                        }
                    }
                    catch (const runtime_error &exp)
                    {
                        cout << "Erro de Sistema" << endl;
                        cout << "Pressione Enter para continuar" << endl;
                    }
                }
                break;

            case 5:

                while (true)
                {
                    try
                    {
                        resultado = cntrBuscarusuario->buscarusuario();
                        if (resultado.getValor() == Resultado::SUCESSO_BUSCA_USUARIO || resultado.getValor() == Resultado::USUARIO_NAO_ENCONTRADO)
                        {
                            break;
                        }
                    }
                    catch (const runtime_error &exp)
                    {
                        cout << "Erro de Sistema" << endl;
                        cout << "Pressione Enter para continuar" << endl;
                    }
                }
                break;

            case 6:

                while (true)
                {
                    try
                    {
                        resultado = cntrBuscarlivro->buscarlivro();
                        if (resultado.getValor() == Resultado::SUCESSO_BUSCA_LIVRO || resultado.getValor() == Resultado::LIVRO_NAO_ENCONTRADO)
                        {
                            break;
                        }
                    }
                    catch (const runtime_error &exp)
                    {
                        cout << "Erro de Sistema" << endl;
                        cout << "Pressione Enter para continuar" << endl;
                    }
                }
                break;

            case 7:

                while (true)
                {
                    try
                    {
                        resultado = cntrTrocarlivro->trocarlivro();
                        if (resultado.getValor() == Resultado::SUCESSO_TROCA_LIVRO || resultado.getValor() == Resultado::TROCA_NAO_ENCONTRADO)
                        {
                            break;
                        }
                    }
                    catch (const runtime_error &exp)
                    {
                        cout << "Erro de Sistema" << endl;
                        cout << "Pressione Enter para continuar" << endl;
                    }
                }
                break;

            default:
                cout << "Valor invalido, informe novamente" << endl << endl;
                break;
            }

            if (opcao == SAIR)
            {
                break;
            }
        }

    delete cntrCadastro;
    delete cntrCadastrolivro;
    delete cntrAutenticacao;
    delete cntrRegistroresenha;
    delete cntrBuscarusuario;
    delete cntrBuscarlivro;
    delete cntrTrocarlivro;
}
