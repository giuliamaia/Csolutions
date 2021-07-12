#include <stdio.h>

int main(void) {
  int tam;
  scanf("%i", &tam);
  int vet[tam];
  for(int i=0; i<tam; i++){
    scanf("%i", &vet[i]);
  }
  
  int atual;
  int count[tam];
  for(int i=0; i<tam; i++){
    count[i] = 0;
  }

  atual = vet[0];
  int j=0;
  for(int i=0; i<tam; i++){
    printf("%i %i\n", atual, vet[i]);
    if(atual == vet[i]){
      count[j]++;
      printf("%i\n", count[j]);
    }
    else{
      atual = vet[i];
      j++;
      count[j]++;
    }
  }
  int maior;
  maior = count[0];
  for(int i=0; i<tam; i++){
    if(count[i] != 0){
      if(maior < count[i]){
        maior = count[i];
      }
    }
    else{
      break;
    }
  }
  printf("%i", maior);
  
  return 0;
}