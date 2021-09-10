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
        cout << "Insira seu nome:"
        cin >> p.nome; 
        cout << Insira sua idade;
        cin >> p.idade
        
            if (p.nome==string && p.idade==int)
                cout << "Cadastro efetuado com sucesso!";
            else 
                cout << "Falha ao cadastrar!";

    }//Fim Funcao "cadastrar"

