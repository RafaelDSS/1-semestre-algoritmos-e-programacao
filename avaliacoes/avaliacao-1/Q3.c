#include <stdio.h>


int main() {
	int valores[50], 
		n,
		i, 
		menor, 
		posicao,
		valor;
		
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &valores[i]);
	}
	
	menor = valores[0];
	
	for (i = 0; i < n; i++) {
		valor = valores[i];
		
		if (valor < menor) {
			menor = valor;
			posicao = i;
		}
			
	}
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
	
	
	return 0;
}
