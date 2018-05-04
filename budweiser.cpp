/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "budweiser.hpp"


Budweiser::Budweiser(double ml, int unidades, double valor, string tipo): Beer(ml,unidades,valor), tipo(tipo)
{

};

string Budweiser::getDescricao()
{
    return ("Budweiser " + to_string(ml) + " ml - " + to_string(unidades) + " units" + " tipo:" + tipo);
};

/* fim de arquivo */
