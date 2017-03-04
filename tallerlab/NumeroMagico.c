#include <stdio.h>

#define numMagico 37

// void main(void) {

// 	int x;
// 	int y;
// 	int i;

// 	i = 1
// 	x = randint(0, 100)
// 	y = scanf("Estoy pensando en un numero entre el 1 y el 100. Adivinelo.%d", y)

// 	while (i = 1) {
// 		if (x == y) {
// 			printf("Lo adivinaste!")
// 			break;
// 		}
// 		else {
// 			printf("Numero incorrecto.")
// 			y = scanf("Estoy pensando en un numero entre el 1 y el 100. Adivinelo.%d", y)
// 		}
// 	}
// }

int main(void) {

	int x;
	int i;
	int intentos;

	i = 1;
	intentos = 0;

	printf("Estoy pensando en un numero entre el 0 y el 50.")
	printf("Ingrese un numero: ");
	scanf("%d", &x);

	while (i = 1) {
		if (x == numMagico) {
			printf("Lo adivinaste!\n");
			printf("Numero de intentos fallidos: %d", intentos, "\n");
			break;
		}
		else {
			printf("No lo adivinaste.\n");
			printf("Ingrese un numero: ");
			intentos = intentos + 1;
			scanf("%d", &x);
		}
	}
return 0;
}
