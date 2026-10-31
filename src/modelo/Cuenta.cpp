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

void Cuenta::mostrarInformacion(){
    cout << "id: " << id << endl;
    cout << "saldo: " << saldo << endl;
}
