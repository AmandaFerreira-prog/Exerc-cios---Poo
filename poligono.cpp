#include "poligono.h"

Poligono::Poligono(int Altura,int Comprimento){
  this->altura=Altura;
  this->comprimento=Comprimento;
}
void Poligono::setAltura(int alt){
  this->altura=alt;
}
void Poligono::setComprimento(int comp){
  this->comprimento=comp;
}
int Poligono::getAtura(){
  return altura;
}
int Poligono::getComprimento(){
  return comprimento;
}