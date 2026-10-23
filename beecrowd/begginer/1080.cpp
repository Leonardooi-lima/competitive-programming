#include <stdio.h>
int main(){
    int maior, pos, i, temp;
    pos = 1;
    i = 1;
    scanf("%d",  &maior);
    do{ 
        i++;
  
        scanf("%d", &temp);
        if(temp > maior){
            maior = temp;
            pos = i;
        }

    }while(i <= 99);
    printf("%d\n%d\n", maior, pos);
    return 0;
}