/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "brahma.hpp"

using namespace std;

Brahma::Brahma(double ml, int unidades, double valor, string m): Beer(ml,unidades,valor), tipo(m)
{

};

string Brahma::getDescricao()
{
    return ("Brahma " + to_string(ml) + " ml - " + to_string(unidades) + " units" + " tipo:" + tipo);
};

/* fim de arquivo */
