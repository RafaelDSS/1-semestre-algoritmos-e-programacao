#include <stdio.h>


int main() {
	int vetor[100], 
		size_vetor,
		i,
		j, 
		aux;
		
		printf("Qual e o tamanho do vetor?: ");
		scanf("%d", &size_vetor);
		
		for (i = 0; i < size_vetor; i++) {
			printf("Digite o valor para a posicao %i: ", i+1);
			scanf("%d", &vetor[i]);
		}
		
		for (i = 0; i < size_vetor; i++) {
			printf("vetor[%d] = %d\n", i, vetor[i]);
		}
		
		for (i = 0; i < size_vetor; i++) {
			for (j = 0; j < size_vetor; j++) {
				if (vetor[j] < vetor[j+1]) {
					aux = vetor[j];
					vetor[j] = vetor[j+1];
					vetor[j+1] = aux;
				}
			}
		}
		
		printf("\n");
		
		for (i = 0; i < size_vetor; i++) {
			printf("vetor[%d] = %d\n", i, vetor[i]);
		}
		
		
		
		
	return 0;
}
