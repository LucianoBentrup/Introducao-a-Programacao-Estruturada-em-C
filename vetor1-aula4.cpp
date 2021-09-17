#include <iostream>
using namespace std; 



#define MAX 12
void exibir(int v[]) 
{

    for (int x=0; x<=MAX;x++)
    {
        if (v[x] > 30) 
            cout << "Indice [" <<x<< "]" << v[x] <<endl;
    }
}

int main()
{

    
    int vetor[]={0,50,20,78,100,89,15,16,46,63,82,78};
    int vetor1[]={0,50,20,78,100,89,15,16,46,63,82,80};

    cout << "Os valores sao: " << endl;
    exibir(vetor);
}




