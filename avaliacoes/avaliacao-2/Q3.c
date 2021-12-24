#include<stdio.h>

void negativo(int *vet, int tam, int *qtd_negativo);

int main(){
	int vet[10] = {-4,6,-7,5,-8,4,-2,9};
	int qt_neg = 0;
	int *p;
	
	p = &vet[0];
	
	negativo(p,8, &qt_neg);
	
	printf("No array existe %d numeros negativos\n", qt_neg);
	
	return 0;
}

void negativo(int *vet, int tam, int *qtd_negativo) {
	int i  = 0;
	
	for (i = 0; i < tam; i++) {
		if (*(vet+i) < 0)
			*qtd_negativo += 1;
	}
}

