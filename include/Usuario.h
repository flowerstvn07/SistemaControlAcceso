#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>

using namespace std;

class Usuario{
    public:
        Usuario();
        Usuario(string, string, string);
        virtual ~Usuario();
        string getUser();
        string getPass();
        string getRol();
    protected:

    private:
        string user;
        string pass;
        string rol;
};

#endif // USUARIO_H

