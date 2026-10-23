#include <stdio.h>
int main (){
  char tipo;
  int i, x,y, Coelhos = 0, Ratos = 0, Sapos = 0 , total = 0;
  scanf("%d", &x);
  for(i = 0; i < x; i++){
    scanf("%d %c", &y, &tipo);
    total += y;

    if(tipo == 'C'){
      Coelhos += y;

    }
    else if(tipo == 'R'){
      Ratos += y;
    }
    else if(tipo == 'S'){
      Sapos += y;
    }
  }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", Coelhos);
    printf("Total de ratos: %d\n", Ratos);
    printf("Total de sapos: %d\n", Sapos);
    printf("Percentual de coelhos: %.2f %%\n", ((float)Coelhos/total)*100);
    printf("Percentual de ratos: %.2f %%\n", ((float)Ratos/total)*100);
    printf("Percentual de sapos: %.2f %%\n", ((float)Sapos/total)*100);
    
  

  
}