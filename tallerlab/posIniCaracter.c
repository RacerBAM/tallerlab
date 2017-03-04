/* posIniCaracter.c */

#include <stdio.h>
#include <string.h>

int posIniCaracter (char *cad, caracter car) {
	int i = 0;
	int s = sizeof(cad);
	int posicion = 0;

	while (i < s) {
		if (cad[i] == car) {
			return posicion;
		}
		else {
			i++;
			posicion++;
		}
	}
	return -1;
}