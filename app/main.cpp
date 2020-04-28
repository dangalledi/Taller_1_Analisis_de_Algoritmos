#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

/**
 * Función donde valida los caracteres del lenguaje
 */
bool ValidacionDelLenguaje( string argumento );

/**
 * Función donde validan las condiciones 
 */
bool CondicionDelLenguaje( string argumento );

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

    string argumento = argv[1];  // char -> string

    if (argc == 2) {
        // @TODO programar proyecto
        if ( ValidacionDelLenguaje( argumento ) == false ){   // validacion del lenguaje a , b , o , *
            cout << "No cumple la condición" << endl ;
            return 0;
        }else {
            if ( CondicionDelLenguaje( argumento ) == false ){  // Validacion de las condiciones 
                cout << "No cumple la condición" << endl ;
                return 0;
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

bool ValidacionDelLenguaje( string argumento ){

    int contador =0;

    for (size_t n = 0; n < argumento.length(); n++){
        if (argumento[ n ] == 'a' || argumento[ n ] == 'b' || argumento[ n ] == 'o' || argumento[ n ] == '∗'  ) 
            contador++;
    }
    if (contador == argumento.length())
        return true;
    else 
        return false;
};

bool CondicionDelLenguaje(string argumento){
  if (argumento[0]=='a')
    {
    for(size_t n =1; n < argumento.length()-1; n++){
      if(argumento[n] == '*')
        return false;
      }
    }
  else 
    return false;
  return true;
}

void participantes() {
    std::cout << std::endl << "=== Taller 01 ===" << std::endl;
    std::cout << std::endl << "Edgar Matus"; 
    std::cout << std::endl << "Oscar Peñaloza"; 
    std::cout << std::endl << "Daniela Galleguillos" << std::endl; 
}