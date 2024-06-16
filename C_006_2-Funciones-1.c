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

int sumemos (int valor_a, int valor_b);
/*
	tipo de funcion int, debe retornar de la funcion un numero entero
	envio dos variables en el llamado de la funcion y recibo una por el return 
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
		resultado=	sumemos (valor_1,valor_2);
		
		printf("\n+------------------------+");
		printf("\n|       nuevamente       |");
		printf("\n|  DENTRO DE LA FUNCION  |");
		printf("\n|           main         |");
		printf("\n+------------------------+");
		//resultado espera el return de la funcion donde se carga con la suma u operacion de los valores enviados en las variables
		printf("\n RESULTADO = %i  \n",resultado);//dato desde funcion pro puntero
		printf("\nIngrese 's' para salir cualquier otra tecla para continuar ");
		scanf("%c", &dato_char);//	scanf("%c%*c", &dato_char);
	} while(dato_char != 's' && dato_char != 'S');
	nuevo(1);
	return (0);
}
int sumemos (int valor_a, int valor_b)
{//funcion que devuelve un valor entero con el ingreso de dos variables
	int resulta2 = 0;
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|         SUMEMOS        |");
	printf("\n|       CON RETURN       |");	
	printf("\n+------------------------+");
	printf("\n sumemos %i + %i\n",valor_a, valor_b);//c
	resulta2 =  valor_a + valor_b;// se carga el resultado de la suma en una variable del ambito de la funcion
	return (resulta2);//regreso del valor a la funcion que lo llamo
}
