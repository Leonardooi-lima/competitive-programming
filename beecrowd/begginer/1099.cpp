#include <stdio.h>
int main(){
    int N, a , b, c = 0;
    int d = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %d", &a, &b);
        if(a == b){
            printf("0\n");
        }
        else if(a>b){
            a--;
            b++;
            c = 0;
            for(b; b<=a; b++){
            if(b%2 != 0){
                c += b;
            }
        }
        printf("%d\n", c);
        }
        else if(b>a){
            a++;
            b--;
            d = 0;
            for(a; a<=b; a++){
            if(a%2 != 0){
                d += a;
            }
        }
        printf("%d\n", d);
        }
       
    }


    
}