#ifndef _motos_h_
#define _motos_h_
#include "concessionaria.h"
#include "veiculos.h"
#include <iostream>
#include <string>
using namespace std;

class Motos : public Veiculos
{
    //tipo de modelo: clássico ou esportivo
    string modelo;
};

#endif