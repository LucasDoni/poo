/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "budweiser.hpp"


Budweiser::Budweiser(double ml, int unidades, double valor): Beer(ml,unidades,valor)
{

};

string Budweiser::getDescricao()
{
   return ("Budweiser " + to_string(ml) + " - " + to_string(unidades) + " un/pacote.");
};
   
/* fim de arquivo */
