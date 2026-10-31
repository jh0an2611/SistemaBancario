// Sistema bancario - FPOO (parcial, parte práctica)
//
// Arma el programa desde cero a partir de las historias de usuario (docs/historias-de-usuario.md)
// y del diagrama de clases (docs/diagrama-clases.puml).
// Pon cada clase en su par de archivos .h y .cpp dentro de src/modelo/ (por ejemplo Cliente.h y
// Cliente.cpp): el Makefile los compila solos.
//
//   make        compila (ejecutable: banco)
//   make run    compila y ejecuta
//   make clean  borra lo compilado
//   make entrega arma el .zip para subir al Campus

#include <iostream>
#include "Cliente.h"

using namespace std;

int Menu(){
    int op;
    cout << "=====SISTEMA BANCARIO=====" <<endl
              <<"1. Añadir cliente. "<< endl
              <<endl <<"Seleccione una opcion: ";
    cin >> op;
    return op;
}

Cliente CrearCliente(){
    string nombre;
    string identificacion;
    string telefono;
    std::cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombre);
    cout << endl << "Ingrese un numero de identificación: ";
    cin >> identificacion;
    cout << "Ingrese un numero de telefono: ";
    cin >> telefono;

    Cliente c(identificacion, nombre, telefono);
    return c;
}
int main() {
    int op;
    do{
        op = Menu();
        switch (op)
        {
        case 1:
            {
                Cliente c = CrearCliente();
                break;
            }
        case 8:
            cout << "Saliendo del sistema, gracias por usar.";
            break;
        default:
            cout << "Opcion invalida, vuelva intentar.";
        } 
    }while(op!=8);
    return 0;
}
