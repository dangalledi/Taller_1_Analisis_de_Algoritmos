# Taller 1 de Análisis de algoritmos

## Lenguaje formal
Suponiendo siguiente lenguaje formal:

![L_5=\{ S_5, \varphi _5 \}](https://render.githubusercontent.com/render/math?math=L_5%3D%5C%7B%20S_5%2C%20%5Cvarphi%20_5%20%5C%7D)
donde:
![S_5=\{ a, b, o, *\}](https://render.githubusercontent.com/render/math?math=S_5%3D%5C%7B%20a%2C%20b%2C%20o%2C%20*%5C%7D)
![\varphi _5=\{ x \in E_S_5 / x](https://render.githubusercontent.com/render/math?math=%5Cvarphi%20_5%3D%5C%7B%20x%20%5Cin%20E_S_5%20%2F%20x) empieza con ![a](https://render.githubusercontent.com/render/math?math=a) y no contiene ![* \}](https://render.githubusercontent.com/render/math?math=*%20%5C%7D).
  
#### Ejemplo
```bash
./dist/programa a**o

NO Cumple con la condición.
```

## Simplificación Lógica

El programa en C/C++ debe simplificar expresiones lógicas con las reglas de sustitución necesarias para la ejecución del mismo. El programa que sólo se ingresarán caracteres válidos y que el argumento estará entre comillas dobles.

 Usar sólo los siguientes símbolos:
   - Letras: `p`, `q` y `r`.
   - Negación: ¬ por `~`
   - Implicancia: → por `=>`
   - Conjunción: v por `&&`
   - Disyunción: ʌ por `||`

#### Ejemplo
```bash
./dist/programa “~ [ p => ~ ( q && p ) ]”

p || q

Demostración:
“~ [ p => ~ ( q && p ) ]”
“~ [~ p && ~ ( q && p ) ]”
“~ [~ p && ~ q || ~p ) ]”
“~ [~ p &&~p ||~ q ) ]”
“~ [~ p &&~ q ) ]”
“p || q”

```

## Como usar ? 

Para compilar el proyecto debe posicionarse en la carpeta correspondiente a la tarea que quiere ejecutar:

* app --> Lenguaje formal
* app2 --> Simplificación Lógica

compilar: 

```bash
make
```
y luego para ejecutar el programa :
```bash
./dist/programa [argumento]
```
## Grupo C
+ Edgar Matus 
+ Oscar Peñaloza
+ Daniela Galleguillos
