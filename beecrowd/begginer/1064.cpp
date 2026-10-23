#include <stdio.h>

int main() {
    int i, count = 0;
    float a, b, c, d, e,f, m, me;


    scanf("%f %f %f %f %f %f", &a,&b,&c,&d,&e,&f);

    
        if(a>0){
        m += a;
        count++;
         }
        if(b>0){ 
        count++;
        m += b;
        }
        if(c>0){
        count++;
        m += c;
        }
        if(d>0){
        count++;
        m += d;
        }
        if(e>0){
        count++;
        m += e;
        }
        if(f>0){
        count++;
        m += f;
        }   
        me = m/count;

    
    printf("%d valores positivos\n%.1f\n", count, me);


}