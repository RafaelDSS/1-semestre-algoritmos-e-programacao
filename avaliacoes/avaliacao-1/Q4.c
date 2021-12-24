#include <stdio.h>


int main() {
	int matriz[100][100];
	int transposta[100][100];
	
	int lin_size,
		lin, 
		col_size,
		col;
		
		
	printf("Digite a quantidades de linhas da matriz: ");
	scanf("%d", &lin_size);
	
	printf("Digite a quantidades de colunas da matriz: ");
	scanf("%d", &col_size);
	
	for (lin=0; lin < lin_size; lin++) {
		for (col = 0; col < col_size; col++) {
			printf("Digite o valor para a posicao %d, %d: ", lin, col);
			scanf("%d", &matriz[lin][col]);
		}
	}
	
	for (lin=0; lin < lin_size; lin++) {
		for (col = 0; col < col_size; col++) {
			transposta[col][lin] = matriz[lin][col];
		}
	}
	
	for (lin=0; lin < lin_size; lin++) {
		for (col = 0; col < col_size; col++) {
			printf("%d ", matriz[lin][col]);
		}
		printf("\n");
	}
	printf("\n");

	for (lin=0; lin < lin_size; lin++) {
		for (col = 0; col < col_size; col++) {
			printf("%d ", transposta[lin][col]);
		}
		printf("\n");
	}	
	
	
	
	return 0;
}
