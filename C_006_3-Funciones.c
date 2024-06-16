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
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|           main         |");
	printf("\n+------------------------+");
	printf("\ningrese el 1er numero  ");
	scanf("%i",&numero1);
	printf("\ningrese el 2do numero  ");
	scanf("%i",&numero2);
	numero_in=numero1+ numero2;
	printf("\nprimer valor %i---- segundo valor %i",numero1 , numero2);
	printf("\nValor de numero dentro de main() es: %d\n", numero_in);
	nuevo(1);
	printf("\nllamamos a la funcion sumar_valor");
	sumar_valor(numero1, numero2);
	nuevo(2);
	printf("\nllamamos a la funcion restar_valor");
	restar_valor(numero1,numero2);
	nuevo(3);
	printf("\nllamamos a la funcion sumar_valor_return");
	retorno=sumar_valor_return(numero1, numero2);
	printf("\nValor de numero dentro de main() desde retorno es: %d\n", retorno);
	nuevo(4);
	printf("\nllamamos a la funcion restar_valor_return");
	retorno=restar_valor_return(numero1, numero2);
	printf("\nValor de numero dentro de main() desde retorno es: %d\n", retorno);
	nuevo(5);
	return 0;
}

void sumar_valor(int dato_en_funcion_1,int dato_en_funcion_2)
{
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|      SUMAR VALOR       |");
	printf("\n+------------------------+");
	numero_out=dato_en_funcion_1 + dato_en_funcion_2;
	printf("\nprimer valor %i---- segundo valor %i",dato_en_funcion_1 , dato_en_funcion_2);
	printf("\nValor de numero dentro sumar_valor() es: %d\n", numero_out);
	return;
}

void restar_valor(int dato_en_funcion_1,int dato_en_funcion_2)
{
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|     RESTAR VALOR       |");
	printf("\n+------------------------+");
	numero_out=dato_en_funcion_1 - dato_en_funcion_2;
	printf("\nprimer valor %i---- segundo valor %i",dato_en_funcion_1 , dato_en_funcion_2);
	printf("\nValor de numero dentro restar valor() es: %d\n", numero_out);
	return;
}


int restar_valor_return(int dato_en_funcion_1,int dato_en_funcion_2)
{
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|      SUMAR VALOR       |");
	printf("\n|       CON RETURN       |");
	printf("\n+------------------------+");
	numero_out=dato_en_funcion_1- dato_en_funcion_2;
	printf("\nprimer valor %i---- segundo valor %i",dato_en_funcion_1 , dato_en_funcion_2);
	return (numero_out);
}
int sumar_valor_return(int dato_en_funcion_1,int dato_en_funcion_2)
{

	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|     RESTAR VALOR       |");
	printf("\n|       CON RETURN       |");
	printf("\n+------------------------+");
	numero_out=dato_en_funcion_1+ dato_en_funcion_2;
	printf("\nprimer valor %i---- segundo valor %i",dato_en_funcion_1 , dato_en_funcion_2);
	return (numero_out);
}

