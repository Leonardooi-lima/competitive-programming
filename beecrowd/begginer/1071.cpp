#include <stdio.h>

int main(){
    int i, X, Y, a = 0, maior, menor;
    scanf("%d %d", &X, &Y );
    if(Y>X){
        maior = Y;
        menor = X;
    }
    else if(X>Y){
        maior = X;
        menor = Y;
    }
    else{
        maior = 0;
        menor = 0;
    }

    
    for(i = menor+1; i < maior ;  i++){
        
        if(i%2 != 0){
            a += i;
        }
    }
    
    printf("%d\n", a);

    return 0;
}