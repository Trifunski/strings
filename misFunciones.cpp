#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>

using namespace std;

int leerTexto(string ruta) {

    string linea;

    ifstream archivo(ruta);

    if (archivo.is_open()) {
        getline(archivo, linea);

        while (!archivo.eof()) {
            cout << linea << endl;
            getline(archivo, linea);
        }

    }

}

int contarLinea(string ruta) {

    string linea;

    int contarLinea = 0;

    ifstream archivo(ruta);

    if (archivo.is_open()) {
        getline(archivo, linea);

        while (!archivo.eof()) {
            contarLinea = contarLinea + 1;
            getline(archivo, linea);
        }

    }

    return contarLinea;

}

void buscarPalabra(const char* palabra, const char* ruta) {

    ifstream fichero(ruta);
    char cadena[500];
    int numerolinea = 0;
    int numeroVeces = 0;

        if (fichero){
            while(fichero){
                fichero.getline(cadena, 500);
                numerolinea++;
                if (fichero) {
                    if (strstr(cadena, palabra)) {
                        numeroVeces++;
                        cout << cadena << "| " << "Linea " << numerolinea << endl;
                    }
                }
            }
        }

    cout << "----------------------------------" << endl;
    cout << "Se ha encontrado " << numeroVeces << " veces" << endl;
            
}

void quitarEspacios(const char* ruta) {

    FILE* fichero = fopen(ruta, "r");
    ofstream ficheroSinEspacio("sinEspacio.txt");
    char i;

    for (i = getc(fichero); i != EOF; i = getc(fichero)) {

        if (i != 32) {
            cout << i;
            ficheroSinEspacio << i;
        }

    }
    
    ficheroSinEspacio.close();
    fclose(fichero);

}