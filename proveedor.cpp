#include <string>
#include <iostream>
#include "proveedor.h" 
#include "paquete.h"
#include "paquetaxo.h"
#include "paqueshrek.h"

int Proveedor::contProveedor = 1;

Proveedor::Proveedor() {
  tipoServicio = "";
  compania = "";
  setID(++contProveedor);
}

Proveedor::~Proveedor() {
  std::cout << "Destructor Proveedor \n";
}

//FUNCIONES SET Y GET
void Proveedor::setServicio(std::string tipoServicio){this-> tipoServicio = tipoServicio;}
void Proveedor::setCompania(std::string compania){this->compania = compania;}
std::string Proveedor::getServicio() const{return tipoServicio;}
std::string Proveedor::getCompania() const{return compania;}

void Proveedor::crearProovedor(){
  obtenerDatos();
  
  std::string tipoServicio;
  std::string compania;
  
  std::cout << "Ingrese el tipo de servicio: ";
  getline(std::cin, tipoServicio);
  setServicio(tipoServicio);
  
  std::cout << "Ingrese el nombre de la compania: ";
  getline(std::cin, compania);
  setCompania(compania);
}

//void datosProveedor
void Proveedor::datosProveedor(){
  std::cout << "Informacion Proveedores ************" << std::endl;
  std::cout << "No. proveedor..." << getID() << std::endl;
  std::cout << "Nombre del proveedor..."<< getNombre() << std::endl;
  std::cout << "Direccion..." << getDireccion() << std::endl;
  std::cout << "Telefono..." << getTelefono() << std::endl;
  std::cout << std::endl;
}

//funciones tipo de envio y entrega de paquete
int Proveedor::tipoEnvio(){
  int opcion;

  std::cout << "Tipo de entrega" << std::endl;
  std::cout << "1. Estandar" << std::endl;
  std::cout << "2. Express" << std::endl;
  std::cout << "3. 2-day" << std::endl;
  
  do{std::cin >> opcion;}
    while(opcion != 1 && opcion != 2 && opcion != 3);
  return opcion;
}

float Proveedor::entregarPaquete(int opcion){
  float peso;
  std::cout << "Ingrese el peso en kilogramos: ";
  std::cin >> peso;
  if(opcion == 1){
    Paquete pq1(peso);
    return pq1.calcCosto();
  }
  else if(opcion == 2){
    Paquetaxo pq1(peso, 200);
    return pq1.calcCosto();
  }
  else{
    PaqueShrek pq1(peso, 300);
    return pq1.calcCosto();
  }
}