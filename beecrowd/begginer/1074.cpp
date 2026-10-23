#include <stdio.h>
int main(){
    int N, i = 0;
    int x;
    scanf("%d", &N);
    for(i; i < N; i++ ){
        scanf("%d", &x);
        if(x > 0 && x%2 == 0){
            printf("EVEN POSITIVE\n");
        }
        else if(x > 0 && x%2 != 0){
            printf("ODD POSITIVE\n");
        }
        else if(x < 0 && x%2 == 0){
            printf("EVEN NEGATIVE\n");
        }
        else if(x < 0 && x%2 != 0){
            printf("ODD NEGATIVE\n");
        }
        else if(x == 0){
            printf("NULL\n");
        }
    }
return 0;
}