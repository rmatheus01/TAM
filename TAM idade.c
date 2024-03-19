#include <stdio.h>
#include <locale.h>

#define TAM 5

int main() {
	setlocale(LC_ALL, "");
	
	char nomes [200][TAM];
	int i, idades[TAM];
	
	for (i = 0; i < TAM; i++) {
		printf("Digite %iª seu nomes:", i+1);
		scanf("%s",&nomes[i]);
		
		printf("Digite %iª idades: ",  i + 1);
		scanf("%i",&idades[i]);
		
		return 0;
	}
	
}
	

