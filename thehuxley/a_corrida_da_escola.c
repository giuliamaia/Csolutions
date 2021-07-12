#include <stdio.h>

int main(void) {
  int n_j, n_v;
  scanf("%i", &n_j);
  scanf("%i", &n_v);

  int mat[n_j][n_v];
  for(int i=0; i<n_j; i++){
    for(int j=0; j<n_v; j++){
      scanf("%i", &mat[i][j]);
    }
  }
  int vetSoma[n_j];
  for(int i=0; i<n_j; i++){
    vetSoma[i] = 0;
  }
  for(int i=0; i<n_j; i++){
    for(int j=0; j<n_v; j++){
      vetSoma[i]+=mat[i][j];
    }
  }

  int menor, win=0;
  menor = vetSoma[0];
  for(int i=0; i<n_j; i++){
    if(menor>vetSoma[i]){
      menor = vetSoma[i];
      win = i;
    }
  }

  printf("%i", win+1);
  return 0;
}