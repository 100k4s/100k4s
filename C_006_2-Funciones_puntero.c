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

void sumemos (int valor_a, int valor_b, int *resultado);
/*
	tipo de funcion void, no debe retornar de la funcion ningun valor
	envio dos variables y un puntero (donde modifico el valor de resultado) en el llamado de la funcion 
*/
int main()
{
	int valor_1 =0;
	int valor_2 =0 ;
	int resultado =0;
	char   dato_char;
	do
	{
		printf("\n+------------------------+");
		printf("\n|  DENTRO DE LA FUNCION  |");
		printf("\n|           main         |");
		printf("\n+------------------------+");
		printf("\nIntroduce el 1er numero : ");
		scanf("%i%*c", &valor_1);
		printf("\nIntroduce el 2do numero : ");
		scanf("%i%*c", &valor_2);
		sumemos (valor_1,valor_2, &resultado);
		//resultado lo envio como posicion de memoria donde esta el dato a modificar por la operacion de los valores enviados en las variables
		printf("\n+------------------------+");
		printf("\n|       nuevamente       |");
		printf("\n|  DENTRO DE LA FUNCION  |");
		printf("\n|           main         |");
		printf("\n+------------------------+");

		printf("\n RESULTADO = %i  \n",resultado);//dato desde funcion pro puntero
		printf("\nIngrese 's' para salir cualquier otra tecla para continuar ");
		scanf("%c", &dato_char);//	scanf("%c%*c", &dato_char);
	} while(dato_char != 's' && dato_char != 'S');
	nuevo(1);
	return (0);
}

void sumemos (int valor_a, int valor_b, int *resultado)
{
	//int resulta2 = 0;
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|         SUMEMOS        |");
	printf("\n|      CON PUNTEROS      |");	
	printf("\n+------------------------+");
	printf("\n sumemos %i + %i\n",valor_a, valor_b);//c
	*resultado =  valor_a + valor_b;// se carga el resultado de la suma en la posicion de memoria envada por el puntero para el ambito de todo el programa no solo de la funcion
	//return (resulta2);//NO regreso del valor a la funcion que lo llamo sino que modifico el valor mediante el puntero
}
