/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "food.hpp"
#include "cottageCheese.hpp"

using namespace std;

CottageCheese::CottageCheese(string cotagge, string tipo, float peso, double valor) : Cheese(tipo,peso,valor)
   {
   this->cotagge = cotagge;
   };
   
string CottageCheese::getDescricao()
   { 
   return ("CottageCheese " + cotagge); 
   };
   
/* fim de arquivo */