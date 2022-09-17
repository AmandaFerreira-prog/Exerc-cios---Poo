#ifndef AGENDA_H
#define AGENDA_H
#include "Pessoa.h"

class	Agenda{
	private:
    Pessoa	Povo[10];
  public:
    void	armazenaPessoa(string	nome,	int	idade,	float	altura,	string	cidade,	string	bairro,	int numero);
    void	removePessoa(string	nome);
    int	buscaPessoa(string	nome);	//	informa	em	que	posição	da	agenda	está	a	pessoa
    void	imprimePovo();	//	imprime	todos	os	dados	de	todas	as	pessoas	da	agenda
    void	 imprimePessoa(int	 i);	 //	 imprime	 os	 dados	 da	 pessoa	 que	 está	 na	 posição	 'i'	 da	agenda
};

#endif