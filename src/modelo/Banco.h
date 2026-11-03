#ifndef BANCO_H
#define BANCO_H
#include "Titularidad.h"
#include <vector>

using namespace std;

class Banco {
    private:
        string nombre;
        vector <Titularidad> titulares;
    public:
        Banco(string nombre_);
        string getNombre()const;
        void addTitularidad(Titularidad t);
        void addTitularidadReferencia(const Titularidad& t);
        void imprimirDatos() const;
        void calcularPromedio();
};
#endif