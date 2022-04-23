#include <cstdlib>
#include <iostream>
#include "reservas.hpp"

reservas *reservacion = new reservas();
using namespace std;
/*
TODO:
//Menu para ver disponibilidad de mesas
//Hacer funcion solo para ver si hay disponibles, no para reservar
//Menu para reservar mesa
    //Pedir datos de los clientes
    //Revisar si se puede reservar una mesa (Maquina finita)
    //Letrero de si se reservo o no y por q
Arreglar contador de disponibilidad
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
    do
    {
        system("cls");
        cout << "\tBienvenido a reservaciones Mundo Galleta!" << endl;
        cout << "Debido a la pandemia el maximo de comensales por mesa es 4, agradecemos su comprensión" << endl;
        cout << "1) Revisar disponibilidad de hoy" << endl;
        cout << "2) Reservar mesa" << endl;
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
        {
            reservacion->inicializa();
            int aux = 0;
            int ninios = 0, adultos = 0;
            int comensal = 0;
            bool aux2 = true;
            while (aux < 4)
            {
                system("cls");
                cout << "Bienvenido al menu para reservar una mesa, por favor ayudenos con los siguientes datos\n";
                cout << "Ninios: " << ninios << "\tAdultos: " << adultos << endl;
                cout << "1)Agregar ninio   2)Agregar adulto   3)Terminar reservacion\n";
                cin >> comensal;
                if (comensal == 1)
                {
                    ninios++;
                    reservacion->viajar(comensal);
                    aux++;
                }
                else if (comensal == 2)
                {
                    adultos++;
                    reservacion->viajar(comensal);
                    aux++;
                }
                else if (comensal == 3)
                {
                    reservacion->estadoFinal();
                    break;
                }
                reservacion->estadoFinal();
            }
            break;
        }
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