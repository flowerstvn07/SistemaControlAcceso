#include "Usuario.h"

Usuario::Usuario(){
    //ctor
}

Usuario::Usuario(string user, string pass, string rol){
    this->user = user;
    this->pass = pass;
    this->rol = rol;
}

Usuario::~Usuario(){
    //dtor
}

string Usuario::getUser(){
    return this->user;
}

string Usuario::getPass(){
    return this->pass;
}

string Usuario::getRol(){
    return this->rol;
}
