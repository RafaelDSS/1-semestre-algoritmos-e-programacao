#include <stdio.h>


int istri(int x, int y, int z);

int main() {
    int x, y, z;

    printf("Digite o lado 1 do triangulo: ");
    scanf("%f", &x);

    printf("Digite o lado 2 do triangulo: ");
    scanf("%f", &y);

    printf("Digite o lado 2 do triangulo: ");
    scanf("%f", &z);

    switch (istri(x, y, z)) {
        case 0:
            printf("O lados x, y e z nao formam um triangulo");
            break;

        case 1:
            printf("E um triangulo Equilatero\n");
            break;

        case 2:
            printf("E um triangulo Isoseles");
            break;
            
        case 3:
            printf("E um triangulo Escaleno");
            break;
    

    }
}

int istri(int x, int y, int z) {
    
    if (x < y+z && y < x+z && z < x+y)
        return 0;

    else if (x == y && y == z)
        return 1;

    else if (x != y && y != z)
        return 2;
        
    else 
        return 3;

}