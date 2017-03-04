/* copiarCadena.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char copiarCadenas (char *cadOrigen, char *cadDestino) {
	int s = strlen(cadOrigen);
	int i = 0;
	while (i < s) {
		cadDestino[i] = cadOrigen[i];
		i++;
	}
	return *cadDestino;
}

void main(void) {
	printf("Entra una cadena: \n");
	char cadOr[20];
	scanf("%s", cadOr);
	char *cadDes;
	cadDes = (char *)malloc(sizeof(char)*20);
	copiarCadenas(cadOr, cadDes);
	printf("Cadena: %s %s", cadDes, "\n");
}