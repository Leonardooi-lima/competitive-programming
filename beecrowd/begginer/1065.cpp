#include <stdio.h>
int main(){
  int a,b,c,d,e,f;
  int parl = 0;
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a%2 == 0)parl++;
    if(b%2 == 0)parl++;
    if(c%2 == 0)parl++;
    if(d%2 == 0)parl++;
    if(e%2 == 0)parl++;

    printf("%d valores pares\n", parl);

    
}
