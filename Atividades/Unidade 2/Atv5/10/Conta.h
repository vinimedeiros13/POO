#ifndef CONTA_H
#define CONTA_H

#include <string>
#include "Transacao.h"

using std::string;

class Conta
{
public:
  Conta(int ,string ,double );

  virtual void deposito(double=0) = 0;
  virtual void retirada(double=0) = 0;
  virtual void print() const = 0;


protected:
  string nome;
  Transacao listaDeTransacao[100];
  int cont = 0;
  double saldo;
  int numDaConta;

};

#endif