#include <iostream>
using namespace std;
/**
nome -- string
idade -- int
salario -- float
*/

struct Pessoa {
  string nome;
  int idade;
  float salario;
};

struct Veiculo {
  string marca;
  int qtdrodas;
};


int main() {
  Pessoa p;
  Veiculo carro;

  cout << "\n Cadastro de Pessoas\n";

  cout<<"\nDigite nome: \n";
  cin>>p.nome;

  cout<<"\nDigite idade: \n";
  cin>>p.idade;

  cout<<"\nDigite salario: \n";
  cin>>p.salario;

  cout<<"\nDigite a marca do seu carro";
  cin>>carro.marca;

  cout<<"\n\n Nome: "<<p.nome<<endl;
  cout<<"\n\n Idade: "<<p.idade<<endl;
  cout<<"\n\n Salario: "<<p.salario<<endl;
  cout<<"\n\n Carro: "<<carro.marca<<endl;

}