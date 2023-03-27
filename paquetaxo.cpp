#include <iostream>
#include "paquetaxo.h"

Paquetaxo::Paquetaxo(float peso, float costo=200) : Paquete(peso,costo){};

Paquetaxo::~Paquetaxo(){
  std::cout<<" Destructor de paquetaxo "<<std::endl;
}