#ifndef _caminhoes_h_
#define _caminhoes_h_
#include "concessionaria.h"
#include "veiculos.h"
#include <iostream>
#include <string>
using namespace std;

class Caminhoes : public Veiculos
{
    //Tipo de carga: comum ou perigosa
    string carga;
};

#endif