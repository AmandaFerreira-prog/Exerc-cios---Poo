#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include "Endereco.h"
using namespace std;

class Pessoa{
  public:
    Pessoa();
    Pessoa(string nm,int id,float altura,string cidade,string bairro,int numero);
    void setNome(string nm);
    void setIdade(int id);
    void setAltura(float alt);
    void setEndereco(Endereco e);
    int getIdade();
    float getAltura();
    string getNome();
    Endereco getEndereco();
    string toString();
  
  private:
    string nome;
    int idade;
    float altura;
    Endereco endereco;
};

#endif