#include "usuario.h"
#include <iostream>
#include <string>

Usuario::Usuario(){
    nombre = " ";
    direccion= " ";
    telefono = 0;
    ID = 0;
}

Usuario::~Usuario(){
std::cout << "Destructor clase Usuario"<< std::endl;
}

//funciones set
void Usuario::setNombre(std::string nombre){
    //this ->nombre=nombre;
    if(nombre.length() <= 20){ //Valida que el nombre tenga una longitud menor o igual a 20 caracteres
            this->nombre = nombre;
        }else{
            std::cout << "Error: El nombre no puede tener más de 20 caracteres" << std::endl;
        }
}
void Usuario::setDireccion(std::string direccion){
   // this-> direccion=direccion;
    if(direccion.size()>30){ //Valida que la dirección tenga una longitud menor o igual a 20 caracteres
           this->direccion = direccion.substr(0,30);
        std::cout << "Error: La dirección no puede tener más de 20 caracteres" << std::endl;
    }else{ this-> direccion=direccion;
           
       }
}
void Usuario::setTelefono(long long telefono){
    if (std::to_string(telefono).length() == 10) this->telefono = telefono;
    else std::cout << "Error: El número de teléfono debe tener 10 dígitos" << std::endl;
}
void Usuario::setID(int ID){
    this -> ID=ID;
}
//funciones get

std::string Usuario::getNombre()const{
    return nombre;
}
std::string Usuario::getDireccion()const{
    return direccion;
}
long long Usuario::getTelefono()const{
    return telefono;
}
int Usuario::getID()const{
    return ID;
}

void Usuario::obtenerDatos() {
  std::string nombre;
  std::string direccion;
  long long telefono;
  std::cout << "Ingrese el nombre: " << std::endl;
  std::getchar();
  getline(std::cin, nombre);
  setNombre(nombre);
  std::cout << "Ingrese la direccion: ";
  getline(std::cin, direccion);
  setDireccion(direccion);
  std::cout << "Ingrese el telefono: ";
  std::cin >> telefono;
  setTelefono(telefono);
}

