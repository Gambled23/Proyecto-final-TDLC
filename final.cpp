#include <cstdlib>
#include <iostream>
#include "reservas.hpp"

using namespace std;
/*
TODO:
//Menu para ver disponibilidad de mesas
//Hacer funcion solo para ver si hay disponibles, no para reservar
Menu para reservar mesa
    //Pedir datos de los clientes
    Revisar si se puede reservar una mesa (Maquina finita)


Letrero de si se reservo o no y por q
Cancelar reservacion mediante la ID de reservacion
*/

void menu();

int main()
{
    menu();

    system("PAUSE");
    return 0;
}
void menu()
{
    int opc;
    int disponibilidad = 8;
    do
    {
        system("cls");
        cout << "\tBienvenido a reservaciones Mundo Galleta!" << endl;
        cout << "Debido a la pandemia el máximo de comensales por mesa es 4, agradecemos su comprensión" << endl;
        cout << "1) Revisar disponibilidad de hoy" << endl;
        cout << "2) Reservar mesa" << endl;
        cout << "3) Cancelar reservación" << endl;
        cout << "0) Salir" << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
            if (disponibilidad > 0)
            {
                cout << "Aun quedan " << disponibilidad << " mesas libre, intente reservando una!\n";
            }
            else
            {
                cout << "Lamentablemente ya no tenemos mesas disponibles, por favor intente maniana\n";
            }
            break;
        case 2:
            int aux = 0;
            int comensales[4];
            while (aux < 4)
            {
                system("cls");
                cout << "Bienvenido al menu para reservar una mesa, por favor ayudenos con los siguientes datos\n";
                cout << "1)Agregar niño   2)Agregar adulto   3)Terminar reservacion\n";
                cin >> comensales[aux];
                if (comensales[aux] == 3)
                {
                    break;
                }
                else
                {
                    aux++;
                }
            }
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 7:
            /* code */
            break;
        case 0:
            cout << "Gracias por su preferencia" << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
        system("PAUSE");
    } while (opc != 0);
}