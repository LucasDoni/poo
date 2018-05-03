/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

#include <string>
#include "beer.hpp"

using namespace std;

class StellaArtois : public Beer
   {
   public:
     StellaArtois(double, int, double);
     virtual string getDescricao();
   };
   
/* fim de arquivo */
