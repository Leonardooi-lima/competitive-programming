#include <stdio.h>

int main() {
    int DIAS, ANO, MESES, RESTO;
    scanf("%d", &DIAS);
    
    ANO = DIAS / 365; 
    RESTO = DIAS % 365;  
    MESES = RESTO / 30;  
    DIAS = RESTO % 30;  

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ANO, MESES, DIAS);
    
    return 0;
}