#ifndef CUENTA_H
#define CUENTA_H

#include <string>

using namespace std;

class Cuenta {
    private:
        string id;
        long saldo;
    public:
        Cuenta(string id_, long saldo_);
        string getNumeroCuenta()const; 
        void setSaldo(long saldo);
        bool retirarDinero(long cantidad);
        void consignarDinero(long cantidad);
};
#endif