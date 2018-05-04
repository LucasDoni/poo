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
    return ("Milk " + to_string(ml) + "ml - " + to_string(unidades) + " units");
};

/* fim de arquivo */
