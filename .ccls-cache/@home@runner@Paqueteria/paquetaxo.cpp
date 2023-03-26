#include <iostream>
#include "paquetaxo.h"

Paquetaxo::Paquetaxo(float peso, float costo=200) : Paquete(peso,costo){};

Paquetaxo::~Paquetaxo(){
  std::cout<<" Destructor de paquetaxo "<<std::endl;
}

void Paquetaxo::setCostoExpress(float costoExpress){
  this-> costoExpress = costoExpress;
}

float Paquetaxo::getCostoExpress() const {
  return costoExpress;
}

float Paquetaxo::calcCostoExpress() const{
  return calcCosto() + getCostoExpress();
}