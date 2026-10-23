#include <stdio.h>
int main(){
    int i,N;
    double x,y,z, a,b;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%lf %lf %lf", &x, &y, &z);
        a = (x*2)+(y*3)+(z*5);
        b = a/10;
        printf("%.1lf\n", b);
        
        }
      

return 0;
}