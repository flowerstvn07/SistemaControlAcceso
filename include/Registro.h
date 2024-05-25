#ifndef REGISTRO_H
#define REGISTRO_H
#include <iostream>
#include <string>

using namespace std;

class Registro{
    public:
        Registro();
        Registro(string, string, string);
        virtual ~Registro();
        string getUser();
        string getPass();
        string getRol();
    protected:

    private:
        string user;
        string pass;
        string rol;
};

#endif // REGISTRO_H
