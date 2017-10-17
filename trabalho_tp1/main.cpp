#include <iostream>
#include <cstdio>
#include "dominios.h"
#include "entidades.h"
#include "TUdominios.h"
#include "TUentidades.h"
#include "interfaces.h"
#include "controladoras.h"
#include "comandos.h"
#include "stubs.h"

using namespace std;

int main(){

    ///Cadastro Usuário

    IUCadastro *cntrCadastro;
    cntrCadastro = new CTRLCadastro();

    ILNCadastro *stubLNCadastro;
    stubLNCadastro = new STUBCadastro();

    cntrCadastro->setCntrLNCadastro(stubLNCadastro);

    ///Cadastro Livro

    IUCadastrolivro *cntrCadastrolivro;
    cntrCadastrolivro = new CTRLCadastrolivro();

    ILNCadastrolivro *stubLNCadastrolivro;
    stubLNCadastrolivro = new STUBCadastrolivro();

    cntrCadastrolivro->setCntrLNCadastrolivro(stubLNCadastrolivro);

    ///Autenticação

    IUAutenticacao *cntrAutenticacao;
    cntrAutenticacao = new CTRLAutenticacao();

    ILNAutenticacao *stubLNAutenticacao;
    stubLNAutenticacao = new STUBAutenticacao();

    cntrAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);

    ///Registro Resenha

    IURegistroresenha *cntrRegistroresenha;
    cntrRegistroresenha = new CTRLRegistroresenha();

    ILNRegistroresenha *stubLNRegistroresenha;
    stubLNRegistroresenha = new STUBRegistroresenha();

    cntrRegistroresenha->setCntrLNRegistroresenha(stubLNRegistroresenha);
    
    ///Buscar usuario

    IUBuscarusuario *cntrBuscarusuario;
    cntrBuscarusuario = new CTRLBuscarusuario();

    ILNBuscarusuario *stubLNBuscarusuario;
    stubLNBuscarusuario = new STUBBuscarusuario();

    cntrBuscarusuario->setCntrLNBuscarusuario(stubLNBuscarusuario);

    ///Buscar livro

    IUBuscarlivro *cntrBuscarlivro;
    cntrBuscarlivro = new CTRLBuscarlivro();

    ILNBuscarlivro *stubLNBuscarlivro;
    stubLNBuscarlivro = new STUBBuscarlivro();

    cntrBuscarlivro->setCntrLNBuscarlivro(stubLNBuscarlivro);

    ///Trocar livro

    IUTrocarlivro *cntrTrocarlivro;
    cntrTrocarlivro = new CTRLTrocarlivro();

    ILNTrocarlivro *stubLNTrocarlivro;
    stubLNTrocarlivro = new STUBTrocarlivro();

    cntrTrocarlivro->setCntrLNTrocarlivro(stubLNTrocarlivro);

    ///Comandos de usuario

    IUComandosusuarioautenticado *cntrComandosusuarioautenticado;
    cntrComandosusuarioautenticado = new CTRLComandosusuarioautenticado();

    ILNComandosusuarioautenticado *stubLNComandosusuarioautenticado;
    stubLNComandosusuarioautenticado = new STUBComandosusuarioautenticado();

    cntrComandosusuarioautenticado->setCntrLNComandosusuarioautenticado(stubLNComandosusuarioautenticado); 

    ///Variaveis e constantes da main

    int SAIDA = 0;
    int opcao_escolhida;
    Resultado resultado;

    ///Apresentação dos triggers e valores invalidos

    cout << "APRESENTACAO DE VALORES INVALIDOS E TRIGGERS" << endl << endl;

    cout << endl << "VALORES DOS TRIGGERS (cadastro usuario):" << endl;
    cout << "Nome inválido = " << Nome::NOME_INVALIDO << endl;
    cout << "Apelido inválido = " << Apelido::APELIDO_INVALIDO << endl;
    cout << "Senha inválida = " << Senha::SENHA_INVALIDO << endl;
    cout << "Telefone inválido = " << Telefone::TELEFONE_INVALIDO << endl;
    cout << "Trigger de falha (apelido) = " << STUBCadastro::TRIGGER_FALHA_CADASTRO << endl;
    cout << "Trigger de erro de sistema (apelido) = " << STUBCadastro::TRIGGER_ERRO_SISTEMA_CADASTRO << endl << endl;

    cout << endl << "VALORES DOS TRIGGERS (cadastro livro):" << endl;
    cout << "Titulo inválido = " << Titulo::TITULO_INVALIDO << endl;
    cout << "Autor inválido = " << Nome::NOME_INVALIDO << endl;
    cout << "Data inválida = " << Data::DATA_INVALIDO << endl;
    cout << "Codigo inválido = " << Codigo::CODIGO_INVALIDO << endl;
    cout << "Genero inválido = " << Genero::GENERO_INVALIDO << endl;
    cout << "Trigger de falha (data) = " << STUBCadastrolivro::TRIGGER_FALHA_CADASTRO_LIVRO << endl;
    cout << "Trigger de erro de sistema (data) = " << STUBCadastrolivro::TRIGGER_ERRO_SISTEMA_CADASTRO_LIVRO << endl << endl;

    cout << endl << "VALORES DOS TRIGGERS (autenticação):" << endl;
    cout << "Apelido inválido = " << Apelido::APELIDO_INVALIDO<< endl;
    cout << "Senha inválida = " << Senha::SENHA_INVALIDO<< endl;
    cout << "Trigger de falha (senha) = " << STUBAutenticacao::TRIGGER_FALHA_AUTENTICACAO << endl;
    cout << "Trigger de erro de sistema (senha) = " << STUBAutenticacao::TRIGGER_ERRO_SISTEMA_AUTENTICACAO << endl << endl;

    cout << endl << "VALORES DOS TRIGGERS (registro resenha):" << endl;
    cout << "Autor inválido = " << Nome::NOME_INVALIDO << endl;
    cout << "Titulo inválido = " << Titulo::TITULO_INVALIDO << endl;
    cout << "Texto inválido = " << Texto::TEXTO_INVALIDO << endl;
    cout << "Trigger de falha (senha) = " << STUBRegistroresenha::TRIGGER_FALHA_REGISTRO_RESENHA << endl;
    cout << "Trigger de erro de sistema (senha) = " << STUBRegistroresenha::TRIGGER_ERRO_SISTEMA_REGISTRO_RESENHA << endl << endl;

    cout << endl << "VALORES DOS TRIGGERS (buscar usuario):" << endl;
    cout << "Nome inválido = " << Nome::NOME_INVALIDO << endl;
    cout << "Trigger de falha (apelido) = " << STUBBuscarusuario::TRIGGER_FALHA_BUSCAR_USUARIO << endl;
    cout << "Trigger de erro de sistema (apelido) = " << STUBBuscarusuario::TRIGGER_ERRO_SISTEMA_BUSCAR_USUARIO << endl;
    cout << "Usuario já cadastrado (apelido) = " << STUBBuscarusuario::USUARIO_CADASTRADO << endl << endl;

    cout << endl << "VALORES DOS TRIGGERS (buscar livro):" << endl;
    cout << "Titulo inválido = " << Titulo::TITULO_INVALIDO << endl;
    cout << "Trigger de falha (titulo) = " << STUBBuscarlivro::TRIGGER_FALHA_BUSCAR_LIVRO << endl;
    cout << "Trigger de erro de sistema (titulo) = " << STUBBuscarlivro::TRIGGER_ERRO_SISTEMA_BUSCAR_LIVRO << endl;
    cout << "Livro já cadastrado (titulo) = " << STUBBuscarlivro::LIVRO_CADASTRADO << endl << endl;

    cout << endl << "VALORES DOS TRIGGERS (trocar livro):" << endl;
    cout << "Titulo inválido = " << Titulo::TITULO_INVALIDO << endl;
    cout << "Trigger de falha (titulo) = " << STUBTrocarlivro::TRIGGER_FALHA_TROCAR_LIVRO << endl;
    cout << "Trigger de erro de sistema (titulo) = " << STUBTrocarlivro::TRIGGER_ERRO_SISTEMA_TROCAR_LIVRO << endl;
    cout << "Livro disponivel para troca (titulo) = " << STUBTrocarlivro::LIVRO_DISPONIVEL_TROCA << endl << endl;

    cout << endl << "VALORES DOS TRIGGERS (comandos de usuario autenticado):" << endl;
    cout << "Titulo inválido = " << Titulo::TITULO_INVALIDO << endl;
    cout << "Autor inválido = " << Nome::NOME_INVALIDO << endl;
    cout << "Data inválida = " << Data::DATA_INVALIDO << endl;
    cout << "Codigo inválido = " << Codigo::CODIGO_INVALIDO << endl;
    cout << "Genero inválido = " << Genero::GENERO_INVALIDO << endl;
    cout << "Texto inválido = " << Texto::TEXTO_INVALIDO << endl;
    cout << "Nome inválido = " << Nome::NOME_INVALIDO << endl;
    cout << "Trigger de falha (titulo) = " << STUBComandosusuarioautenticado::TRIGGER_FALHA_CADASTRO_LIVRO << endl;
    cout << "Trigger de erro de sistema (titulo) = " << STUBComandosusuarioautenticado::TRIGGER_ERRO_SISTEMA_CADASTRO_LIVRO << endl;
    cout << "Trigger de falha (senha) = " << STUBComandosusuarioautenticado::TRIGGER_FALHA_REGISTRO_RESENHA << endl;
    cout << "Trigger de erro de sistema (senha) = " << STUBComandosusuarioautenticado::TRIGGER_ERRO_SISTEMA_REGISTRO_RESENHA << endl;
    cout << "Trigger de falha (senha) = " << STUBComandosusuarioautenticado::TRIGGER_FALHA_REGISTRO_RESENHA << endl;
    cout << "Trigger de erro de sistema (senha) = " << STUBComandosusuarioautenticado::TRIGGER_ERRO_SISTEMA_REGISTRO_RESENHA << endl << endl;
    cout << "Livro disponivel para troca (titulo) = " << STUBComandosusuarioautenticado::LIVRO_DISPONIVEL_TROCA << endl ;
    cout << "Usuario já cadastrado (apelido) = " << STUBComandosusuarioautenticado::USUARIO_CADASTRADO << endl;
    cout << "Livro já cadastrado (titulo) = " << STUBComandosusuarioautenticado::LIVRO_CADASTRADO << endl;

    ///Apresentação do sistema

    cout << "**************************************************" << endl;
    cout << "Bem vindo à biblioteca do Trabalho de TP1 - UNB" << endl;
    cout << "Informe a opção desejada entre as disponíveis abaixo:" << endl;
    cout << "Saída - 0" << endl << "Cadastro usuario - 1" << endl << "Cadastro livro - 2" << endl;
    cout << "Autenticacao - 3" << endl << "Registro resenha - 4" << endl << "Buscar usuario - 5" << endl;
    cout << "Buscar livro - 6" << endl << "Troca de livro - 7" << endl << "Comandos de usuario - 8" << endl; 
    cout << "**************************************************" << endl << endl;
    cin >> opcao_escolhida;
    cout << endl;

    while(opcao_escolhida != SAIDA){

        switch(opcao_escolhida){
            case 1:

                while(true){
                    try{
                        resultado = cntrCadastro->cadastrar();
                        if(resultado.getValor() == Resultado::SUCESSO_CADASTRO){
                            break;
                        }
                    }
                    catch(const runtime_error &exp){
                        cout << "Erro de Sistema" << endl;
                    }
                }
                break;

            case 2:

                while(true){
                    try{
                        resultado = cntrCadastrolivro->cadastrarlivro();
                        if(resultado.getValor() == Resultado::SUCESSO_CADASTRO_LIVRO){
                            break;
                        }
                    }
                    catch(const runtime_error &exp){
                        cout << "Erro de Sistema" << endl;
                    }
                }
                break;

            case 3:
            
                while(true){
                    try{
                        resultado = cntrAutenticacao->autenticar();
                        if(resultado.getValor() == Resultado::SUCESSO_AUTENTICACAO){
                            break;
                        }
                    }
                    catch(const runtime_error &exp){
                        cout << "Erro de Sistema" << endl;
                    }
                }
                break;

            case 4:
            
                while(true){
                    try{
                        resultado = cntrRegistroresenha->registrarresenha();
                        if(resultado.getValor() == Resultado::SUCESSO_REGISTRO_RESENHA){
                            break;
                        }
                    }
                    catch(const runtime_error &exp){
                        cout << "Erro de Sistema" << endl;
                    }
                }
                break;

            case 5:
            
                while(true){
                    try{
                        resultado = cntrBuscarusuario->buscarusuario();
                        if(resultado.getValor() == Resultado::SUCESSO_BUSCA_USUARIO || resultado.getValor() == Resultado::USUARIO_NAO_ENCONTRADO){
                            break;
                        }
                    }
                    catch(const runtime_error &exp){
                        cout << "Erro de Sistema" << endl;
                    }
                }
                break;

            case 6:
            
                while(true){
                    try{
                        resultado = cntrBuscarlivro->buscarlivro();
                        if(resultado.getValor() == Resultado::SUCESSO_BUSCA_LIVRO || resultado.getValor() == Resultado::LIVRO_NAO_ENCONTRADO){
                            break;
                        }
                    }
                    catch(const runtime_error &exp){
                        cout << "Erro de Sistema" << endl;
                    }
                }
                break;

                case 7:
                
                    while(true){
                        try{
                            resultado = cntrTrocarlivro->trocarlivro();
                            if(resultado.getValor() == Resultado::SUCESSO_TROCA_LIVRO || resultado.getValor() == Resultado::TROCA_NAO_ENCONTRADO){
                                break;
                            }
                        }
                        catch(const runtime_error &exp){
                            cout << "Erro de Sistema" << endl;
                        }
                    }
                    break;

                case 8:
                
                    while(true){
                        try{
                            cntrComandosusuarioautenticado->comandosusuarioautenticado();
                            break;
                        }
                        catch(const runtime_error &exp){
                            cout << "Erro de Sistema" << endl;
                        }
                    }
                    break;
        }

        cout << endl;
        cout << "**************************************************" << endl;
        cout << "Informe a operação desejada" << endl;
        cout << "Saída - 0" << endl << "Cadastro - 1" << endl << "Cadastro livro - 2" << endl;
        cout << "Autenticacao - 3" << endl << "Registro resenha - 4" << endl << "Buscar usuario - 5" << endl;
        cout << "Buscar livro - 6" << endl << "Troca de livro - 7" << endl << "Comandos de usuario - 8" << endl; 
        cout << "**************************************************" << endl << endl;
        cin >> opcao_escolhida;
        cout << endl;
    }

    cout << "**************************************************" << endl;
    cout << "!!!FINALIZANDO O SISTEMA!!!" << endl;
    cout << "**************************************************" << endl << endl;

    ///Deletando objetos criados anteriormente

    delete cntrCadastro;
    delete cntrCadastrolivro;
    delete stubLNCadastro;
    delete stubLNCadastrolivro;
    delete cntrAutenticacao;
    delete stubLNAutenticacao;
    delete cntrRegistroresenha;
    delete stubLNRegistroresenha;
    delete cntrBuscarusuario;
    delete stubLNBuscarusuario;
    delete cntrBuscarlivro;
    delete stubLNBuscarlivro;
    delete cntrTrocarlivro;
    delete stubLNTrocarlivro;
    delete cntrComandosusuarioautenticado;
    delete stubLNComandosusuarioautenticado;

    return 0;
}