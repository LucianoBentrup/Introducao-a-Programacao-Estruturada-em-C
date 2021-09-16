#include <iostream>
using namespace std;

int exerc3 (int idade)
{
    idade = idade - 2021;
    return idade; 
}

int main()
{
    int idade; 

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Ano de nascimento:" << exerc3(idade) << endl; 

}