/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

#ifndef SA_H
#define SA_H

#include <string>
#include "beer.hpp"

using namespace std;

class StellaArtois : public Beer
   {
   	private:
   		string tipo;
   public:
     StellaArtois(double, int, double, string);
     virtual string getDescricao();
   };

#endif

/* fim de arquivo */
