#include "Herta.hpp"
#include "random"

const size_t CANTIDAD_MAXIMA_RESPUESTAS_MANUAL = 6;

Herta::Herta(){
    contador_respuestas = 0;
}


void Herta::responder(std::string mensaje) {

    mensaje = texto_a_minusculas((mensaje));

    if (contador_respuestas == 0 || contador_respuestas > 5) {
        imprimir_respuesta_automatica();

    } else if (palabra_esta_en_texto("kuru", mensaje) || palabra_esta_en_texto("kururin", mensaje)) {
            responder_random_kuru();

    } else if (palabra_esta_en_texto("hola", mensaje)) {
        std::cout << "Hola.\n";

    } else if (palabra_esta_en_texto("problema", mensaje)) {
        std::cout << "No te preocupes. Ya esta solucionado.\n";

    } else if (palabra_esta_en_texto("preocupado", mensaje) || palabra_esta_en_texto("preocupada", mensaje)) {
        std::cout << "De que te preocupas si yo estoy aqui?\n";

    } else if (palabra_esta_en_texto("simulado", mensaje)) {
        std::cout << "La actualizacion del Universo Simulado ya esta lista, ven a probarla.\n";

    } else if (mensaje == "eres herta?") {
        std::cout << "Quieres una selfie para demostrartelo o que?\n";

    } else if (mensaje == "y tu marioneta?") {
        std::cout << "Vaya, parece que la perdi. No me extrania que no la encuentre.\n";

    } else {
        respuesta_random();
    }
    contador_respuestas++;
}


std::string Herta::texto_a_minusculas(std::string texto){

    std::string resultado = "";
    for (char caracter : texto){
        resultado += char(std::tolower(caracter));
    }
    return resultado;
}


bool Herta::palabra_esta_en_texto (std::string palabra, std::string texto){
    return texto.find(palabra) != std::string::npos;
}


void Herta::imprimir_respuesta_automatica(){
    std::cout << "[Respuesta automatica] Hola. En este momento no estoy disponible, y no me pondre en contacto contigo mas tarde.\n";
}


void Herta::responder_random_kuru() {
    int numero_aleatorio = std::rand() % 3;

    if (numero_aleatorio == 0) {
        std::cout << "KURU\n";

    } else if (numero_aleatorio == 1) {
        std::cout << "KURU KURU\n";

    } else {
        std::cout << "KURURIN\n";
    }
}


void Herta::respuesta_random() {
    int numero_aleatorio = std::rand() % 2;

    if (numero_aleatorio == 0) {
        std::cout << "Oh.\n";

    } else {
        std::cout << "...\n";
    }
}