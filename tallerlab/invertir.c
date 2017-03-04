/* palindrome.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char invertir (char *cadOrigen, char *cadDestino) {
	int s = strlen(cadOrigen);
	int y = strlen(cadOrigen) - 1;
	int i = 0;
	while (i < s) {
		cadDestino[y] = cadOrigen[i];
		i++;
		y = y - 1;
	}
	return *cadDestino;
}

void main(void) {
	printf("Entra una cadena: \n");
	char cadOr[20];
	scanf("%s", cadOr);
	char *cadDes;
	cadDes = (char *)malloc(sizeof(char)*20);
	invertir(cadOr, cadDes);
	printf("Cadena Invertida: %s \n", cadDes);
}