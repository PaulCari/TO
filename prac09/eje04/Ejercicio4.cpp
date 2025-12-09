#include <iostream>
using namespace std;

class ControlJuego {
private:
    static ControlJuego* instancia;
    int nivel, puntaje, vidas;

    ControlJuego() : nivel(1), puntaje(0), vidas(3) {}

public:
    static ControlJuego* getInstancia() {
        if (instancia == nullptr)
            instancia = new ControlJuego();
        return instancia;
    }

    void mostrarEstado() {
        cout << "Nivel: " << nivel << "  Puntaje: " << puntaje << "  Vidas: " << vidas << endl;
    }

    void sumarPuntos(int p) { puntaje += p; }
    void perderVida() { vidas--; }
    void subirNivel() { nivel++; }
};

ControlJuego* ControlJuego::instancia = nullptr;

void jugador() {
    ControlJuego::getInstancia()->sumarPuntos(50);
}

void enemigo() {
    ControlJuego::getInstancia()->perderVida();
}

void interfaz() {
    ControlJuego::getInstancia()->mostrarEstado();
}

int main() {
    jugador();
    enemigo();
    ControlJuego::getInstancia()->subirNivel();
    interfaz();
}
