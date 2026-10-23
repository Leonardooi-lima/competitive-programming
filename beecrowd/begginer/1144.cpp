#include <stdio.h>
#include <math.h>
int main(){
    int x,i, n = 1;
    scanf("%d", &x);
        for(i = 1; i <= x*2 ; i++){
            if(i%2 != 0){
            printf("%d %d %d\n", n, n*n, n*n*n);
            }
            else if(i%2 == 0){
            printf("%d %d %d\n", n, n*n+1, n*n*n+1);
            n++;
            }
        }
    return 0;
}