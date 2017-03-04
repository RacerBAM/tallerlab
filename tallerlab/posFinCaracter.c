/* posFinCaracter */

#include <stdio.h>
#include <string.h>

int posFinCaracter (char *cad, caracter car) {

	int i = 0;
	int s = sizeof(cad);
	int posicion = s;

	while (s > i) {
		if (cad[s] == car) {
			return posicion;
		}
		else {
			posicion = posicion - 1;
			s = s - 1;
		}
	}
	return -1
}