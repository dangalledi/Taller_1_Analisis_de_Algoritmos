#include <iostream>
#include <cstdlib>
#include <string.h>
#include<cstring>
#include<string>

using namespace std;

void participantes() ;
string dobleNegacion(string argumento);
string implicacion (string argumento);
string agregary(string argumento);
string morgan(string argumento);
string tautologia (string argumento);
string negacionsimple(string argumento);


int main( int argc, char* argv[] ) {

    if (argc == 2) //falta su for y limpiar " " "()" "[]"
    {
        // @TODO programar proyecto
        string afirmacion = argv[1];  // char -> string
        cout << afirmacion << endl;
        
        afirmacion = implicacion(afirmacion);
        cout << afirmacion << endl;
        afirmacion = morgan( afirmacion);
        cout << afirmacion << endl;
        afirmacion = tautologia (afirmacion);
        cout << afirmacion << endl;
        afirmacion = negacionsimple(afirmacion);
        cout << afirmacion << endl;
        afirmacion = dobleNegacion(afirmacion);
        cout << afirmacion << endl;
    }
    else
    {
        // Mostrar los integrantes
        participantes();
    }   
    return EXIT_SUCCESS;
};


void participantes() 
{
    std::cout << std::endl << "=== Taller 01 ===" << std::endl;
    std::cout << std::endl << "Edgar Matus"; 
    std::cout << std::endl << "Oscar Peñaloza"; 
    std::cout << std::endl << "Daniela Galleguillos" << std::endl; 
}

string dobleNegacion(string argumento) //~~ = '  ' --> falta luego quita los espacios
{
  for (int i=0; i < (argumento.length()-1) ; i++ )
  {
    if ((argumento[i]== '~') && (argumento[i+1])== '~')
    {
      argumento[i] = ' ';
      argumento[i+1] = ' ';
    }
  }
  return argumento;
}

string implicacion (string argumento) // p=>q --> ~p && q 
{
  for (int i=0; i < (argumento.length()-1) ; i++ )
  {
    if ((argumento[i]== '=') && (argumento[i+1])== '>')
    {
      if (argumento[i-1]== 'p')
      {
        argumento[i-1] ='~';
        argumento[i] = 'p';
        argumento[i+1] = '&';
      }
      else if (argumento[i-1]== 'q')
      {
        argumento[i-1] ='~';
        argumento[i] = 'q';
        argumento[i+1] = '&';
      }
      else if (argumento[i-1]== 'r')
      {
        argumento[i-1] ='~';
        argumento[i] = 'r';
        argumento[i+1] = '&';
      }
    }
  }
  argumento = agregary(argumento);
  return argumento;
}

string agregary(string argumento) //agrega & faltante
{
  string palabra = "";
  for (int i=0; i < (argumento.length()) ; i++ )
  {
    if ((argumento[i]== '&') && (argumento[i+1]!='&') && (argumento[i-1] !='&'))
    {
      palabra = palabra + "&&";
    }
    else
    {
      palabra= palabra + argumento[i];
    }
  }
  return palabra;
}

string morgan(string argumento)//~(p&&q)--> ~p||~q /~(q&&p)--> ~q&&~p /~(q||p)--> ~q||~p /~(p||q)--> ~p&&~q 
{
  for (int i=0; i< (argumento.length()-1) ; i++ )
  {
    if ((argumento[i]== '~') && (argumento[i+1]== '('))
    {
      if ((argumento[i+3]== '&') && (argumento[i+4]== '&'))
      {
        if((argumento[i+2]== 'q') && (argumento[i+5]== 'p') || (argumento[i+2]== 'p') && (argumento[i+5]== 'q') )
        {
          argumento[i+1] = 'p';
          argumento[i+2] = '|';
          argumento[i+3] = '|';
          argumento[i+4] = '~';
          argumento[i+5] = 'q';
         // ~p&&~q)
        }
        if((argumento[i+2]== 'q') && (argumento[i+5]== 'r') || (argumento[i+2]== 'r') && (argumento[i+5]== 'q') )
        {
          argumento[i+1] = 'r';
          argumento[i+2] = '|';
          argumento[i+3] = '|';
          argumento[i+4] = '~';
          argumento[i+5] = 'q';
         // ~r&&~q)
        }
        if((argumento[i+2]== 'r') && (argumento[i+5]== 'p') || (argumento[i+2]== 'p') && (argumento[i+5]== 'r') )
        {
          argumento[i+1] = 'p';
          argumento[i+2] = '|';
          argumento[i+3] = '|';
          argumento[i+4] = '~';
          argumento[i+5] = 'r';
         // ~p&&~r)
        }
      }
      if ((argumento[i+3]== '|') && (argumento[i+4]== '|'))
      {
        if((argumento[i+2]== 'q') && (argumento[i+5]== 'p') || (argumento[i+2]== 'p') && (argumento[i+5]== 'q') )
        {
          argumento[i+1] = 'p';
          argumento[i+2] = '&';
          argumento[i+3] = '&';
          argumento[i+4] = '~';
          argumento[i+5] = 'q';
        }
          //~p||~q)
        if((argumento[i+2]== 'q') && (argumento[i+5]== 'r') || (argumento[i+2]== 'r') && (argumento[i+5]== 'q') )
        {
          argumento[i+1] = 'r';
          argumento[i+2] = '&';
          argumento[i+3] = '&';
          argumento[i+4] = '~';
          argumento[i+5] = 'q';
         // ~r||~q)
        }
        if((argumento[i+2]== 'r') && (argumento[i+5]== 'p') || (argumento[i+2]== 'p') && (argumento[i+5]== 'r') )
        {
          argumento[i+1] = 'p';
          argumento[i+2] = '&';
          argumento[i+3] = '&';
          argumento[i+4] = '~';
          argumento[i+5] = 'r';
         // ~p||~r)
        }
      }
    }
  }
  return argumento;
}

string tautologia (string argumento) // p && p = p // q||q =q // ~p && ~p = ~p // ~q||~q =~q --> falta quitar espacios
{
  for (int i=0; i< (argumento.length()-1) ; i++ )
  {
    if (((argumento[i]== '|') && (argumento[i+1]== '|')) || ((argumento[i]== '&') && (argumento[i+1]== '&')) )
    {
      if ((argumento[i-1]== 'p') && (argumento[i+2]== 'p'))
      {
        argumento[i-1] = 'p';
        argumento[i] = ' ';
        argumento[i+1] = ' ';
        argumento[i+2] = ' ';
      }
      if ((argumento[i-1]== 'q') && (argumento[i+2]== 'q'))
      {
        argumento[i-1] = 'q';
        argumento[i] = ' ';
        argumento[i+1] = ' ';
        argumento[i+2] = ' ';
      }
      if ((argumento[i-1]== 'r') && (argumento[i+2]== 'r'))
      {
        argumento[i-1] = 'r';
        argumento[i] = ' ';
        argumento[i+1] = ' ';
        argumento[i+2] = ' ';
      }
      if ((argumento[i-1]== 'p') && (argumento[i+2]== '~') && (argumento[i+3]== 'p') && (argumento[i-2]== '~'))//negacion
      {
        argumento[i-1] = '~';
        argumento[i] = 'p';
        argumento[i+1] = ' ';
        argumento[i+2] = ' ';
        argumento[i-2] = ' ';
        argumento[i+3] = ' ';
      }
      if ((argumento[i-1]== 'q') && (argumento[i+2]== '~') && (argumento[i+3]== 'q') && (argumento[i-2]== '~'))//negacion
      {
        argumento[i-1] = '~';
        argumento[i] = 'q';
        argumento[i+1] = ' ';
        argumento[i+2] = ' ';
        argumento[i-2] = ' ';
        argumento[i+3] = ' ';
      }
      if ((argumento[i-1]== 'r') && (argumento[i+2]== '~') && (argumento[i+3]== 'r') && (argumento[i-2]== '~'))//negacion
      {
        argumento[i-1] = '~';
        argumento[i] = 'r';
        argumento[i+1] = ' ';
        argumento[i+2] = ' ';
        argumento[i-2] = ' ';
        argumento[i+3] = ' ';
      }
    }
  }
  return argumento;
}

string negacionsimple(string argumento)// imple negacion ~[q bla bla bla] = ~q ~bla ~bla ~bla
{
  string palabra = "";
  for (int i=0; i< (argumento.length()-1) ; i++ )
  {
    if(( argumento[i] == '~') && (argumento[i+1] == '['))
    {
      for (int j=i+1; j < (argumento.length()-1) ; j++ )
      {
        if ((argumento[j] == 'p') || (argumento[j] == 'q')  || (argumento[j] == 'r') )
        {
          palabra = palabra + '~';
          palabra = palabra + argumento[j];
          i++;
        }
        else
        {
          palabra = palabra+ argumento[j];
          i++;
        }
      }
    }
    else
    {
      palabra = palabra + argumento[i];
    }
  }
  return palabra;
}