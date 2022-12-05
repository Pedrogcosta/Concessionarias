#ifndef _automoveis_h_
#define _automoveis_h_
#include "concessionaria.h"
#include "veiculos.h"
#include <iostream>
#include <string>
using namespace std;

class Automoveis : public Veiculos
{
    //tipo de motor: gasolina ou elétrico
    string motor;
};

#endif