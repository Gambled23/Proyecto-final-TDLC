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
    void inicializa();
    void viajar();

private:
};

reservas::reservas()
{
    q0 = nullptr;
}

void reservas::inicializa()
{
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
    nodo *actual = q0;
}
void reservas::viajar()
{

}
#endif