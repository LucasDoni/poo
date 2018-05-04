/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef MILK_H
#define MILK_H

#include <string>
#include "liquid.hpp"

using namespace std;

class Milk: public Liquid
{
    public:
      Milk(double, int, double);
	  virtual string getDescricao();
};

#endif

/* fim de arquivo */
