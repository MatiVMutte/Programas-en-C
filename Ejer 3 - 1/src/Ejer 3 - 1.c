/*
 ============================================================================
 Name        : Ejer 3 - 1.c
 Author      : Reta Mutte Matias | 1°C
 Punto		 : Ejercicio 3-1
 Description : Crear una función que muestre por pantalla el número flotante que recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void MostrarPorPantalla(float);
int main(void) {
	setbuf(stdout, NULL);
	float numeroIngresado;

	printf("Ingrese un numero: ");
	scanf("%f", &numeroIngresado);

	MostrarPorPantalla(numeroIngresado);
}

void MostrarPorPantalla(float numeroFlotante) {
	printf("Numero flotante: %.2f", numeroFlotante);
}
