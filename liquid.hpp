

// Liquid.hpp

#pragma once

#include <string>
#include "food.hpp"

class Liquid: public Food
{
protected:
   double ml;
   int    unidades;
	
public:
	Liquid(double,int,double);
	
	virtual double getValor();
	virtual string getDescricao() = 0;
	
};