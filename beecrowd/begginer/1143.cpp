#include <stdio.h>
#include <math.h>
int main(){
    int i, x, n = 1;
    scanf("%d", &x);
    for(i = 0; i < x ; i++){
        printf("%d %d %d\n", n, n*n, n*n*n);
        n++;

    }
return 0;
}