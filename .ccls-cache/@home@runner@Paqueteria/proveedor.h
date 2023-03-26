#include <string>
#ifndef PROVEEDOR_H_
#define PROVEEDOR_H_
#include "usuario.h"

class Proveedor : public Usuario{
private:
  std::string tipoServicio;
  std::string compania;
  static int contProveedor;

public:
  Proveedor();
  virtual ~Proveedor();

  //FUNCIONES SET Y GET
  void setServicio(std::string);
  void setCompania(std::string);
  std::string getServicio() const;
  std::string getCompania() const;

  float entregarPaquete(int);
  int tipoEnvio();
  void crearProovedor();
  void datosProveedor();
};
#endif