/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "brahma.hpp"

using namespace std;

Brahma::Brahma(double ml, int unidades, double valor): Beer(ml,unidades,valor)
{

};

string Brahma::getDescricao()
{
   return ("Brahma " + to_string(ml) + " - " + to_string(unidades) + " un/pacote.");
};
   
/* fim de arquivo */
