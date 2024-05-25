#include <iostream>
#include "Aplicacion.h"

using namespace std;

int main(){
    cout << "APLICACION 1.0" << endl;
    Aplicacion _app;
    if(_app.Login()){
        _app.ImprimirMenu();
    }
    return 0;
}
