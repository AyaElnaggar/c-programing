#include <stdio.h>

int main(){
  int i;

  for(i=0; i<5; i++){
    int i=10;
    printf("%d ", i);
    i++;
  }
  //output: 10 10 10 10 10

  return 0;
}
