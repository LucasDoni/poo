

// Liquid.cpp

#include "liquid.hpp"

Liquid::Liquid(double ml, int unidades, double valor):Food(valor){
    this->ml = ml;
    this->unidades = unidades;
}

double Liquid::getValor(){
    return valor;
}
