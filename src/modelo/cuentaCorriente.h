#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H

#include "Cuenta.h"

class cuentaCorriente : public Cuenta {
    private:
        long limiteSobregiro;
    public:
        void setLimiteSobregiro(long limite);
        long getLimiteSobregiro()const;
        bool retirarDinero(long cantidad);
};
#endif
