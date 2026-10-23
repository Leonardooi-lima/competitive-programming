#include <stdio.h>
int main(){
    int x, y, inter = 0;
    int gremio = 0;
    int empate = 0;
    int grenais = 0;
    int resp;

    do{
        scanf("%d %d", &x, &y);
        if(x > y){
            inter++;
            grenais++;
        }
        else if(y > x){
            gremio++;
            grenais++;
        }
        else if(y == x){
            empate++;
            grenais++;
        }
            do{
                printf("Novo grenal (1-sim 2-nao)\n");
                scanf("%d", &resp );
                if(resp != 1 && resp != 2){
                    printf("resposta invalida\n");
                }
                
            }while(resp != 1 && resp != 2);
        

    }while(resp != 2);
    
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
    if(inter>gremio){
        printf("Inter venceu mais\n");
    }
    else if(gremio>inter){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Nao houve vencedor\n");
    }
    


}