#include "Agenda.h"

void Agenda::armazenaPessoa(string	nome,	int	idade,	float	altura,	string	cidade,	string	bairro,	int numero){
  bool check=false;
  int pos=0;
  for (int i=0;i<10;i++){
    if (Povo[i].getNome()=="-"){
      check=true;
      pos=i;
      break;
    }
  }
  if (check){
    Pessoa p(nome,idade,altura,cidade,bairro,numero);
    Povo[pos]=p;
    cout<<"Adicionado na Agenda com sucesso!!"<<endl;
  }
  else{
    cout<<"Agenda lotada"<<endl;
  }
}
void Agenda::removePessoa(string nome){
  bool check=false;
  for (int i=0;i<10;i++){
    if (Povo[i].getNome()==nome){
      Povo[i].setNome("-");
      check=true;
    }
  }
  if (check){
    cout<<"Pessoa Removida"<<endl;
  }
  else{
    cout<<"Nome não encontrado,tente de novo!"<<endl;
  }
}
int	Agenda::buscaPessoa(string	nome){
  int pos=0;
  for (int i = 0;i<10;i++){
    if (Povo[i].getNome()==nome){
      return i;
    }
  }
  return -1;
}
void Agenda::	imprimePovo(){
  for (int i =0;i<10;i++){
    if (Povo[i].getNome()=="-"){
      continue;
    }
    cout<<Povo[i].toString()<<endl;
  }
}
void Agenda::imprimePessoa(int	 i){
  if (i>=0 && i<10){
    if (Povo[i].getNome()!="-"){
      cout<<Povo[i].toString()<<endl;
    }
    else{
      cout<<"Não tem ninguem nessa posição"<<endl;
    }
  }
  else{
    cout<<"Posição invalida"<<endl;
  }
}
  
