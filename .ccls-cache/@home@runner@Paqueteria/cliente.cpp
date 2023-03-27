#include <string>
#include <iostream>
#include "cliente.h" 

int Cliente::contCliente = 0;

Cliente::Cliente() {
  tarjeta = "";
  estatusCompra = false;
  setID(++contCliente);
}

Cliente::~Cliente() {
  std::cout << "Destructor Cliente \n";
}

//FUNCIONES SET Y GET
void Cliente::setTarjeta(std::string tarjeta){this-> tarjeta = tarjeta;}
std::string Cliente::getTarjeta() const{return tarjeta;}
void Cliente::setEstatusCompra(bool estatusCompra){this-> estatusCompra = estatusCompra;}
bool Cliente::getEstatusComppra() {return estatusCompra;}

void Cliente::crearCliente(){
  obtenerDatos();
  std::string tarjeta;
  std::cout << "Ingrese el num de tarjeta: ";
  std::getchar();
  getline(std::cin, tarjeta);
  setTarjeta(tarjeta);
}

//void datosProveedor
void Cliente::datosCliente(){
  std::cout << "Informacion Clientes ************" << std::endl;
  std::cout << "No. cliente..." << getID() << std::endl;
  std::cout << "Nombre del cliente..."<< getNombre() << std::endl;
  std::cout << "Direccion..." << getDireccion() << std::endl;
  std::cout << "Telefono..." << getTelefono() << std::endl;
  std::cout << std::endl;
}

//funciones tipo de envio y entrega de paquete
void Cliente::hacerCompra(){
  std::cout << "Hiciste una compra!"<<std::endl;
  setEstatusCompra(true);
}