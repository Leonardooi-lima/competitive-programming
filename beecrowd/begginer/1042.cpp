#include <stdio.h>
int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if(A > B && B > C){
        printf("%d\n%d\n%d\n", C, B, A);
    }
    if(A > C && C > B){
        printf("%d\n%d\n%d\n", B, C, A);
    }
    if(B > A && A > C){
        printf("%d\n%d\n%d\n", C, A, B);
    }
    if(B > C && C > A){
        printf("%d\n%d\n%d\n", A, C, B);
    }
    if(C > A && A > B){
        printf("%d\n%d\n%d\n", B, A, C);
    }
    if(C > B && B > A){
        printf("%d\n%d\n%d\n", A, B, C);
    }
    printf("\n%d\n%d\n%d\n", A, B, C);
    return 0;


}