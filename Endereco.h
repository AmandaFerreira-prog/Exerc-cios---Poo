#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>
using namespace std;

class Endereco{
  public:
    Endereco();
    Endereco(string cidade, string bairro, int num);
    void setCidade(string cid);
    void setBairro(string bairro);
    void setNum(int n);
    string getCidade();
    string getBairro();
    int getNum();
    string toString();
  private:
    string cidade;
    string bairro;
    int numero;
};

#endif