#include "paquete.h"
#ifndef PAQUESHREK_H_
#define PAQUESHREK_H_

class PaqueShrek : public Paquete{
private:
  float costo2Dias;
public:
  PaqueShrek(float,float,float);
  virtual ~PaqueShrek();
  void setCosto2Dias(float);
  float getCosto2Dias() const;
  float calcCostco2Day() const;
};

#endif