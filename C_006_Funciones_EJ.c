#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//void nuevo(int numero);
void nuevo(int numero)
	{
		printf("\n\t\tPresione enter para continuanr <--|");
		getchar();
		system("cls");
		printf("\nNuevo ejercicio Numero-%d", numero);
		printf("\n*******************************************************************************");
	}
int main(void)
{
	printf("\nFunciones");
	printf("\n=========");
	printf("\nUna funci'on es como una caja negra: una vez creada no debemos preocuparnos por lo que tiene en su interior, simplemente, tenemos que recordar su nombre y los datos que necesita para resolver un proceso. Generalmente, devuelven un resultado.");
	printf("\nLa principal virtud de una funci'on est'a en la reutilizaci'on del c'odigo, es decir, una vez creada puede ser llamada cada vez que se necesite. Para mejor aprovechamiento debemos procurar que las funciones ofrezcan soluciones a necesidades muy concretas.");

	printf("\nFunciones con un n'umero fijo de par'ametros");
	printf("\nLa siguiente funci'on calcula el 'area de un tri'angulo. Una vez definida se utiliza para calcular el 'area de dos tri'angulos de distintas dimensiones.");
	printf("\nPara definir la funci'on escribiremos def seguido del nombre de la funci'on y entre par'entesis los dos par'ametros que son necesarios para calcular el 'area del tri'angulo: base y altura. Con return la funci'on devolver'a el resultado de la f'ormula matem'atica expresada. Los dos par'ametros son obligatorios. Si alguno falta habr'a una excepci'on.");

	nuevo(0);
	printf("\n*******************************************************************************");
	printf("\n*                                                                             *");
	printf("\n*                              Funciones                                      *");
	printf("\n*                                                                             *");
	printf("\n*******************************************************************************");


	//Ejercicio_Funciones_Ej_001
	printf("\nIngresa si la persona es de genero Masculino o Femenino(f/m). Dependiendo del resultado llama a una funcion distinta que imprima el piso donde estan los toiletes correspondientes de que sea masculino (2do piso) o femenino(1er piso)");
	nuevo(1);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_002
	printf("\nIngresa I para Iniciar y llamar a una funcion, dentro de esta ingresa un nombre e imprimelo en mayusculas");
	nuevo(2);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_003
	printf("\nIngresa S para suma y R para restar. LLama a una funcion distinta dentro de esta pregunta los dos numeros, operalos e imprime el resultado");
	nuevo(3);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_004
	printf("\nModifica el anterior\nIngresa S para suma y R para restar, pregunta los dos numeros. Luego llama a la funcion suma o resta y pasale los datos (desde la funcion principla a las funciones elejida-  suma o resta). Operalos e imprime el resultado dentro de esta ");
	nuevo(4);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_005
	printf("\nModifica el anterior\nIngresa S para suma y R para restar, pregunta los dos numeros. Luego llama a la funcion suma o resta y pasale los datos (desde la funcion principla a las funciones elejida-  suma o resta). Operalos y regreda a la funcion prinsipal el resultado. Imprime el resultado dentro de la f.principal ");
	nuevo(5);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_006
	printf("\nIngresa 2 datos alfanumericos (Ej.usuarios, passwords, email,etc), envialos a una funcion, compara si son iguales, imprimel en main el resultado");
	nuevo(6);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_007
	printf("\nIngresa 3 datos numericos envialos a una funcion y devuelve cual es el mayor, imprimelo");
	nuevo(7);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_008
	printf("\nDesde el siguiente array de datos numericos, busca cual es el mayor mediante una funcion e imprimelo");
	printf("\nlista[]={0,87,77,35,1,32,98,56,87,36,66,32,44,3,89,55,4,2}");
	nuevo(8);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_009
	printf("\nEn el main pide un valor de edad mediante un string. Enviala a una funcion donde chequea que el dato sea numerico y si es correcto guardala en una variable numerica, sino vuelve a pedir el dato");
	nuevo(9);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_010
	printf("\nDado un array lista[]={0,87,77,35,1,32,98,56,87,36,66,32,44,3,89,55,4,2}; ordenala de mayor a menor en una funcion(sin sort) -comparar con sort");
	nuevo(10);

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones
	printf("\n*******************************************************************************");
	printf("\n*                                                                             *");
	printf("\n*                              Funciones con punteros                         *");
	printf("\n*                                                                             *");
	printf("\n*******************************************************************************");
	printf("\nHas lo los ejercicios anteriores 6 a 10 mediante punteros");
	nuevo(0);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_011 desde 006
	printf("\nHas lo los ejercicios anteriores 6 mediante punteros");
	printf("\nIngresa 2 datos alfanumericos (Ej.usuarios, passwords, email,etc), envialos a una funcion, compara si son iguales, imprimel en main el resultado");
	nuevo(11);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_012 desde 007
	printf("\nHas lo los ejercicios anteriores 7 mediante punteros");
	printf("\nIngresa 3 datos numericos envialos a una funcion y devuelve cual es el mayor, imprimelo");
	nuevo(12);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_013 desde 008
	printf("\nHas lo los ejercicios anteriores 8 mediante punteros");
	printf("\nDesde el siguiente array de datos numericos, busca cual es el mayor mediante una funcion e imprimelo");
	printf("\nlista[]={0,87,77,35,1,32,98,56,87,36,66,32,44,3,89,55,4,2}");
	nuevo(13);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_014 desde 009
	printf("\nHas lo los ejercicios anteriores 9 mediante punteros");
	printf("\nEn el main pide un valor de edad mediante un string. Enviala a una funcion donde chequea que el dato sea numerico y si es correcto guardala en una variable numerica, sino vuelve a pedir el dato");
	nuevo(14);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_015 desde 010
	printf("\nHas lo los ejercicios anteriores 10 mediante punteros");
	printf("\nDado un array lista[]={0,87,77,35,1,32,98,56,87,36,66,32,44,3,89,55,4,2}; ordenala de mayor a menor en una funcion(sin sort) -comparar con sort");
	nuevo(15);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones_Ej_016
	printf("\n*******************************************************************************");
	printf("\n*                                                                             *");
	printf("\n*    Funciones que llama a otra funci'on                                      *");
	printf("\n*                                                                             *");
	printf("\n*******************************************************************************");
	printf("\nGenera una funcion_Inicio con printf un menu donde las opciones sea Archivo, Editar, Buscar, Configurar y Help en funciones distintas");
	printf("\nIngresa la primer letra e imprime un submenu para cada una de estas opciones ");
	printf("\n		Funcion_Archivo		-> Abrir, Guardar, Cerrar, Salir");
	printf("\n		Funcion_Editar		-> Copiar, Xcortar, Pegar, Seleccionar Todo");
	printf("\n		Funcion_Buscar		-> Adelante, Z-atras, Todo el documento, Reemplazar");
	printf("\n		Funcion_Configurar	-> Idioma, Pagina, Dicionario, S_pantalla");
	printf("\n		Funcion_Help		-> Menu, Sitio, Wiky, Fallos");
	printf("\nConsulta el submenu en cada funcion y regresa el valor elegido a la funcion_Inicior. Imprimir la opcion final Ej Archivo-->Guardar");
	nuevo(16);
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Ejercicio_Funciones Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
}
/*
//Ej
// * prototipos de las funciones * //
float sumar_valores(float numero_1er,float numero_2do);
float restar_valores(float numero_1er,float numero_2do);
float multiplicar_valores(float numero_1er,float numero_2do);
float dividir_valores(float numero_1er,float numero_2do);
float exponenciar_valores(float numero_1er,float numero_2do);
float radicar_valores(float numero_1er,float numero_2do);
float porcentaje_valores(float numero_1er,float numero_2do);
float numero_1er, numero_2do, resultado;
char operacion;
int main(void)
{
printf("\n\nHaz una calculadora-(con funciones)\n");
printf("\n\n\tPracticar nivel basico\n");
printf("\n\n\t\tsuma resta multiplicacion y division\n");
printf("\n\n\tPracticar nivel medio\n");
printf("\n\n\t\traiz cuadrada y elevar al cuadrado\n");
printf("\n\n\tPracticar nivel Alto\n");
printf("\n\n\t\traiz multiple y elevar a la n potencia\n");
}
*/
