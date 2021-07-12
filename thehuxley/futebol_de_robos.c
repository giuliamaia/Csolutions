#include <stdio.h>

int main(void) {
  char times[8];
  for(int i=0; i<8; i++){
    scanf("%c\n", &times[i]);
  }
  
  int pares[4][2];
  for(int i=0; i<4; i++){
    for(int j=0; j<2; j++){
      scanf("%i\n", &pares[i][j]);
    }
  }

  char semi[4];
  for(int i=0; i<4; i++){
    scanf("%c\n", &semi[i]);
  }

  char f[2];
  for(int i=0; i<2; i++){
    scanf("%c\n", &f[i]);
  }

  char ganhador;
  scanf("%c", &ganhador);

  int fst, scd;
  char wins[4], res[2];
  for(int i=0; i<4; i++){
    fst = pares[i][0];
    scd = pares[i][1];
    printf("Quartas de final %i: %c x %c\n", i+1, times[fst], times[scd]);

    if(semi[i] == 'A'){
      wins[i] = times[fst];
    }
    else{
      wins[i] = times[scd];
    }
  }

  if(f[0] == 'X'){
    res[0] = wins[0];
  }
  else if(f[0] == 'Y'){
    res[0] = wins[1];
  }

  if(f[1] == 'X'){
    res[1] = wins[2];
  }
  else if(f[1] == 'Y'){
    res[1] = wins[3];
  }

  printf("Semifinal %i: %c x %c\n", 1, wins[0], wins[1]);
  printf("Semifinal %i: %c x %c\n", 2, wins[2], wins[3]);
  printf("Final: %c x %c\n", res[0], res[1]);

  if(ganhador == '#'){
    printf("O vencedor da competição de futebol de robôs foi %c!", res[0]);
  }
  else{
    printf("O vencedor da competição de futebol de robôs foi %c!", res[1]);
  }
  
  return 0;
}