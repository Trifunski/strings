#include "misFunciones.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string ruta;

    cout << "Introduce la ruta del archivo de texto" << endl;
    cin >> ruta;

    int valorMenu = 0;
    int opcion;

    while (valorMenu != 4) {

        cout << "------------------------------------------------------" << endl;
        cout << "Menu" << endl;
        cout << "1.- Contar el número de lineas del archivo y mostrarlo" << endl;
        cout << "2.- Encontrar palabra a buscar" << endl;
        cout << "3.- Generar otro fichero sin espacios" << endl;
        cout << "4.- Salir" << endl;
        cout << "------------------------------------------------------" << endl;
        cin >> opcion;

        switch (opcion) {

            case 1:
                system("cls");
                cout << "Hay un total de " << contarLinea(ruta) << " lineas." << endl;
                cout << "" << endl;
                leerTexto(ruta);
                getch();
                system("cls");
                break;
            
            case 2:
                system("cls");
                buscarPalabra("", ruta.c_str());
                getch();
                system("cls");
                break;
            
            case 3: 
                system("cls");
                getch();
                system("cls");
                break;

            case 4: 
                system("cls");
                exit(1);
                break;
            
        }

    } 

}