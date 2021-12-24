#include <stdio.h>


int main() {
	int matriz[100][100];
	
	int lin_size,
		lin, 
		col_size,
		col,
		maior=0,
		soma=0,
		valor,
		i;
		
		
	printf("Digite a quantidades de linhas da matriz: ");
	scanf("%d", &lin_size);
	
	for (lin=0; lin < lin_size; lin++) {
		for (col = 0; col < lin_size; col++) {
			printf("Digite o valor para a posicao %d, %d: ", lin, col);
			scanf("%d", &matriz[lin][col]);
		}
	}
	
	for (i = 0; i < lin_size; i++) {
		valor = matriz[i][i];
		if (valor > maior)
			maior = valor;
	}
	
	col = lin_size - 1;
	for (i = 0; i < lin_size; i++) {
		soma += matriz[i][col];
		col--;
	}
	
	printf("O maior elemento da diagonal principal e: %d\n", maior);
	printf("A soma dos elementos da diagonal secundaria e: %d\n", soma);
	
	
	return 0;
}
