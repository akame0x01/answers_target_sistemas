#include <stdio.h>

int main() {
  int indice=13;
  int soma = 0;
  int k = 0;

  while(k < indice) {
    k = k + 1;
    soma = soma + k;

    printf("k: %d // soma: %d\n",k,soma);
  }

  printf("%d",soma);
}
