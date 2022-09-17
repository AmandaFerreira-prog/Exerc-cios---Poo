#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>
using namespace std;

class Poligono{
  public:
    Poligono(int Altura,int Comprimento);
    void setAltura(int alt);
    void setComprimento(int comp);
    int getAtura();
    int getComprimento();
  private:
    int altura;
    int comprimento;
}

#endif