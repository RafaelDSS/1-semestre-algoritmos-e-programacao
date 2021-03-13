#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() { 
 srand(time(NULL));
  while(1) {
      printf("    !   ");
      printf("%d",rand()%2);
  }
  return 0;
}