//
//  main.cpp
//  hmultiples
//
//  Created by Catalina Zavala on 3/15/23.
//
#include "usuario.h"
#include <iostream>
#include <string>
using namespace std;

void Menu(){
  int opc = 0;
  cout << "Cliente (1) o Proveedor(2), o salir(-1)" << endl;
do{
  cin >> opc;
}while(opc < 1 || opc > 3);
  switch(opc){
    case 1:
      menuCliente();
      break;
    case 2:
      menuProveedor();
      break;
    case 3:
      cout << "Bye :)" << endl;
  }
}

void menuCliente(){
  int opc;
  cout << "Escoge opcion: Ingresar datos(1), ver datos(2), haver compra(3), salir(4)" << endl;
  do{cin >> opc;}
  while(opc<1||opc>4);
  switch(opc){
    case 1: 
      crearCliente();
    case 2:
      datosCliente();
    case 3:
      hacerCompra();
    case 4:
      cout << "So easy" << endl;
  }
}

void menuProveedor(){
  int opc;
  cout << "Escoge opcion: Ingresar datos(1), ver datos(2), hacer envio(3), salir(4)" << endl;
  do{cin >> opc;}
  while(opc<1||opc>4);
  switch(opc){
    case 1: 
      crearProveedor();
    case 2:
      datosProveedor();
    case 3:
      hacerEnvio();
    case 4:
      cout << "BYE!" << endl;
  }
}

int main() {
    Menu();
    return 0;
}
