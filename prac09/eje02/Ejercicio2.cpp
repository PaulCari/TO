#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

class Logger {
private:
    static Logger* instancia;
    ofstream archivo;

    Logger() {
        archivo.open("bitacora.log", ios::app);
    }

public:
    static Logger* getInstancia() {
        if (instancia == nullptr)
            instancia = new Logger();
        return instancia;
    }

    void log(string mensaje) {
        time_t ahora = time(0);
        archivo << "[" << ctime(&ahora) << "] " << mensaje << endl;
    }
};

Logger* Logger::instancia = nullptr;

int main() {
    Logger::getInstancia()->log("Inicio del programa");
    Logger::getInstancia()->log("Accion del usuario");
    Logger::getInstancia()->log("Fin del programa");

    cout << "Se escribieron mensajes en bitacora.log" << endl;
}