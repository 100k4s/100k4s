// Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
//Ej 006_1
void nuevo(int numero)
	{
		printf("\n\t\tPresione enter para continuanr <--|");
		getchar();
		system("cls");
		printf("\nNuevo ejercicio Numero-%d", numero);
		printf("\n*******************************************************************************");
	}
void sumemos ();
int main(void)
{
	char   dato_char;
	do
	{
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|           main         |");
	printf("\n+------------------------+");
		sumemos ();

		printf("\nIngrese 's' para salir cualquier otra tecla para continuar ");
		scanf("%c", &dato_char);//	scanf("%c%*c", &dato_char);
	} while(dato_char != 's' && dato_char != 'S');
	nuevo(1);
	return (0);
}
void sumemos ()
{
	int  valor_1, valor_2, resultado;
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|         SUMEMOS        |");
	printf("\n+------------------------+");
	printf("\nIntroduce el 1er numero : ");
	scanf("%i%*c", &valor_1);
	printf("\nIntroduce el 2do numero : ");
	scanf("%i%*c", &valor_2);
	printf("\n sumemos %i + %i\n",valor_1, valor_2);//c
	resultado =  valor_1 + valor_2;
	printf("\n RESULTADO = %i  \n",resultado);//c
	return;
}
