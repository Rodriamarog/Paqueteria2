#include <string>
#ifndef PAQUETE_H_
#define PAQUETE_H_

class Paquete{
private:
static int contP;
int numPaquete;
float peso;
float costo;
std::string tipoEmpaque;

public:
Paquete(float,float);
Paquete(float);
virtual ~Paquete();

void setPeso(float);
float getPeso();

void setCosto(float);
float getCosto();

void SetNumPaquete(int);
int getNumPaquete();

void setTipoEmpaque(std::string);
std::string setTipoEmpaque();

virtual float calcCosto();
};


#endif