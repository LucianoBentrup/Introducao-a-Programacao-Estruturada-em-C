#include <iostream>
using namespace std;

int exerc4 (int ano)
{
    int idade;
    idade = 2021 - ano;

    return ano; 
}

int main()
{
    int idade; 
    int ano;

    cout << "Digite seu ano de nascimento: ";
    cin >> ano;

    cout << "Sua idade:" << exerc4(idade) << endl; 

}