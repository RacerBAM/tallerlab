/* copiarsub.c */

int copiarsub (char *cadOrigen, char *cadDestino, int n, int m) {
	int i = n;
	while (i >= n && i < m) {
		cadDestino[i] = cadOrigen[i];
		i++; // agrega 1 a "i"
	}

}
int main(int argc, char *argu[]) {
	char *cadenaEntrada = argu[1];
	char *cadenaN = argu[2];
	int n = atoi(cadenaN); // atoi convierte Cadena a Entero

	char *cadenaSalida = (char *) malloc(n+1);

	copiarsub(cadenaEntrada, cadenaSalida, n);

	printf("\n %s \n", cadenaSalida);

}