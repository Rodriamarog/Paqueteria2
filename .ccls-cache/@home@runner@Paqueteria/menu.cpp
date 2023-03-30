#include "cliente.h"
#include "proveedor.h"
#include "menu.h"
#include <stdlib.h>
#include <cstdio>
#include <vector>

std::vector<Cliente> clientes; 
std::vector<Proveedor> proveedores; 

void Menu() {
  int opc = 0;

  do {
    system("clear");
    std::cout << "Cliente (1) o Proveedor(2), o salir(3)" << std::endl;
    std::cin >> opc;
    
    switch (opc) {
      case 1:
        menuCliente();
        break;
      case 2:
        menuProveedor();
        break;
      case 3:
        std::cout << "Bye :)" << std::endl;
    }
  } while (opc != 3);
}

void menuCliente(){
  int opc;
  do{
  std::cout << "Escoge opcion: Ingresar datos(1), ver datos(2), hacer compra(3), salir(4)" << std::endl;
  do{std::cin >> opc;}
  while(opc<1||opc>4);
  switch(opc){
    case 1: 
      {
      clientes.emplace_back();
      clientes.back().crearCliente();
      std::cout<<"Tu ID es: "<< clientes.back().getID()<< std::endl;
      break;
      }
    case 2: {
      int ID = 0;
      std::cout<< "Dime tu ID de cliente: "<<std::endl;
      std::cin>>ID;
      clientes[ID-1].datosCliente();
      break;
    }
    case 3:{
      int ID = 0;
      std::cout<< "Dime tu ID: "<<std::endl;
      std::cin>>ID;
      clientes[ID-1].hacerCompra();
      break;
    }
    case 4:
      std::cout << "So easy" << std::endl;
      break;
  }
  }while (opc != 4);
}

void menuProveedor(){
  int opc;
  do{
  std::cout << "Escoge opcion: Ingresar datos(1), ver datos(2), hacer envio(3), salir(4)" << std::endl;
  do{std::cin >> opc;}
  while(opc<1||opc>4);
  switch(opc){
    case 1:
      proveedores.emplace_back();
      proveedores.back().crearProovedor();
    break;
    case 2:
      {int ID = 0;
      std::cout<< "Dime tu ID de proveedor: "<<std::endl;
      std::cin>>ID;
      proveedores[ID-1].datosProveedor();
      break;}
    case 3:
      {int ID = 0;
      std::cout<< "Dime tu ID de proveedor: "<<std::endl;
      std::cin>>ID;
      proveedores[ID-1].entregarPaquete(proveedores[ID-1].tipoEnvio());
      break;}
    case 4:
      std::cout << "BYE!" << std::endl;
    break;
  }
  }while(opc != 4);
}