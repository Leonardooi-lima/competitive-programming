#include <stdio.h>
int main(){
    int N, i = 0;
    float x, y;
    scanf("%d", &N);
    for(i; i < N; i++){
        scanf("%f %f", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else if(x == 0){
            printf("0.0\n");
        }
        else{
            printf("%.1f\n", x/y);
        }


    }
return 0;

}