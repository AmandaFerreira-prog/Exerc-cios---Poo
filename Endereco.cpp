#include "Endereco.h"

Endereco::Endereco(){
  this->cidade="";
  this->bairro="";
  this->numero=0;
}
Endereco::Endereco(string cidade, string bairro, int num){
  this->cidade=cidade;
  this->bairro=bairro;
  this->numero=num;
}

void Endereco::setCidade(string cid){
  this->cidade=cid;
}

void Endereco::setBairro(string bairro){
  this->bairro=bairro;
}

void Endereco::setNum(int n){
  this->numero=n;
}

string Endereco::getCidade(){
  return cidade;
}

string Endereco::getBairro(){
  return bairro;
}

int Endereco::getNum(){
  return numero;
}

string Endereco::toString(){
  return ("Cidade: "+this->cidade+" Bairro: "+this->bairro+" Numero: "+to_string(this->numero));
}

