#include <stdio.h>
int main(){
    float nota, x, y, som;
    float N1 = 0;
    float N2 = 0;
    int resp = 0;
            
        
do{   
    N1 = 0;
    N2 = 0;
    resp = 0;
    nota = 0;
    x = 0;
    y = 0;
    som = 0;
        while(N1 == 0){
            scanf("%f", &nota);
        if( nota < 0 || nota > 10){
            printf("nota invalida\n");
        }
            if(nota >= 0 && nota <= 10){
            som += nota;
            N1++;
        }
    }
        while(N2 == 0){
            scanf("%f", &nota);
        if( nota < 0 || nota > 10){
            printf("nota invalida\n");
        }
            if(nota >= 0 && nota <= 10){
            som += nota;
            N2++;
    }
}

        printf("media = %.2f\n", som/2);
do{  
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &resp);
        
}while(resp != 1 && resp != 2);

}while(resp != 2);  
return 0;

}