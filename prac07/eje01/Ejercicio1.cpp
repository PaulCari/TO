#include <iostream>
#include <string>
using namespace std;

class Configuracion {
private:
    static Configuracion* instancia;
    string idioma;
    string zonaHoraria;

    Configuracion() { 
        idioma = "Español"; 
        zonaHoraria = "GMT-5"; 
    }

public:
    static Configuracion* getInstancia() {
        if (instancia == nullptr)
            instancia = new Configuracion();
        return instancia;
    }

    void mostrar_configuracion() {
        cout << "Idioma: " << idioma << "\nZona Horaria: " << zonaHoraria << endl;
    }
};

Configuracion* Configuracion::instancia = nullptr;

int main() {
    Configuracion* c1 = Configuracion::getInstancia();
    Configuracion* c2 = Configuracion::getInstancia();
    Configuracion* c3 = Configuracion::getInstancia();

    cout << "Dirección c1: " << c1 << endl;
    cout << "Dirección c2: " << c2 << endl;
    cout << "Dirección c3: " << c3 << endl;

    c1->mostrar_configuracion();
}
