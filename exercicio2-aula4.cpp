#include <iostream>
using namespace std; 

float exerc2(int idade,float salario)
{
    if (idade>20)
    {
        salario = salario + 50; 
    }
  
    
}

int main()
{
    int idade;
    float salario;

    cout << "Insira sua idade";
    cin >> idade;
    cout << "Insira seu salario";
    cin >> salario;

    cout << "Seu salario é de " << exerc2(idade,salario) << " reais"; 
}