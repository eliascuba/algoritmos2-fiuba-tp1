#include "Herta.hpp"
#include "iostream"

using namespace std;

int main() {

    std::srand(static_cast<unsigned>(time(nullptr)));
    Herta miherta;
    string mensaje;
    cout << "Bienvenido a chat con Herta\n";
    cout << "Ingrese un mensaje para empezar (para salir ingrese 0): \n";

    while (getline(cin, mensaje) && mensaje != "0") {
        miherta.responder(mensaje);
    }
    return 0;
}