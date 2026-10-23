#include <stdio.h>
int main(){
    int x,y,soma = 0;
    scanf("%d %d", &x, &y);
    if(x > y){
        
        
        for(y; y<=x; y++){
            if(y%13 != 0){
                soma+=y;

            }
        }

    }
    else if(y > x){
        
        
        for(x; x<=y; x++){
            if(x%13 != 0){
                soma+=x;

            }
        }
    }
    printf("%d\n", soma);
return 0;
}

