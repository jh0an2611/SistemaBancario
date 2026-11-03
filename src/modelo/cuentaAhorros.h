#ifndef CUENTAAHORROS_H
#define CUENTAAHORROS_H

#include "Cuenta.h"

class cuentaAhorros : public Cuenta {
    private: 
        double tasaInteres;
    public: 
        void aplicarInteres();
};
#endif