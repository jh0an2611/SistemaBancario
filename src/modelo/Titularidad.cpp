#include "Titularidad.h"


Titularidad::Titularidad(Cliente cliente_, Cuenta cuenta_, string tipo, string fecha):cliente(cliente_), cuenta(cuenta_), tipoTitular(tipo), fechaVinculacion(fecha){}

string Titularidad::getTipoTitular()const{
    return tipoTitular;
}
string Titularidad::getFechaVinculacion()const{
    return fechaVinculacion;
}
Cliente Titularidad::getCliente()const{
    return cliente;
}
Cuenta Titularidad::getCuenta()const{
    return cuenta;
}
