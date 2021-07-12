#include <stdio.h>

int main(void) {
  
  int pont_min, n_comp, p1, p2, count=0;
  scanf("%i", &n_comp);
  scanf("%i", &pont_min);
  for(int i = 0; i < n_comp; i++){
    scanf("%i", &p1);
    scanf("%i", &p2);
    if(p1>0 && p2>0 && p1+p2>=pont_min){
      count++;
    }
  }
  printf("%i\n", count);
  return 0;
}