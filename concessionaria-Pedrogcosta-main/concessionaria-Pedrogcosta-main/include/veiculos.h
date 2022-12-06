#ifndef _veiculos_h_
#define _veiculos_h_
#include "concessionaria.h"
#include <iostream>
#include <string>
using namespace std;

class Veiculos : public Concessionaria
{
    public:
    Veiculos(){
    }

    string marca;
    float preço;
    int chassi;
    int fabricacao;

};

#endif