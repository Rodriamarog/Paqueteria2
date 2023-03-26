#ifndef USUARIO_H_
#define USUARIO_H_

#include <iostream>
#include <string>

class Usuario {
private:
   std::string nombre;
   std::string direccion;
    long long telefono;
    int ID;

protected:
  void obtenerDatos();
    
public:
    //constructor
    Usuario();
    //destructor
    virtual ~Usuario();
    //funciones set
    void setNombre(std::string);
    void setDireccion(std::string);
    void setTelefono(long long);
    void setID(int);
    //funciones get
    std::string getNombre()const;
    std::string getDireccion()const;
    long long getTelefono()const;
    int getID()const;
};

#endif 