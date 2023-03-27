#include "paquete.h"
#include <iostream>

int Paquete::contP = 0;

Paquete::Paquete(float peso,float costo){
  this-> peso = peso;
  this-> costo = costo;
  Paquete::SetNumPaquete(++contP);
  this-> tipoEmpaque = " ";
}

Paquete::Paquete(float peso){
  this-> peso = peso;
  this-> costo = 100;
  Paquete::SetNumPaquete(++contP);
  this-> tipoEmpaque = " ";
}

Paquete::~Paquete(){std::cout<<"Destructor de paquete"<<std::endl;}

void Paquete::setPeso(float peso){this->peso=peso;}
float Paquete::getPeso(){return peso;}

void Paquete::setCosto(float costo){this->costo=costo;}
float Paquete::getCosto(){return costo;}

void Paquete::SetNumPaquete(int numPaquete){this->numPaquete=numPaquete;}
int Paquete::getNumPaquete(){return numPaquete;}

void Paquete::setTipoEmpaque(std::string tipoEmpaque){this->tipoEmpaque=tipoEmpaque;}
std::string Paquete::setTipoEmpaque(){return tipoEmpaque;}

float Paquete::calcCosto(){return peso*costo;}
