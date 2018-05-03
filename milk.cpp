/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "milk.hpp"

using namespace std;

Milk::Milk(double ml, int unidades, double valor): Liquid(ml,unidades,valor)
   {

   };
   
string Milk::getDescricao()
   { 
   return ("Milk ml " + to_string(ml) + " - " + to_string(unidades) + " un/pacote.");
   };
   
/* fim de arquivo */
