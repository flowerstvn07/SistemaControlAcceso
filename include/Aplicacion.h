#ifndef APLICACION_H
#define APLICACION_H
#include <iostream>
#include "Usuario.h"
#include "Registro.h"
#include <string>

using namespace std;

class Aplicacion{
    public:
        Aplicacion();
        virtual ~Aplicacion();
        bool Login();
        void ConectarBD(string, Registro&);
        void ImprimirMenu();
    protected:

    private:
        Usuario _usuario;
};

#endif // APLICACION_H
