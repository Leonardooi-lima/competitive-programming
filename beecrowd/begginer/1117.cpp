#include <stdio.h>
int main(){
    float nota, x, y, som;
    float N1 = 0;
    float N2 = 0;
            
        
     
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
    
        

   
    return 0;
}