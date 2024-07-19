#ifndef TP1_1C2024_HERTA_HPP
#define TP1_1C2024_HERTA_HPP

#include <string>
#include "iostream"

class Herta {

private:

    //cuenta la cantidad de veces que respondió Herta
    size_t contador_respuestas;


    /* PRE: recibe un string
     * POST: devuelve el texto recibido como argumento en minusculas
     */
    std::string texto_a_minusculas (std::string texto);


    /* PRE: recibe dos strings
     * POST: devuelve "true" si la cadena "palabra" se encuentra como subcadena dentro de la cadena "texto"
     */
    bool palabra_esta_en_texto (std::string palabra, std::string texto);


    /* PRE: -
     * POST: imprime la respuesta automática de Herta
     */
    void imprimir_respuesta_automatica ();


    /* PRE: -
     * POST: imprime de manera aleatoria uno de los siguientes strings: "KURU", "KURU KURU", "KURURIN"
     */
    void responder_random_kuru ();


    /* PRE: -
     * POST: imprime de manera aleatoria uno de los siguientes strings: "Oh.", "..."
     */
    void respuesta_random ();

public:

    //Constructor
    Herta();


    /* PRE: recibe un string
     * POST: imprime un mensaje según las condiciones del trabajo
     */
    void responder(std::string mensaje);
};

#endif