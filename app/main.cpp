#include <iostream>
#include <cstdlib>
#include <string.h>


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

    string argumento = argv[1];

    if (argc > 1) {
        // @TODO programar proyecto
        if (argv[ 1 ] == 'a'){
            cout << "The name used to start the program: " << argv[ 0 ]
                << "\nArguments are:\n";
            
        }if( argc[1]! == 'a'){
            cout << "No cumple la condición";
    }else {
        // Mostrar los integrantes
        participantes();
    }
    return EXIT_SUCCESS;
}
};

void participantes() {
    std::cout << std::endl << "=== Taller 01 ===" << std::endl;
    std::cout << std::endl << "Edgar Matus"; 
    std::cout << std::endl << "Oscar Peñaloza"; 
    std::cout << std::endl << "Daniela Galleguillos" << std::endl; 
};

bool ValidacionDelLenguaje(string argumento[] ){

int validacionLargoArgumento = 0;

    for (int n = 1; n < argumento.length(); n++)
        cout << n << ": " << argumento[ n ] << '\n';
        if (argumento[ n ] == 'a' || argumento[ n ] == 'b' || argumento[ n ] == 'o' || argumento[ n ] == '∗'  ) {
            cout<< "Holiiii" << endl;
            validacionLargoArgumento++;        
            }
    }
    if (validacionLargoArgumento == argumento.length() ){
        return true;
    }else{
        return false;
    }
}