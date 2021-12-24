#include<stdio.h>


float maior_menor_media(int tam, int *vet, int *m, int *n);

int main(){
	int notas[3], *v;
	int i = 0;
	int maior=0, menor=0;
	float media=0;
	
	v = &notas[0];
	
	for (i = 0; i < 3; i++) {
		printf("Digite a nota %d: ", i+1);
		scanf("%d", &notas[i]);
	}
	
	for (i = 0; i < 3; i++) {
		printf("notas[%d] = %d\n", i, *(v+i));
	}
	
	media = maior_menor_media(3, v, &maior, &menor);
	
	printf("A maior nota e: %d\n", maior);
	printf("A menor nota e: %d\n", menor);
	printf("A media e: %.2f\n", media);
	
	return 0;
}

float maior_menor_media(int tam, int *vet, int *m, int *n) {
	int maior=0, menor=999, i = 0, soma=0;
	int qt=0;
	
	for (i = 0; i < 3; i++) {
		if (*(vet+i) > maior)
			maior = *(vet+i);
			
		if (*(vet+i) < menor)
			menor = *(vet+i);
		
		soma += *(vet+i);
	}
	
	*m = maior;
	*n = menor;
	
	return (soma - menor) / 2.0;
}





