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

    ContainerLivro *ContLivro;
    ContLivro = new ContainerLivro();

    usuario.setNome(nome.getNome());
    usuario.setApelido(apelido.getApelido());
    usuario.setSenha(senha.getSenha());
    usuario.setTelefone(telefone.getTelefone());
    usuario.setContainer(ContLivro);

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

    ContainerResenha *ContResenha;
    ContResenha = new ContainerResenha();

    livro.setAutor(autor.getNome());
    livro.setCodigo(codigo.getCodigo());
    livro.setData(data.getData());
    livro.setGenero(genero.getGenero());
    livro.setTitulo(titulo.getTitulo());
    livro.setContainer(ContResenha);

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

Resultado CTRLAutenticacao::autenticar(Usuario** user) throw(runtime_error){
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

    resultado = ContUsuario->autenticar(apelido, senha, user);

    if(resultado.getValor() == Resultado::FALHA_AUTENTICACAO){
        cout << endl << "Falha ao autenticar usuario" << endl<< endl;
    }

    return resultado;
}

CTRLRegistroresenha::CTRLRegistroresenha(){
}

CTRLRegistroresenha::~CTRLRegistroresenha(){
}

Resultado CTRLRegistroresenha::registrarresenha(string entrada_titulo, string entrada_autor) throw(runtime_error){
    ///Método de registramento de resenha da controladora

    Resultado resultado;
    Nome autor;
    Titulo titulo;
    Texto texto;
    Resenha resenha;
    string entrada_texto;

    autor.setNome(entrada_autor);
    titulo.setTitulo(entrada_titulo);

    while(true){

        try{

            cout << endl << "**************************************************" << endl;
            cout << "Habilitado insercao da resenha.....:" << endl;
            cout << endl << "**************************************************" << endl << endl;

            cout << "**************************************************" << endl;
            cout << "Informe o Texto da resenha:" << endl;
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

Resultado CTRLBuscarlivro::buscarlivro(Livro** livro) throw(runtime_error){
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

    resultado = ContLivro->buscar(titulo, livro);

    if(resultado.getValor() == Resultado::FALHA_BUSCA_LIVRO){
        cout << endl << "Falha ao buscar livro" << endl;
        cout << "Pressione Enter para continuar" << endl << endl;
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
    else if(resultado.getValor() == Resultado::TROCA_NAO_ENCONTRADO){
        cout << endl << "**************************************************" << endl;
        cout << "Livro nao disponivel para troca" << endl;
        cout << "**************************************************" << endl << endl;
    }

    return resultado;
}

CTRLRemoverLivro::CTRLRemoverLivro(){
}

CTRLRemoverLivro::~CTRLRemoverLivro(){
}

Resultado CTRLRemoverLivro::removerLivro() throw(runtime_error){
    ///Método de troca de livros da controladora

    Resultado resultado;
    Titulo titulo;
    string entrada_titulo;

    while(true){

        try{
            getchar();
            cout << "**************************************************" << endl;
            cout << "Informe o Título do livro que deseja remover :" << endl;
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

    resultado = ContLivro->remover(titulo);


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

    //Declaracao de ponteiros

    Usuario* user = NULL;
    Livro* book = NULL;

    //Declaracao de Containers

    ContainerUsuario *ContUsuario;
    ContUsuario = new ContainerUsuario();

    ///Cadastro Usuario

    IUCadastro *cntrCadastro;
    cntrCadastro = new CTRLCadastro();

    cntrCadastro->setContainer(ContUsuario);

    ///Cadastro Livro

    IUCadastrolivro *cntrCadastrolivro;
    cntrCadastrolivro = new CTRLCadastrolivro();


    ///Autenticação

    IUAutenticacao *cntrAutenticacao;
    cntrAutenticacao = new CTRLAutenticacao();

    cntrAutenticacao->setContainer(ContUsuario);

    ///Registro Resenha

    IURegistroresenha *cntrRegistroresenha;
    cntrRegistroresenha = new CTRLRegistroresenha();

    ///Buscar usuario

    IUBuscarusuario *cntrBuscarusuario;
    cntrBuscarusuario = new CTRLBuscarusuario();

    cntrBuscarusuario->setContainer(ContUsuario);

    ///Buscar livro

    IUBuscarlivro *cntrBuscarlivro;
    cntrBuscarlivro = new CTRLBuscarlivro();

    ///Trocar livro

    IUTrocarlivro *cntrTrocarlivro;
    cntrTrocarlivro = new CTRLTrocarlivro();

    ///Remover livro

    IURemoverLivro *cntrRemoverLivro;
    cntrRemoverLivro = new CTRLRemoverLivro();

    //Variaveis de interface

    Resultado resultado;
    int opcao;

    while (true){

        cout << "**************************************************" << endl;
        cout << "Bem vindo a Biblioteca Virtual :" << endl;
        cout << "Escolha a opcao entre as abaixo :" << endl;
        cout << "Sair do sistema - " << SAIR<< endl;
        cout << "Cadastrar Usuario - " << CADASTRAR_USUARIO << endl;
        cout << "Autenticar Usuario - " << AUTENTICAR_USUARIO << endl;
        cout << "**************************************************" << endl<< endl;
        cin >> opcao;

        switch (opcao){
            case SAIR:

                break;
            case CADASTRAR_USUARIO:

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
            case AUTENTICAR_USUARIO:

                try
                {
                    resultado = cntrAutenticacao->autenticar(&user);
                    if (resultado.getValor() == Resultado::SUCESSO_AUTENTICACAO)
                    {
                        while (true)
                        {
                            cout << "**************************************************" << endl;
                            cout << "Bem vindo " << user->getApelido() << " ..." << endl;
                            cout << "Escolha a opcao entre as abaixo :" << endl;
                            cout << "Buscar Usuario - " << BUSCAR_USUARIO << endl;
                            cout << "Cadastrar Livro - " << CADASTRAR_LIVRO << endl;
                            cout << "Remover Livro - " << REMOVER_LIVRO << endl;
                            cout << "Buscar Livro - " << BUSCAR_LIVRO << endl;
                            cout << "Trocar Livro - " << TROCAR_LIVRO << endl;
                            cout << "Registrar Resenha - " << REGISTRAR_RESENHA << endl;
                            cout << "Deslogar do Sistema - " << DESLOGAR << endl;
                            cout << "**************************************************" << endl<< endl;
                            cin >> opcao;

                            switch(opcao){
                                case BUSCAR_USUARIO:

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

                                case CADASTRAR_LIVRO:

                                    while (true)
                                    {
                                        try
                                        {
                                            cntrCadastrolivro->setContainer(user->getContainer());
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

                                case REMOVER_LIVRO:

                                        while (true)
                                    {
                                        try
                                        {
                                            cntrRemoverLivro->setContainer(user->getContainer());
                                            resultado = cntrRemoverLivro->removerLivro();
                                            if (resultado.getValor() == Resultado::SUCESSO_REMOVE_LIVRO || resultado.getValor() == Resultado::TROCA_NAO_ENCONTRADO)
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

                                case BUSCAR_LIVRO:

                                    while (true)
                                    {
                                        try
                                        {
                                            cntrBuscarlivro->setContainer(user->getContainer());
                                            resultado = cntrBuscarlivro->buscarlivro(&book);
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

                                case TROCAR_LIVRO:

                                        while (true)
                                    {
                                        try
                                        {
                                            cntrTrocarlivro->setContainer(user->getContainer());
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

                                case REGISTRAR_RESENHA:

                                    while (true)
                                    {
                                        try
                                        {


                                            while (true)
                                            {
                                                try
                                                {
                                                    
                                                    cout << endl<< "**************************************************" << endl;
                                                    cout << "Iniciando busca pelo livro da resenha.... :" << endl;
                                                    cout << endl << "**************************************************" << endl<<endl;

                                                    cntrBuscarlivro->setContainer(user->getContainer());
                                                    resultado = cntrBuscarlivro->buscarlivro(&book);
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

                                            if (resultado.getValor() == Resultado::FALHA_BUSCA_LIVRO || resultado.getValor() == Resultado::LIVRO_NAO_ENCONTRADO)
                                            {
                                                break;
                                            }

                                            cntrRegistroresenha->setContainer(book->getContainer());
                                            resultado = cntrRegistroresenha->registrarresenha(book->getTitulo(), user->getNome());
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

                                case DESLOGAR:

                                    break;

                                default:
                                    cout << "Valor invalido, informe novamente" << endl << endl;
                                    break;

                            }

                            if(opcao == DESLOGAR){
                                break;
                            }
                        }
                    }
                }
                catch (const runtime_error &exp)
                {
                    cout << "Erro de Sistema" << endl;
                    cout << "Pressione Enter para continuar" << endl;
                }

                break;

            default:
                cout << "Valor invalido, informe novamente" << endl << endl;
                break;

            }
        if(opcao == SAIR){
            break;
        }
    }

    delete cntrCadastro;
    delete cntrCadastrolivro;
    delete cntrAutenticacao;
    delete cntrRegistroresenha;
    delete cntrBuscarlivro;
    delete cntrBuscarusuario;
    delete cntrTrocarlivro;
    delete cntrRemoverLivro;
}
