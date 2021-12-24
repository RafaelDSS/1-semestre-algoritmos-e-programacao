#include<stdio.h>


void preencher(int m, int n, int ma[][6]);
void soma(int m, int n, int *sum, int *ma);

int main(){
	int matriz[6][6], *m;
	int total=0;
	int i = 0;
	
	m = &matriz[0][0];
	
	preencher(6, 6, matriz);
	soma(6, 6, &total, m);
	
	
	for (i = 0; i < 36; i++) {
		printf("matriz[%d] = %d\n", i, *(m+i));
	}
	
	printf("A soma dos elementos da matriz e: %d\n", total);
	
	return 0;
}

void preencher(int m, int n, int ma[][6]) {
	int lin=0, col=0;
	
	for (lin = 0; lin < m; lin++) {
		for (col = 0; col < n; col++) {
			ma[lin][col] = lin * col;
		}
	}
}

void soma(int m, int n, int *sum, int *ma) {
	int i = 0;
	int soma = 0;
	
	for (i = 0; i < m*n; i++) {
		soma += *(ma+i);
	}
	
	*sum = soma;
}

