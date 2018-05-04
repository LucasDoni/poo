/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef SODA_H
#define SODA_H

#include <string>
#include "liquid.hpp"

using namespace std;

class Soda : public Liquid
   {
   public:
      Soda(double, int, double);
      virtual string getDescricao();
   };

#endif

/* fim de arquivo */
