#include <stdio.h>


int main() {
	int valores[15];
	int i;
	
	
	for (i = 0; i < 15; i++) {
		printf("Digite o valor %d: ", i+1);
		scanf("%d", &valores[i]);
	}
	for (i = 0; i < 15; i++) {
		printf("valores[%d] = %d\n",i, valores[i]);
	}
	
	for (i = 0; i < 15; i++) {
		if (i % 2 == 0) 
			valores[i] = valores[i] * 2;
		else
			valores[i] = valores[i] * 3;
		
	}
	
	for (i = 0; i < 15; i++) {
		printf("valores[%d] = %d\n", i, valores[i]);
	}
	
	return 0;
}
