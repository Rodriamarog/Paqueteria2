#include <iostream> 
#include "paqueshrek.h"

PaqueShrek::PaqueShrek(float peso, float costo, float costo2Day) : Paquete(costo,peso), costo2Dias(costo2Day){}

PaqueShrek::~PaqueShrek(){
  // TODO auto-generated destructor stub
}

void PaqueShrek::setCosto2Dias(float costo2Dias){
  this-> costo2Dias = costo2Dias;
}

float PaqueShrek::getCosto2Dias() const {
  return costo2Dias;
}

float PaqueShrek::calcCostco2Day() const{
  return calcCosto() + getCosto2Dias();
}