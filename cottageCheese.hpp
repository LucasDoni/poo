/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef CC
   #define CC

#include <string>
#include "cheese.hpp"

using namespace std;

class CottageCheese : public Cheese
   {
   private:
      string cotagge;
      
   public:
      CottageCheese(string, string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */