#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;


/**
 * Función que muestra los participantes del grupo
 */
void participantes();
string valido(string valor);
bool pertenece(string valor);
bool contiene_asterisco(string valor);
bool comienza_con_a(string valor);
/**
 * Taller computacional
 * @param argc cantidad de argumentos
 * @param argv argumentos
 * @return El código de salida del programa
 */
int main(int argc, char** argv) {

    
    if (argc > 1) {
      cout << "El nombre del programa es: " << argv[ 0 ]
           << "\nLos argumentos son:\n";
      for (int n = 1; n < argc; n++){
        string argumento = argv[n];
        std::cout << setw( 2 ) << n << ": " << argv[n]<< " > " << valido(argumento)<< '\n';


}
    } else {
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




string valido(string n){
if (pertenece(n)==true && comienza_con_a(n)==true){
        if (contiene_asterisco(n)==false){
            return "Palabra valida";
        }

}

return "No cumple la condicion";
}



bool pertenece(string valor){
    
int largo = valor.size(); //tamaño
    
for (int n = 0; n < largo ;n++){ //cada letra del argumento
    string letra = valor.substr(n,1);
    if ((letra == "a" || letra == "b" || letra == "o" || letra == "*" )== false){
        return false;
    }
}
return true;
}




bool contiene_asterisco(string valor){

    if ( valor.find("∗",0) != -1){
        return true;
    }

    return false;
}




bool comienza_con_a(string valor ){
    if ( valor.find("a",0) == 0){
        return true;
    }

    return false;

}
