#include "cuentaAhorros.h"
#include "Cuenta.h"
#include <iostream>

void cuentaAhorros::aplicarInteres(){
    double interes = getSaldo() * (tasaInteres / 100);
    setSaldo(getSaldo() + interes);
    cout << "Se ha aplicado el interes." << endl <<"Saldo = " << getSaldo() <<" COP."<< endl;
}
