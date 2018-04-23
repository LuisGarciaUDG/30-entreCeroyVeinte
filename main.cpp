/* programa_30 Imprimir los numeros entre el 0 y el 20
estructura: ciclica for
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 5 de marzo del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;

    cout<<"\n Programa que imprime los numeros entre el 0 y el 20";
    cout<<"\n\n Estrucutra de control while\n\n";
    for (x=2; x<20; x=x+2)
        {
        cout<<"\n "<<x;
        }
        cout<<"\n\n Presione enter para salir...\n\n";
        system ("pause");

    return 0;
}

