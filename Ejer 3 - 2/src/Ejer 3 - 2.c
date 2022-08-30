/*
 ============================================================================
 Name        : Ejer 3 - 2.c
 Author      : Reta Mutte Matias | 1°C
 Punto	     : Ejercicio 3-2
 Description : Crear una función que permita determinar si un número es par o no.
 	 	 	   La función retorna 1 en caso afirmativo y 0 en caso contrario.
 	 	 	   Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int isParf(int);

int main(void) {
	setbuf(stdout, NULL);
	int numAIngresar;
	printf("Ingrese un numero: ");
	scanf("%i", &numAIngresar);

	if(isParf(numAIngresar) == 1) {
		printf("Es un numero Par.");
	} else {
		printf("No es un numero Par.");
	}

	return 0;
}

int isParf(int numIngresado) {
	int esPar;
	esPar = 0;
	if(numIngresado % 2 == 0) {
		esPar = 1;
	}
	return esPar;
}
