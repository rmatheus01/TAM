#include <stdio.h>
#include <locale.h>
#include <limits.h>

#define TAM 6

int main() {
	setlocale(LC_ALL, "");
	
	int numeros[6];
	int i, pares = 0, impares = 0;
	
	for (i = 0; i < 6; i++) {
		printf("\nDigite o %1� numero: ");
		scanf("%i",&numeros[i]);
		
		if (numeros[i] % 2 == 0) {
			pares++;
		} else {
			impares++;
		}
	}
	
	printf("\n=== Exibindo resultados ===\n");
	printf("N�meros digitando: \n");
	for (i = 0; i < 6; i++) {
		printf("%I� n�meros: %i \n", i +1, numeros[i]);
	}
	
	printf("\nQuantidade de pares: %i", pares);
	printf("\nQuantidade de �mpares: %i", impares);
	
	return 0;
	    	
}
