#include <iostream>
#include <cstdlib>
#include <string.h>


using namespace std;

/**
 * Función que muestra los participantes del grupo
 */
void participantes();

/**
 * Función funcion donde valida los caracteres del lenguaje
 */
bool ValidacionDelLenguaje(char argumento);

/**
 * Taller computacional
 * @param argc cantidad de argumentos
 * @param argv argumentos
 * @return El código de salida del programa
 */
int main( int argc, char* argv[] ) {

    string argumento = argv[1];  // char -> string

    if (argc > 1) {
        // @TODO programar proyecto
        if (argumento[ 0 ] != 'a'){   // validacion de entrada x empiezacon"a" 
            cout << "No cumple la condición" << endl ;
            return 0;
        }else {
            for (size_t n = 1; n < argumento.length(); n++){
                if ( !ValidacionDelLenguaje( argumento[n] ) ){
                    cout << "No cumple la condición" << endl ;
                    return 0;
                }if (argumento[n]=='*'){  //Validacion de contenido no contiene a "*"
                    cout << "No cumple la condición" << endl ;
                    return 0;
                }
            }
            cout << "Palabra valida: "<< argv[1] << endl;
            return EXIT_SUCCESS;
        }    
   
    }else{
        // Mostrar los integrantes
        participantes();
    }   
    return EXIT_SUCCESS;
};


bool ValidacionDelLenguaje( char argumento[] ){
    for (size_t n = 1; n < strlen(argumento); n++){
        cout << n <<": " << argumento[ n ] << '\n';
        if (argumento[ n ] == 'a' || argumento[ n ] == 'b' || argumento[ n ] == 'o' || argumento[ n ] == '∗'  ) 
                return true;
        else 
            false;

    }
};

void participantes() {
    std::cout << std::endl << "=== Taller 01 ===" << std::endl;
    std::cout << std::endl << "Edgar Matus"; 
    std::cout << std::endl << "Oscar Peñaloza"; 
    std::cout << std::endl << "Daniela Galleguillos" << std::endl; 
}