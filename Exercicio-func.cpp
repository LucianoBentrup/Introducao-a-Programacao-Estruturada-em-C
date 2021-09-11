#include <iostream>
using namespace std;

/**
Faca um prgrama para simular uma calculadora:

le 2 valores escolhe a operacao e exibe o resultado 

1 - somar
2 - subtrair
3 - multiplicar
4 - dividir
9 - sair 

*/

float soma(float a, float b) {
  return (a + b); //funcao soma
}

float subtracao(float a, float b) {
  return (a - b); //funcao sub
}
float multiplicacao(float a, float b) {
  return (a * b); //funcao multiplicacao
}
float divisao(float a, float b) {
  return (a / b); //funcao divisao 
}



int main() {

  float v1=0, v2=0;
  int opcao=0; 

  while (opcao != 9){

     // Menu

    cout << "========Menu=========" << endl;
    cout<<"\n 1 - somar \n";
    cout<<"\n 2 - subtrair \n";
    cout<<"\n 3 - multiplicar \n";
    cout<<"\n 4 - dividir \n";
    cout<<"\n 9 - sair \n";
    cout<<"\n Escolha a operacao \n";
    cin>>opcao; 
    //opções para o menu 


    cout << "Insira os valores:" << endl; 
    cout<<"\nDigite valor 1:\n";
    cin>>v1;
    cout<<"\nDigite valor 2:\n";
    cin>>v2;

   

    if (opcao ==1 ) {
        cout << v1 << "+" << v2 << "=" << soma(v1,v2)<<endl;
    }else if (opcao == 2) {
        cout << v1 << "-" << v2 << "=" << subtracao(v1,v2)<<endl;
    }else if (opcao == 3) {
        cout << v1 << "*" << v2 << "=" << multiplicacao(v1,v2)<<endl;
    }else if (opcao == 4) {
        cout << v1 << "/" << v2 << "=" << divisao(v1,v2)<<endl;
    }else if (opcao != 9) {
      cout<<"\n*******************\n";
      cout << "\n\t Opcao invalida\n\n";
      cout<<"\n********************\n";
    }


  }
}
