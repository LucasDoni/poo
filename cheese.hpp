/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef AA
#define AA

#include <string>
#include "food.hpp"

using namespace std;

class Cheese : public Food
   {
   private:
      string tipo;
      float peso;

   public:
      Cheese(string, float, double);
      virtual string getDescricao();
   };

#endif

/* fim de arquivo */