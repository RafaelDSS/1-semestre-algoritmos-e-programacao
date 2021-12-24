#include <stdio.h>


int main() {
	int distancias[6][6] = {{0, 63, 210, 190, 0, 190}, {63, 0, 160, 150, 95, 0}, {210, 160, 0, 10, 0, 0}, 
							{190, 150, 10, 0, 0, 0}, {0, 95, 0, 0, 0, 80}, {190, 0, 0, 0, 80, 0}};
	int viagens[6],
		lin, 
		col,
		i, 
		distancia_soma=0;
	
	
	for (i = 0; i < 6; i++) {
		printf("Digite os valores das rotas %d: ", i+1);
		scanf("%d", &viagens[i]);
	}
	

	for (i = 0; i < 5; i++) {
		lin = viagens[i];
		col = viagens[i+1];
		
		distancia_soma += distancias[lin][col];
	}
	
	printf("A distancia percorrida na viagem foi de: %d\n", distancia_soma);
	
	return 0;
}

