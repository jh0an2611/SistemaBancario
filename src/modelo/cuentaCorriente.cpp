#include "Cuenta.h"
#include "cuentaCorriente.h"
#include <iostream>

void cuentaCorriente::setLimiteSobregiro(long limite){
    if (limite >= 0){
        limiteSobregiro = limite;
    }
}

long cuentaCorriente::getLimiteSobregiro()const {
    return limiteSobregiro;
}

bool cuentaCorriente::retirarDinero(long cantidad){
    if (cantidad <= 0 || cantidad > getSaldo() + limiteSobregiro) {
        return false;
    }

    setSaldo(getSaldo() - cantidad);
    cout << "Saldo actualizado: " << getSaldo()<< endl; 
    return true;
}