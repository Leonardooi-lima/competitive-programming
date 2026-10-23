#include <stdio.h>
int main(){
int x;
int alcool = 0;
int gasolina = 0;
int diesel = 0;

    do{
        scanf("%d", &x);
        if(x == 1){
            alcool++;
        }
        if(x == 2){
            gasolina++;
        }
        if(x == 3){
            diesel++;
        }
    }while(x != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}