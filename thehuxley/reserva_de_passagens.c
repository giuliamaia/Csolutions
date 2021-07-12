#include <stdio.h>

int main(void) {
  int disp[37][2];
  for(int i=0; i<37; i++){
    for(int j=0; j<2; j++){
      scanf("%i", &disp[i][j]);
    }
  }
  
  int pass[50][2];
  for(int i=0; i<50; i++){
    for(int j=0; j<2; j++){
      pass[i][j] = 0;
    }
  }

  int aux;
  for(int i=0; i<50; i++){
    for(int j=0; j<2; j++){
      scanf("%i", &aux);
      if(aux != 9999){
        pass[i][j] = aux;
        //printf("%i ", pass[i][j]);
      }else{
        pass[i][j]=9999;
        break;
      }
    }
    printf("\n");
  }
  //iterando pedidos de reserva
  int id, nvoo;
  for(int i=0; i<50; i++){
    id = pass[i][0];
    nvoo = pass[i][1];
    if(id == 9999){
      break;
    }
    int existe = 0;
    //iterando as disponibilidades para voo
    for(int j=0; j<37; j++){
      if(nvoo == disp[j][0]){
        existe = 1;
        if(disp[j][1] > 0){
            printf("%i\n", id);
            disp[j][1]--; 
            break;
        }
        else{
            printf("INDISPONIVEL\n");
        }
      }
    }
    if(existe = 0){
      printf("INDISPONIVEL\n");
    }
  }

  return 0;
}