/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/
#ifndef BEER_H
#define BEER_H

#pragma once

#include <string>
#include "liquid.hpp"

using namespace std;

class Beer: public Liquid
{
   public:
      Beer(double, int, double);

  	  virtual string getDescricao() = 0;
};

#endif

/* fim de arquivo */
