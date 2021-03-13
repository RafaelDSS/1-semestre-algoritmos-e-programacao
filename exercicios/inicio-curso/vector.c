#include <stdio.h>

int get_string(char *prompt, char *str, size_t size);
int get_float(char *prompt, float *val);

int get_float(char *prompt, float *pval) {
  static char str[32 + 1];

  printf("%s", prompt);
  fgets(str, 32 + 1, stdin);
  return sscanf(str, "%f", pval);
}


void main() {
    float notas[4];
    float nota;
    float f;
    for(int x=0;x<=4;x++) {
        if (get_float("Entre um valor em ponto-flutuante: ", &f) != 1) {
            fprintf(stderr, "Numero inválido.\n");
        }else{
            notas[x] = f;
        }
    }
    for(int x=0;x<=4;x++) {
        nota = notas[x];
        printf("%f\n", x, nota);


    }
}