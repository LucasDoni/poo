/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

#ifndef BUD_H
#define BUD_H

#include <string>
#include "beer.hpp"

using namespace std;

class Budweiser : public Beer
   {
   	private:
   		string tipo;
   public:
     Budweiser(double, int, double, string);
     void setArroz(float arroz);
     float getArroz() const;
     virtual string getDescricao();
   };

#endif

/* fim de arquivo */
