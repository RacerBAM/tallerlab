/* existeCaracter.c */

#include <stdio.h>
#include <string.h>

int existeCaracter (char *cad, caracter car) {
	int i = 0;
	int s = sizeof(cad);

	while (i < s) {
		if (cad[i] == car) {
			return 1
		}
		if (cad[i] != car) {
			i++;
		}
	}

	return 0;
}