#ifndef _concessionaria_h_
#define _concessionaria_h_
#include "sistema.h"
#include <iostream>
#include <string>
using namespace std;

class Concessionaria{
    public:
    Concessionaria(){
    }

    string nome;
    int CNPJ;
    int estoque;


};

#endif