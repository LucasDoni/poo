/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "corona.hpp"


Corona::Corona(double ml, int unidades, double valor, string m): Beer(ml,unidades,valor), tipo(m)
{

};

string Corona::getDescricao()
{
    return ("Corona " + to_string(ml) + " ml - " + to_string(unidades) + " units" + " tipo:" + tipo);
};

/* fim de arquivo */
