#include <iostream>
#include <fstream>
#include <mutex>
#include <ctime>
using namespace std;

class LoggerTS {
private:
    static LoggerTS* instancia;
    static mutex mtx;
    ofstream archivo;

    LoggerTS() { archivo.open("bitacoraThreadSafe.log", ios::app); }

public:
    static LoggerTS* getInstancia() {
        if (instancia == nullptr) {         
            lock_guard<mutex> lock(mtx);
            if (instancia == nullptr)        
                instancia = new LoggerTS();
        }
        return instancia;
    }

    void log(string mensaje) {
        lock_guard<mutex> lock(mtx);

        time_t ahora = time(0);
        archivo << "[" << ctime(&ahora) << "] " << mensaje << endl;
    }
};

LoggerTS* LoggerTS::instancia = nullptr;
mutex LoggerTS::mtx;

int main() {
    LoggerTS::getInstancia()->log("Mensaje seguro 1");
    LoggerTS::getInstancia()->log("Mensaje seguro 2");

    cout << "Mensajes escritos con logger thread-safe.\n";
}
