/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "soda.hpp"

using namespace std;

Soda::Soda(double ml, int unidades, double valor): Liquid(ml,unidades,valor)
   {

   };
   
string Soda::getDescricao()
   { 
   return ("Soda " + to_string(ml) + " - " + to_string(unidades) + " un/pacote.");
   };
   
/* fim de arquivo */
