#include <stdio.h>
#include <math.h>

int main(void) {
  int num=1, temp=0, x=1, y=0;

  do{
    scanf("%i", &num);
    if(num != 0){ 
      while(num!=temp){
      temp = pow(x, 2) - pow(y, 2);
      if(num == temp){
        printf("%.0f - %.0f\n", pow(x, 2), pow(y, 2));
      }
      else{
        x++;
        y++;
      }
      }
    }
  }while(num!=0);
  return 0;
}