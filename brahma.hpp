/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

#ifndef BRAHMA_H
#define BRAHMA_H

#include <string>
#include "beer.hpp"

using namespace std;

class Brahma : public Beer
   {
   	private:
   		string tipo;
    public:
     Brahma(double, int, double, string);
     virtual string getDescricao();
   };

#endif

/* fim de arquivo */
