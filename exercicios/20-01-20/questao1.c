#include <stdio.h>


int fatorial(int n);

int main() {
    int number;
    

    printf("Digite um numero: ");
    scanf("%d", &number);

    printf("%d! = ", number);
    printf("%d\n", fatorial(number));

}

int fatorial(int n) {
    int fat;
    if (n == 0) {
        printf("0 = ");
        return 1;
    }
    else
        printf("%d * ", n);
        fat = n*fatorial(n-1);
        printf("Fat = %d ", fat);
        return fat;
}

