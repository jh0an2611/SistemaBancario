#include "Cuenta.h"
#include <string>
#include <iostream>

using namespace std;

Cuenta::Cuenta(string id_, long saldo_):id(id_), saldo(saldo_){}

string Cuenta::getNumeroCuenta()const{
    return id;
}

void Cuenta::setSaldo(long saldo){
    this->saldo = saldo; 
}

void Cuenta::retirarDinero(long cantidad){
    if (cantidad <= saldo){
        saldo -= cantidad;
        cout << "Se ha retirado con exito " << cantidad << "COP de su cuenta." << endl;
        cout << "Saldo: " << saldo << endl;
    } else{
        cout << "No hay suficiente dinero en su cuenta para retirar." << endl;
        cout << "Saldo: " << saldo << endl;
    }
}

void Cuenta::consignarDinero(long cantidad){
    if (cantidad > 0){
        saldo += cantidad;
        cout << "Saldo: " << saldo << endl;
    } else {
        cout << "No se puede consignar dinero negativo ni nulo."<< endl;
        cout << "Saldo: " << saldo << endl; 
    }
}

