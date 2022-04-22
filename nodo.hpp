
#ifndef NODO_H
#define NODO_H
#pragma once
using namespace std; 

class nodo
{
public:
    int dato;
    bool estado;
    nodo *siguienteNino;
    nodo *siguienteAdulto;
    nodo();
    nodo(int e)
    {
        dato = e;
        estado = false;
        siguienteNino = nullptr;
        siguienteAdulto = nullptr;
    };
};
nodo::nodo()
{
    estado = false;
    siguienteNino = nullptr;
    siguienteAdulto = nullptr;
}
#endif