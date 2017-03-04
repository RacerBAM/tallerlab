/*copiarn.c*/

#include <stdio.h>
#include <string.h>

int copiarN (char *cadOrigen, char *cadDestino, int n) {
	int i = 0;
	while (i < n) {
		cadDestino[i] = cadOrigen[i];
		i++; // agrega 1 a "i"
	}

}
int main(int argc, char *argu[]) {
	char *cadenaEntrada = argu[1];
	char *cadenaN = argu[2];
	int n = atoi(cadenaN); // atoi convierte Cadena a Entero

	char *cadenaSalida = (char *) malloc(n+1);

	copiarN(cadenaEntrada, cadenaSalida, n);

	printf("\n %s \n", cadenaSalida);

}