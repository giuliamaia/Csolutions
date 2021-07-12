#include <stdio.h>

int main(void) {
  int tam, aux, count=0;
  scanf("%i", &tam);
  int numeros[tam], copia[tam];
  for(int i=0; i<tam; i++){
    scanf("%i", &numeros[i]);
  }
  for(int i=0; i<tam; i++){
    copia[i]=numeros[i];
    printf("%i ", copia[i]);
  }
  // Algoritmo de ordenação Bubblesort:
  for (int contador = 1; contador < tam; contador++) {
    for (int i = 0; i < tam - 1; i++) {
      if (numeros[i] > numeros[i + 1]) {
        aux = numeros[i];
        numeros[i] = numeros[i + 1];
        numeros[i + 1] = aux;
      }
    }
  }

  printf("\n");
  for(int i=0; i<tam; i++){
    printf("%i ", numeros[i]);
  }
  printf("\n");
  for (int i = 0; i < tam; i++) {
    if(numeros[i]==copia[i]){
      count++;
    }
  }
  printf("%i\n", count);
  for (int i = 0; i < tam; i++) {
    if(numeros[i]==copia[i]){
    printf("%i %i\n", numeros[i], i+1);
    }
  }
  return 0;
}

