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

bool Cuenta::retirarDinero(long cantidad){
    if (cantidad <= 0 || cantidad > saldo){
        return false;
    }

    saldo -= cantidad;
    cout << "Saldo actualizado: " << endl; 
    return true;
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

