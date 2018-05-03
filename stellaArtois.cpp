/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "stellaArtois.hpp"


StellaArtois::StellaArtois(double ml, int unidades, double valor): Beer(ml,unidades,valor)
{

};

string StellaArtois::getDescricao()
{
    return ("StellaArtois" + to_string(ml) + " - " + to_string(unidades) + " un/pacote.");
};
   
/* fim de arquivo */