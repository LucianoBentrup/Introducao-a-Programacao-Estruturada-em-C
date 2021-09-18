#include <iostream>
using namespace std; 



#define MAX 12
void exibir(int v[]) 
{
    int soma;
    for (int x=0; x<MAX;x++)
    {
       soma = soma + v[x];
       cout << "Indices [" << x << "] :" << v[x] << endl; 
    }

cout << "Soma = " << soma << endl;

}

int main()
{

    
    int vetor[]={0,50,20,78,100,89,15,16,46,63,82,78};

    
    exibir(vetor);
}




