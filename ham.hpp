/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef HAM
   #define HAM

#include <string>
#include "food.hpp"

using namespace std;

class Ham : public Food
   {
   private:
      string tipo;
      float peso;
      
   public:
      Ham(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */