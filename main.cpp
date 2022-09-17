#include <iostream>
#include "Agenda.h"
using namespace std;

int main (){
  Agenda a;
  a.armazenaPessoa("Arthur", 31,1.78, "JP", "Bancários", 234);
  a.armazenaPessoa("Amanda", 33,1.65, "JP", "Bancários", 234);

  //a.imprimePovo();
  Pessoa p;
  Endereco end("JP", "BAncário", 00);
  cout<<a.buscaPessoa("Amanda")<<endl;


}