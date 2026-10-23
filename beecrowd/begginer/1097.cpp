#include <stdio.h>
int main(){
  int i, I, J, A;
  J = 7;
  while(J >= 5){
    
    I = 1;
    printf("I=%d J=%d\n", I, J);
    
    J -= 1;
  }
  J = 9;
  while(J >= 5+2){
    
    I = 3;
    printf("I=%d J=%d\n", I, J);
    
    J -= 1;
  }
  J = 11;
  while(J >= 5+4){
    
    I = 5;
    printf("I=%d J=%d\n", I, J);
    
    J -= 1;
  }
  J = 13;
  while(J >= 5+6){
    
    I = 7;
    printf("I=%d J=%d\n", I, J);
    
    J -= 1;
  }
  J = 15;
  while(J >= 5+8){
    
    I = 9;
    printf("I=%d J=%d\n", I, J);
    
    J -= 1;
  }

return 0;
}
