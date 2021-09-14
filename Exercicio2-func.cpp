#include <iostream>
using namespace std; 

/**
6 – EXERCICIO

Faça um programa para cadastrar no máximo 5 nomes. Deverá também exibir todos os nomes cadstrados. 
Utilize  conceito de menu.
Menu: 
1 - Cadastrar 
2 - exibir 
9 - Sair

*/

#define MAX 5 

struct pessoa 
{
    string nome; 

};//Fim pessoa 

pessoa p[MAX];
int indice=0;

void cadastrar()
{
    if(indice>=MAX)
    {
        cout << "Memoria cheia" << endl;
        return;
    }
  
    cout << "Insira seu nome: "; 
    cin >> p[indice].nome;
}//fim func cadastrar

void exibir()
{
    for (int x = 0; x<indice; x++)
    {
        cout<<"\nNome: ["<<x<<"]"<<p[x].nome;
    }
    
}// Fim exibir


int main()
{
    int opcao;


        // Inicio Menu
        while (opcao != 9)
        {
            cout << "===============Menu===============" << endl;
            cout << "Opcoes:" << endl;
            cout << "1 - Cadastrar" <<endl;
            cout << "2 - Exibir" << endl; 
            cout << "9 - Sair" << endl;
            cout << "Qual opcao voce deseja executar:";
            cin >> opcao; 


                switch (opcao)
                {
                    case 1: cadastrar(); break;
                    case 2: exibir(); break;
                    case 9: cout << "Ate logo!" << endl; break; 
                    default:
                    cout << "Insira uma das opções acima!" << endl; break;
                }//Fim switch
        
        }//fim while
        



}//Fim int main




