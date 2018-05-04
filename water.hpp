/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/
#ifndef WAT
    #define WAT
#include <string>
#include "liquid.hpp"

using namespace std;

class Water : public Liquid
{
   public:
      Water(double, int, double);
      virtual string getDescricao();
};

#endif
   
/* fim de arquivo */
