#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int leerTexto(string ruta) {

    string linea;

    ifstream f(ruta);

    if (f.is_open()) {
        getline(f, linea);

        while (!f.eof()) {
            cout << linea << endl;
            getline(f, linea);
        }

    }

    getch();

}

int contarLinea(string ruta) {
    string linea;

    int contarLinea = 0;

    ifstream f(ruta);

    if (f.is_open()) {
        getline(f, linea);

        while (!f.eof()) {
            contarLinea = contarLinea + 1;
            getline(f, linea);
        }

    }

    return contarLinea;
}

void buscarPalabra(const char* palabra, const char* nombre) {
    ifstream fichero(nombre);
    char cadena[500];
    int nlinea = 0;

        if (fichero){
            while(fichero){
                fichero.getline(cadena, 500);
                nlinea++;
                if (fichero) {
                    if (strstr(cadena, palabra)) {
                        cout << cadena << endl;
                    }
                }
            }
        }
            
}