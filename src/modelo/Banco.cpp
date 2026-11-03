#include "Banco.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Banco::Banco(string nombre_):nombre(nombre_){}

string Banco::getNombre()const{
    return nombre;
}

void Banco::addTitularidad(Titularidad t){
    titulares.push_back(t);
}

void Banco::addTitularidadReferencia(const Titularidad& t){
    titulares.push_back(t);
}

void Banco::imprimirDatos() const{
    cout << endl <<  "Banco: " << nombre << endl;
    if (titulares.empty()){
        cout << "No hay titulares registrados." << endl;
        return;
    }
    for (const Titularidad& t : titulares) {
        Cliente* cliente = t.getCliente();
        Cuenta* cuenta = t.getCuenta();
        if (cliente != nullptr && cuenta != nullptr){ //confirmo que cuenta y cliente no sean punteros nulos antes de imprimir
            cout << endl <<"--- Titularidad ---" << endl
                         << "Tipo de titular: " << t.getTipoTitular() << endl
                         << "Fecha de vinculacion: " << t.getFechaVinculacion() << endl << endl
                         << "Datos del cliente:" << endl
                         << "Identificacion: " << cliente->getIdentificacion() << endl
                         << "Nombre: " << cliente->getNombre() << endl
                         << "Telefono: " << cliente->getTelefono() << endl << endl 
                         << "Datos de la cuenta:" << endl
                         << "Numero: " << cuenta->getNumeroCuenta() << endl
                         << "Saldo: " << cuenta->getSaldo() << endl;
        }
    }
}

void Banco::calcularPromedio() {
    if (titulares.empty()) {
        cout << "No hay titularidades registradas." << endl;
        return;
    }
    long suma{};
    for (const Titularidad& t : titulares) {
        Cuenta* cuenta = t.getCuenta();
        if (cuenta != nullptr) { // confirmo que cuenta no sea puntero nulo
            suma += cuenta->getSaldo();
        }
    }
    cout << "Promedio de saldos: " << suma / titulares.size() << endl;
}