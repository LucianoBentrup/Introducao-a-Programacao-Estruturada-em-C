#include <iostream>
using namespace std;


//Pessoa = nome + idade
//Fazer cadastro 
//Exibir cadastros 
//Menu com opção de 1 - Cadastrar 2 - Exibir 9 - Sair 

int opcao; //Para Escolher a opcao no menu.

    struct pessoa
    {
    string nome;
    int idade;
    };//fim estrutra "pessoa".

    pessoa p; // Estrutura "pessoa" = p 
 
    void cadastrar()    
    {
        cout << "Insira seu nome:";
        cin >> p.nome; 
        cout << "Insira sua idade:";
        cin >> p.idade;

            bool int_idade, string_nome; //True or false
            int_idade=((int)p.idade == p.idade);
            string_nome=((string)p.nome == p.nome);

            if (int_idade&&string_nome)
                cout << "Cadastro efetuado com sucesso!";
            else 
                cout << "Falha ao cadastrar!";

    }//Fim Funcao "cadastrar"

