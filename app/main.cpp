#include <iostream>
#include <cstdlib>


using namespace std;

/**
 * Función que muestra los participantes del grupo
 */
void participantes();

/**
 * Taller computacional
 * @param argc cantidad de argumentos
 * @param argv argumentos
 * @return El código de salida del programa
 */
int main( int argc, char* argv[] ) {

    /**
     * Incluir acá la lógica del programa
     * 
     */
    if (argc > 1) {
        // @TODO programar proyecto
        if (argv[ 1 ] == a){
            cout << "The name used to start the program: " << argv[ 0 ]
                << "\nArguments are:\n";
            for (int n = 1; n < argc; n++)
                cout << n << ": " << argv[ n ] << '\n';
                if (argv[ n ] == 'a' || argv[ n ] == 'b' || argv[ n ] == 'o' || argv[ n ] == '∗'  ) {

                }
        }if( argc[1]! == 'a'){
            cout << "No cumple la condición"
    }else {
        // Mostrar los integrantes
        participantes();
    }
    return EXIT_SUCCESS;
}

void participantes() {
    std::cout << std::endl << "=== Taller 01 ===" << std::endl;
    std::cout << std::endl << "Edgar Matus"; 
    std::cout << std::endl << "Oscar Peñaloza"; 
    std::cout << std::endl << "Daniela Galleguillos" << std::endl; 
}