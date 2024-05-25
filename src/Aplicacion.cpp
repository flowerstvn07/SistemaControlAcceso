#include "Aplicacion.h"
#include <iostream>

using namespace std;

Aplicacion::Aplicacion(){
    //ctor
}

Aplicacion::~Aplicacion(){
    //dtor
}

bool Aplicacion::Login(){
    string user, pass;
    Registro registro;
    while(true){
        cout << "\nIngrese nombre de usuario: ";
        cin >> user;
        cout << "Password: ";
        cin >> pass;

        ConectarBD(user, registro);

        if(registro.getUser() == user && registro.getPass() == pass){
            this->_usuario = Usuario(user, pass, registro.getRol());
            return true;
        }
        else{
            cout << "\n\tUsuario o contrasenia incorrectos\n" << endl;
        }
    }
}

void Aplicacion::ConectarBD(string user, Registro &registro){
    string usuarios[4][3] = {
        {"Goku", "kamehameha", "ADMIN"},
        {"vegeta", "Insecto", "USER"},
        {"Mrsatan", "Campeon", "USER"},
        {"Picolo", "gohan", "USER"}
    };

    for(int i = 0; i < 4; i++){
        if(usuarios[i][0] == user){
            registro = Registro(usuarios[i][0], usuarios[i][1], usuarios[i][2]);
            return;
        }
    }
}

void Aplicacion::ImprimirMenu(){
    if(_usuario.getRol() == "ADMIN"){
        cout << "\n***MENU PRINCIPAL***" << endl;
        cout << "1. OPCION 1" << endl;
        cout << "2. OPCION 2" << endl;
        cout << "3. OPCION 3" << endl;
        cout << "4. OPCION 4" << endl;
        cout << "0. SALIR" << endl;
    }
    else if(_usuario.getRol() == "USER"){
        cout << "\n***MENU PRINCIPAL***" << endl;
        cout << "1. OPCION 1" << endl;
        cout << "2. OPCION 2" << endl;
        cout << "0. SALIR" << endl;
    }

    int opcion;
    do{
        cout << "\nSeleccione una opcion: ";
        cin >> opcion;
    }while(opcion != 0);
    cout << "\n\tSaliendo...\n" << endl;
}
