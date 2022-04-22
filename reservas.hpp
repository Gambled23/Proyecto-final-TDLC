#ifndef RESERVAS_H
#define RESERVAS_H
#include <iostream>
#include <cstdlib>
#include "nodo.hpp"
#pragma once
using namespace std;

class reservas
{
public:
    reservas();
    nodo *q0, *q1, *q2, *q3, *q4, *q5, *q6, *q7, *q8, *q9, *q10, *q11;
    nodo *actual;
    void inicializa();
    void viajar(int);

private:
};

reservas::reservas()
{
}

void reservas::inicializa()
{
    nodo *nd0 = new nodo();
    q0 = nd0;
    nodo *nd1 = new nodo();
    q1 = nd1;
    nodo *nd2 = new nodo();
    q2 = nd2;
    nodo *nd3 = new nodo();
    q3 = nd3;
    nodo *nd4 = new nodo();
    q4 = nd4;
    nodo *nd5 = new nodo();
    q5 = nd5;
    nodo *nd6 = new nodo();
    q6 = nd6;
    nodo *nd7 = new nodo();
    q7 = nd7;
    nodo *nd8 = new nodo();
    q8 = nd8;
    nodo *nd9 = new nodo();
    q9 = nd9;
    nodo *nd10 = new nodo();
    q10 = nd10;
    nodo *nd11 = new nodo();
    q11 = nd11;
    q0->siguienteNino = q8;
    q0->siguienteAdulto = q1;
    q1->siguienteNino = q5;
    q1->siguienteAdulto = q2;
    q2->siguienteNino = q6;
    q2->siguienteAdulto = q3;
    q3->siguienteNino = q7;
    q3->siguienteAdulto = q4;
    q5->siguienteNino = q6;
    q5->siguienteAdulto = q6;
    q6->siguienteNino = q7;
    q6->siguienteAdulto = q7;
    q8->siguienteNino = q9;
    q8->siguienteAdulto = q5;
    q9->siguienteNino = q10;
    q9->siguienteAdulto = q6;
    q10->siguienteNino = q11;
    q10->siguienteAdulto = q7;

    q5->estado = true;
    q6->estado = true;
    q7->estado = true;
    actual = q0;
}
void reservas::viajar(int comensal)
{
    if (comensal == 1)
    {
        actual = actual->siguienteNino;
    }
    else if (comensal == 2)
    {
        actual = actual->siguienteAdulto;
    }
    else
    {
        cout << "You shouldn't be able to read this lol\n";
    }
}
#endif