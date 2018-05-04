/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "stellaArtois.hpp"


StellaArtois::StellaArtois(double ml, int unidades, double valor, string s): Beer(ml,unidades,valor), tipo(s)
{

};

string StellaArtois::getDescricao()
{
    return ("StellaArtois " + to_string(ml) + " ml - " + to_string(unidades) + " units" + " tipo:" + tipo);
};

/* fim de arquivo */
