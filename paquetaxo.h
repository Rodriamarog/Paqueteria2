#include "paquete.h"
#ifndef PAQUETAXO_H_
#define PAQUETAXO_H_

class Paquetaxo : public Paquete{
private:
float costoExpress;

public:
Paquetaxo(float, float);
virtual ~Paquetaxo();

void setCostoExpress(float);
float getCostoExpress() const;
float calcCostoExpress() const;
};


#endif
