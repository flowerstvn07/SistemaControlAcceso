#include "Registro.h"

Registro::Registro(){
    //ctor
}

Registro::Registro(string user, string pass, string rol){
    this->user = user;
    this->pass = pass;
    this->rol = rol;
}

Registro::~Registro(){
    //dtor
}

string Registro::getUser(){
    return this->user;
}

string Registro::getPass(){
    return this->pass;
}

string Registro::getRol(){
    return this->rol;
}
