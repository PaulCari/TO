#include <iostream>
using namespace std;

class ConexionBD {
private:
    static ConexionBD* instancia;
    bool conectado;

    ConexionBD() { conectado = false; }

public:
    static ConexionBD* getInstancia() {
        if (instancia == nullptr)
            instancia = new ConexionBD();
        return instancia;
    }

    void conectar() {
        if (!conectado) {
            conectado = true;
            cout << "Conectado a la Base de Datos.\n";
        } else {
            cout << "Ya existe una conexión activa.\n";
        }
    }

    void desconectar() {
        if (conectado) {
            conectado = false;
            cout << "Desconectado de la Base de Datos.\n";
        }
    }

    void estado() {
        cout << "Estado: " << (conectado ? "Conectado" : "Desconectado") << endl;
    }
};

ConexionBD* ConexionBD::instancia = nullptr;

int main() {
    ConexionBD* c1 = ConexionBD::getInstancia();
    ConexionBD* c2 = ConexionBD::getInstancia();

    c1->conectar();
    c2->estado();
    c2->conectar();
    c1->desconectar();
}
