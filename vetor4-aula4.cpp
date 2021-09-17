#include <iostream>
using namespace std; 


#define MAX 12;
int valor (int v[]) 
{
    int menor = v[0]; 
    for (int x=0; x<MAX; x++)
    {
        if(int v[x]<menor)
        {
            menor = v[i];
        }
    }

return menor;

}

int main()
{
    int vetor[] {0,50,20,78,100,89,15,16,46,63,82,78};
    cout << "Os menor valor é " << valor(vetor); 

}