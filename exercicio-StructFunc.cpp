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

    
        void exibir()
        {
        cout << "Nome:" << p.nome; 
        cout << "Idade:" << p.idade;
        }//Fim funcao "exibir"

    int main()
    {
        // Inicio Menu
        cout << "===============Menu===============" << endl;
        cout << "Opcoes:" << endl;
        cout << "1 - Cadastrar" <<endl;
        cout << "2 - Exibir" << endl; 
        cout << "9 - Sair" << endl;
        cout << "Qual opcao voce deseja executar" << endl;
        cin >> opcao; 
        // Fim Menu

        // Switch :)
        switch (opcao)
        {
            case 1: cadastrar(); break;
            case 2: exibir(); break;
            case 9: cout << "Obrigado por usar meu programa!"; break;
            default: cout << "Opcao Invalida! Tente novamente com uma das opcoes acima."; break;
            
        }// Fim Switch 
        
        

    } // Fim main

