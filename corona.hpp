/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

#ifndef CORONA_H
#define CORONA_H

#include <string>
#include "beer.hpp"

using namespace std;

class Corona : public Beer
   {
   	private:
   		string tipo;
   public:
     Corona(double, int, double, string);
     virtual string getDescricao();
   };

#endif

/* fim de arquivo */
