#include <stdio.h>

#define numMagico 23
#define numMagico2 47

// void main(void) {

// 	int x;
// 	int y;
// 	int i;

// 	i = 1;
// 	x = randint(0, 100);
// 	y = scanf("Estoy pensando en un numero entre el 1 y el 100. Adivinelo.%d", y);

// 	while (i = 1) {
// 		if (x == y) {
// 			printf("Lo adivinaste!");
// 			break;
// 		}
// 		else {
// 			printf("Numero incorrecto.");
// 			y = scanf("Estoy pensando en un numero entre el 1 y el 100. Adivinelo.%d", y);
// 		}
// 	}
// }

int main(void) {

	int x;
	int i;
	int intentos;

	i = 1;
	intentos = 0;

	printf("Estoy pensando en dos numeros entre el 0 y el 50. ");
	printf("Ingrese un numero: ");
	scanf("%d", &x);

	while (i = 1) {
		if (x == numMagico) {
			printf("Adivinaste el primer numero!\n");
			printf("Numero de intentos fallidos: %d", intentos, "\n");
			break;
		}
		if (x == numMagico2) {
			printf("Adivinaste el segundo numero!\n");
			printf("Numero de intentos fallidos: %d", intentos, "\n");
			break;
		}
		if (x == numMagico + numMagico2) {
			printf("Adivinaste la suma de los dos numeros!\n");
			printf("Numero de intentos fallidos: %d", intentos, "\n");
			break;
		}
		if (x == numMagico * numMagico2) {
			printf("Adivinaste la multiplicacion de los dos numeros!\n");
			printf("Numero de intentos fallidos: %d", intentos, "\n");
			break;
		}
		else {
			printf("No lo adivinaste.\n");
			if (x < numMagico) {
				printf("El numero que ingresaste es menor que el primer numero magico.\n");
			}
			if (x < numMagico2) {
				printf("El numero que ingresaste es menor que el segundo numero magico.\n");
			}
			if (x > numMagico) {
				printf("El numero que ingresaste es mayor que el primer numero magico.\n");
			}
			if (x > numMagico2) {
				printf("El numero que ingresaste es mayor que el segundo numero magico.\n");
			}
			if ((x > numMagico) && (x < numMagico2)) {
				printf("El numero que ingresaste esta entre el primer y segundo numero magico.\n");
			}
			printf("Ingrese un numero: ");
			intentos = intentos + 1;
			scanf("%d", &x);
		}
	}
return 0;
}
