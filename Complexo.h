/*
 * Complexo.h
 *
 *  Created on: 8 de mai de 2018
 *      Author: efisi

 */

//Criação de classe

#ifndef COMPLEXO_H_
#define COMPLEXO_H_
#include <math.h>

class Complexo
{
    private:
        float real;
        float im;
    public:

        Complexo(float,float);
        float Modulo();

        Complexo Conjugado();
        Complexo operator + (Complexo);
        Complexo operator - (Complexo);
        Complexo operator * (Complexo);
        Complexo operator / (Complexo);
};











#endif /* COMPLEXO_H_ */
