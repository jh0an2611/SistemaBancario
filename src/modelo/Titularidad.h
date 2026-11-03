#ifndef TITULARIDAD_H
#define TITULARIDAD_H

#include "Cliente.h"
#include "Cuenta.h"

using namespace std;

class Titularidad{
    private:
        int idTitularidad;
        string tipoTitular;
        string fechaVinculacion;
        Cliente cliente;
        Cuenta cuenta;
    public:
        Titularidad(Cliente cliente_, Cuenta cuenta_, string tipo, string fecha);
        string getTipoTitular()const;
        string getFechaVinculacion()const;
        Cliente getCliente()const;
        Cuenta getCuenta()const;
};

#endif