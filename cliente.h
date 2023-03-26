#include <string>
#ifndef CLIENTE_H_
#define CLIENTE_H_
#include "usuario.h"

class Cliente : public Usuario{
private:
  std::string tarjeta;
  static int contCliente;
  bool estatusCompra;

public:
  Cliente();
  virtual ~Cliente();

  //FUNCIONES SET Y GET
  void setTarjeta(std::string);
  std::string getTarjeta() const;
  void setEstatusCompra(bool);
  bool getEstatusComppra();

  void hacerCompra();
  void crearCliente();
  void datosCliente();
};

#endif