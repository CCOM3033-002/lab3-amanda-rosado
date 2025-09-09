/* 
Amanda Rosado Rosado
801-23-8238
Lab 3, Tres Numeros Aleatorios
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

    //Se deja saber proposito del programa al usuario
    cout << "El proposito de este programa es que genere tres números enteros aleatorios" << endl
         << "(cada vez que se ejecute el programa deben generar tres números distintos)." << endl
         << "Los números deben estar entre 0 y 100 (incluidos)." << endl
         << "Luego su programa debe ordenar los números de mayor a menor (orden descendiente).";

    //Se inicializa el generador de numeros aleatorios
    srand(time(0));

    //Inicializo y le doy valor a las tres variables de numeros random que da el programa
    //Los numeros son del 0 al 100 (el 0 y el 100 tambien incluidos  
    int randomNum1 = rand() % (100 - 0 + 1) + 0;
    int randomNum2 = rand() % (100 - 0 + 1) + 0;
    int randomNum3 = rand() % (100 - 0 + 1) + 0;

    //Los tres numeros random generados por el programa
    cout << "\n\nEstos son los tres numeros aleatorios fuera de orden: " << randomNum1 << ", " << randomNum2 << ", " << randomNum3 << "." << endl;

    
    /*En los tres if se utiliza la variable 'var_temp' que significa
    variable temporera, solo existe dentro de ese ciclo if, por eso 
    no influye con los demas if a pesar de tener el mismo nombre. 
    Se usa para poder hacer ese intercambio de valores. */

    if (randomNum1 < randomNum2) {  //Se verifica si la variable 1 es menor que la variable 2,
        int var_temp = randomNum1;  //si lo es, el valor de la 1 se intercambia con la del 2,
        randomNum1 = randomNum2;    //utilizando una variable temporera.
        randomNum2 = var_temp;      
    }


    if (randomNum1 < randomNum3) {  //Se verifica si la variable 1 es menor que la variable 3,
        int var_temp = randomNum1;  //si lo es, el valor de la 1 se intercambia con la del 3
        randomNum1 = randomNum3;    //(esto ocurre ya despues de haber hecho el primer intercambio de valores en el primer if)
        randomNum3 = var_temp;    
    }


    if (randomNum2 < randomNum3) {  //Se verifica si la variable 2 es menor que la variable 3,
        int var_temp = randomNum2;  //si lo es, el valor de la 2 se intercambia con la del 3,
        randomNum2 = randomNum3;    //(esto ocurre ya despues de haber hecho el segundo intercambio de valores en el segundo if)
        randomNum3 = var_temp;      
    }


    //Se despliegan resultados despues de haber ordenado los numeros utilizando tres estructuras de if
    cout << "Estos son los tres numeros aleatorios en orden descendiente: " << randomNum1 << ", " << randomNum2 << ", " << randomNum3 << "." << endl;

    //Termina el programa
    return 0;
}