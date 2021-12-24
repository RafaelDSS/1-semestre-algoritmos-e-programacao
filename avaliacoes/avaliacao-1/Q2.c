#include <stdio.h>
#include <string.h>


int main() {
	char frase[200], caracter;
	int i, cont=1;
	
	printf("Digite ma frase: \n");
	scanf("%[^\n]", &frase);
	
	for (i = 0; i < strlen(frase); i++) {
		caracter = frase[i];
		if (caracter == ' ') {
			cont++;
		}
	}
	printf("%d\n", cont);
	
	return 0;
}
