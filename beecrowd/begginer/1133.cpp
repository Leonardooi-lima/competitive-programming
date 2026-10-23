#include <stdio.h>
int main(){
    int x, y;
    scanf("%d\n%d", &x, &y);
    if(x>y){
        x--;
        y++;
        for(y; y<=x; y++){
            if(y%5 == 2 || y%5 == 3){
                printf("%d\n", y);

            }

        }

        
    }
    else if(y>x){
        x++;
        y--;
        for(x; x<=y; x++){
            if(x%5 == 2 || x%5 == 3){
                printf("%d\n", x);

            }

        }

        
    }
    return 0;
}