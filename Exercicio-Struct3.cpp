#include <iostream>
using namespace std;

/**
  Estrutura dentro de outra estrutura
*/
struct Data {
  string dia;
  string mes;
  string ano;
};

struct Pessoa {
 string nome;
 int idade;
 Data dataNascimento;
 Data dataConclusaoCurso;
};

int main() {
  Pessoa p[2];
   
  cout << "\nCadastro de pessoas\n";

  for(int x=0;x<2;x++) {
    cout<<"\nDigite nome:\n";
    cin>>p[x].nome;

    cout<<"\nDigite idade:\n";
    cin>>p[x].idade;

    cout<<"\n"<<p[x].nome<<" "<<p[x].idade<<endl;
  }
  
  if(p[0].idade > p[1].idade) {
    cout<<   p[0].idade <<" Maior";
  }else {
    cout<<   p[1].idade <<" Maior";
  }


}