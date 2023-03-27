#include <iostream> 
#include "paqueshrek.h"

PaqueShrek::PaqueShrek(float peso, float costo=300) : Paquete(costo,peso){}

PaqueShrek::~PaqueShrek(){
  std::cout<<" Destructor paqueshrek "<<std::endl;
}
