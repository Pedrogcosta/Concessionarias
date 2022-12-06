#include "sistema.h"
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

/* COMANDOS */
string Sistema::quit() {
  return "Saindo...";
}

string Sistema::create_concessionaria (const string nome, const string cnpj, const int estoque) {
  Concessionaria newconcessionaria;
  newconcessionaria.nome = nome;
  newconcessionaria.CNPJ = cnpj;
  newconcessionaria.estoque = estoque;

  concessionarias.push_back(newconcessionaria);

  cout << concessionarias.size() << endl;


  return "Concessionária Criada";
}

string Sistema::add_car(const std::string marca, const int preco, const std::string chassi, const int ano, const std::string motor){
  
}
