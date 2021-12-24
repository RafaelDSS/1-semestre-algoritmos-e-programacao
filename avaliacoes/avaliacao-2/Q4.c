#include<stdio.h>


void preencher(int *vet, int tam);
void imprimir(int *vet, int tam);

int main(){
	int vet[20], *v;
	int tam;
	
	v = &vet[0];
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	preencher(v, tam);
	imprimir(v, tam);
	
	return 0;
}

void preencher(int *vet, int tam) {
	int i = 0;
	
	for (i = 0; i < tam; i++) {
		printf("Digite o valor %d: ", i+1);
		scanf("%d", vet+i);
	}
}
void imprimir(int *vet, int tam) {
	int i = 0;
	
	for (i = 0; i < tam; i++) {
		printf("vet[%d] = %d\n", i, *(vet+i));
	}
}

