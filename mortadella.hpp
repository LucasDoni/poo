/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef MORTADELLA
#define MORTADELLA

#include <string>
#include "food.hpp"

using namespace std;

class Mortadella : public Food
   {
   private:
      string tipo;
      float peso;

   public:
      Mortadella(string, float, double);
      virtual string getDescricao();
   };

#endif

/* fim de arquivo */