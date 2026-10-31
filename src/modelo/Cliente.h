#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente {
    private:
        string identificacion;
        string nombre;
        string telefono;
    public:
        Cliente(string identificacion_, string nombre_, string telefono_);
        string getIdentificacion()const;
        string getNombre()const;
        string getTelefono()const;
        void setIdentificacion(string codigo);
        void setNombre(string nombre);
        void setTelefono(string telefono);
};
#endif