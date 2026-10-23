#include <stdio.h>
int main(){
    int i,N, X,temp, in = 0, out = 0;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &temp);
        if(temp >= 10 && temp <= 20){
            in++;
        }
        else{
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);

return 0;
}