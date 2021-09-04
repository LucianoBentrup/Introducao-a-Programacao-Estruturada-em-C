#include <iostream>
using namespace std;

/**
  Estrutura dentro de outra estrutura
*/
struct Data {
  int dia;
  int mes;
  int ano;
};

struct Pessoa {
 string nome;
 Data dataNascimento;
 Data dataConclusaoCurso;
};


int main() {
  Pessoa p;

  cout << "\nCadastro de pessoas\n";
  
  cout<<"\nDigite nome:\n";
  cin>>p.nome;

  cout<<"\nDigite dia nascimento:\n";
  cin>>p.dataNascimento.dia;
  cout<<"\nDigite mes nascimento:\n";
  cin>>p.dataNascimento.mes;
  cout<<"\nDigite ano nascimento:\n";
  cin>>p.dataNascimento.ano;

  cout<<"\nDigite dia conclusao:\n";
  cin>>p.dataConclusaoCurso.dia;
  cout<<"\nDigite mes conclusao:\n";
  cin>>p.dataConclusaoCurso.mes;
  cout<<"\nDigite ano conclusao:\n";
  cin>>p.dataConclusaoCurso.ano;


  cout<<"\nNome: "<<p.nome;
  cout<<"\nData Nascimento: " <<p.dataNascimento.dia<<"/"<<p.dataNascimento.mes<<"/"<<p.dataNascimento.ano;
  cout<<"\nData conclusao do curso: "<<p.dataConclusaoCurso.dia<<"/"<<p.dataConclusaoCurso.mes<<"/"<<p.dataConclusaoCurso.ano;


}
