// Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
void nuevo(int numero)
	{
		printf("\n\t\tPresione enter para continuanr <--|");
		getchar();
		system("cls");
		printf("\nNuevo ejercicio Numero-%d", numero);
		printf("\n*******************************************************************************");
	}
//Ej 006_2
void sumar_valor(int dato_en_funcion_1, int dato_en_funcion_2); /* prototipo de la void restar_valores(int dato_en_funcion_1,int dato_en_funcion_2)funcion devuelve algun valor y que valores recibe*/
void restar_valor(int dato_en_funcion_1,int dato_en_funcion_2);/* prototipo de la funcion */

int sumar_valor_return(int dato_en_funcion_1,int dato_en_funcion_2);/* prototipo de la funcion */
int restar_valor_return(int dato_en_funcion_1,int dato_en_funcion_2);/* prototipo de la funcion */


//int sumar_valor_variable;/* declaracion de variables*/
int numero_in, numero_out, numero1, numero2,retorno;/* declaracion de variables*/

int main(void)
{
	printf("\ntipo_de_retorno nombre_de_la_funcion (lista_de_par'ametros con su tipo declarado); <--prototipo antes del main. LLeva ;");

	printf("\ntipo_de_retorno nombre_de_la_funcion (lista_de_par'ametros)<--fuera del main");
	printf("\n	{");
	printf("\n	cuerpo_de_la_funcion");
	printf("\n	return expresion,<-- que debe concordar con el tipo de funcion declarada");
	printf("\n			tipo_de_retorno:	es el tipo del valor devuelto por la funcion, o, en caso de que la funcion no devuelva valor alguno, la palabra reservada void.");
	printf("\n	}<--cierro la funcion");
	printf("\n	Trototipo:	declara la funcion y su tipo de retorno, Se declaran los parametros de entrada. Termina en ;");
	printf("\n	");
	printf("\n	nombre_de_la_funcion:	es el nombre o identificador asignado a la funcion. No lleva ; y el contenido o cuerpo va entre llaves {}");
	printf("\n	lista_de_par'ametros:	es la lista de declaracion de los par'ametros que son pasadosa la funcion y van entre parentesis(). Estos se separan por comas. Debemos tener en cuenta que pueden existir funciones que no utilicen par'ametros.");
	printf("\n	cuerpo_de_la_funcion:	estdato_en_funcion_2'a compuesto por un conjunto de sentencias que llevana cabo la tarea espec'ifica para la cual ha sido creada la funcion.Va entre llaves.");
	printf("\n	return expresion:		Es parte del cuerpo de la funcion, mediante la palabra reservada return, se devuelve el valor de la funcion, en este caso representado por expresion que deve concordar con lo declarado en el nombre y prototipo");
	nuevo(0);

	printf("\n    tipo de funcion dependiendo del retorno, Si retorno no retorno nada sera Void, un numero entero sera int, float para un decimal, etc ");
	printf("\n    |                                                                      ");
	printf("\n    |          cualquier nombre, no debe iniciar con numero.               "); 
	printf("\n    |          |                                                           "); 
	printf("\n    void nombre_de_la_funcion (int variable, float *puntero)               ");
	printf("\n                               |      |       |    |   |                   ");
	printf("\n                               |      |       |    |   nombre              ");
	printf("\n      tipo parametros de entrada      |       |    |                       ");
	printf("\n                                      |       |    * referencia a puntero  ");
	printf("\n                                      |       |                            ");
	printf("\n                                      |       tipo de parametro            ");
	printf("\n                                      |                                    ");
	printf("\n                                      Nombre de la variable                ");
	nuevo(0);
	printf("\nPrototipo                     define la funcion");
	printf("\n    int nombre_de_la_funcion (int variable, float *puntero);<------requiere punto y coma");
	printf("\n");
	printf("\nllamado a la funcion");
	printf("\n    nombre_de_la_funcion (variable, *puntero);<------requiere punto y coma               ");
	printf("\n");
	printf("\n");
	printf("\nIngreso a la funcion");
	printf("\n    int nombre_de_la_funcion (int variable, float *puntero);<------No lleva punto y coma");
	printf("\n    {               El cuerpo de la funcion va ente llaves");
	printf("\n       printf(variable);");
	printf("\n       *puntero = Variable + 10;");
	printf("\n    }");
}
