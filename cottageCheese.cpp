/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "food.hpp"
#include "cottageCheese.hpp"

using namespace std;

CottageCheese::CottageCheese(string tipo, float peso, double valor, string marca) : Cheese(tipo,peso,valor)
{
   this->marca = marca;
};

string CottageCheese::getDescricao()
{ 
    return (Cheese::getDescricao()+" Marca:" + marca); 
};

/* fim de arquivo */