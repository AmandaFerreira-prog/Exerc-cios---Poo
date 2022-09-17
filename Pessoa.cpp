#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa():endereco(){
  this->nome="-";
  this->idade=0;
  this->altura=0;
}
Pessoa::Pessoa(string nm,int id,float altura,string cidade,string bairro,int numero):endereco(cidade,bairro,numero){
  this->nome=nm;
  this->idade=id;
  this->altura=altura;
}

void Pessoa::setNome(string nm){
  this->nome=nm;
}

void Pessoa::setAltura(float alt){
  this->altura=alt;
}

void Pessoa::setIdade(int id){
  this->idade=id;
}
void Pessoa::setEndereco(Endereco e){
  this->endereco=e;
}
int Pessoa::getIdade(){
  return idade;
}
string Pessoa::getNome(){
  return nome;
}
float Pessoa::getAltura(){
    return altura;
}
Endereco Pessoa::getEndereco(){
  return endereco;
}

string Pessoa::toString(){
  return ("Nome: "+this->nome+" Idade: "+to_string(this->idade)+" Altura: "+to_string(this->altura)+ this->endereco.toString());
}
  
    