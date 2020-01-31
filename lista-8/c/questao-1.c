#include <stdio.h>

int natural(int n);

int main() {

    natural(50);

    return 0;
    
}

int natural(int n) {
    printf("%d\n", n);

    if (n == 1) {
        return 0;
    }
    return natural(n-1);
}
