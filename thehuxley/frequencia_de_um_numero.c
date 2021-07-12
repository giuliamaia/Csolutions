#include <stdio.h>

int main(void) {
  int qtd, procurado, temp, count=0;
  printf("Digite a quantidade de numeros da sequencia: \n");
  scanf("%i", &qtd);
  printf("Digite o numero procurado: \n");
  scanf("%i", &procurado);
  for(int i = 0; i < qtd; i++){
    scanf("%i", &temp);
    if(temp == procurado){
      count++;
    }
  }
  printf("O numero %i apareceu na sequencia %i vezes. \n", procurado, count);
  return 0;
}