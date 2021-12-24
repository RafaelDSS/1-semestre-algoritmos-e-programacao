#include<stdio.h>


int nat(int n1, int n2);

int main(){
	
	int n1, n2;
	
	printf("Digite a base: ");
	scanf("%d", &n1);
	
	printf("Digite o expoente: ");
	scanf("%d", &n2);
	
	printf("%d*%d = %d\n", n1, n2, nat(n1, n2));
	
	return 0;
}

int nat(int n1, int n2){
	if (n2 == 0)
		return 0;
		
	return n1 + nat(n1, n2-1);
}

