/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "corona.hpp"


Corona::Corona(double ml, int unidades, double valor): Beer(ml,unidades,valor)
{

};

string Corona::getDescricao()
{
   return ("Water " + to_string(ml) + " - " + to_string(unidades) + " un/pacote.");
};
   
/* fim de arquivo */