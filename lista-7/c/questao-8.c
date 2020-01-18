#include <stdio.h>


int simple_func(int number);

int main() {
    int number=11;

    printf("O total e: %d\n", simple_func(number));

    return 0;

}

int simple_func(int number) {
    return number;
}
