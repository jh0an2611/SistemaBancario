#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente(string identificacion_, string nombre_, string telefono_):identificacion(identificacion_), nombre(nombre_), telefono(telefono_){}

string Cliente::getIdentificacion() const {
    return identificacion;
}
string Cliente::getNombre() const {
    return nombre;
}

string Cliente::getTelefono() const {
    return telefono;
}

void Cliente::setIdentificacion(string codigo){
    identificacion = codigo;
}

void Cliente::setNombre(string nombre){
    this->nombre = nombre;
}

void Cliente::setTelefono(string telefono){
    this->telefono = telefono;
}
