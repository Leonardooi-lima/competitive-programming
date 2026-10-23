#include <stdio.h>
int main(){
    int x, y, z;
    
    z = 0;
    
    while(scanf("%d %d", &x, &y), x > 0 && y > 0){
        
        if(x > y){
            z = 0;
            for(y; y <= x; y++){
                z += y;
                printf("%d ", y);

               
            }

            printf("Sum=%d\n", z);
        }
        

        else if(y > x){
            z = 0;
            for(x; x <= y; x++){

                z += x;
                printf("%d ", x);

               
            }
            printf("Sum=%d\n", z);
        }   

    
        
    }
    return 0; 
}