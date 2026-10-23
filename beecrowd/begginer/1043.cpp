#include <stdio.h>
int main(){
    double A, B, C, PERIMETRO;
    scanf("%lf %lf %lf", &A, &B, &C);
    if(A+B > C && C+B > A && C+A > B){
        PERIMETRO = A+B+C;
        printf("Perimetro = %.1lf\n", PERIMETRO);
    }
    else{
        printf("Area = %.1lf\n", (A+B)*C/2);
    }

    return 0;
}