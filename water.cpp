/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "water.hpp"

using namespace std;

Water::Water(double ml, int unidades, double valor): Liquid(ml,unidades,valor)
   {

   };
   
string Water::getDescricao()
   { 
      return ("Water " + to_string(ml) + " - " + to_string(unidades) + " un/pacote.");
   };
   
/* fim de arquivo */
