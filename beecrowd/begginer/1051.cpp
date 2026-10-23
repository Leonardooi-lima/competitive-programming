#include <stdio.h>
int main(){
    double rend, is, is2, is3, ist;
    scanf("%lf", &rend);
    if(rend <= 2000.00){
        printf("Isento\n");
    }
    else if(rend > 2000.00 && rend <= 3000.00){
        is = (rend-2000)*0.08;
        printf("R$ %.2lf\n", is);

    }
    else if(rend > 3000.01 && rend <= 4500.00){
        is = 1000*0.08;
        is2 = (rend-3000)*0.18;
        ist = is+is2;

        printf("R$ %.2lf\n", ist);

    }
    else if(rend > 4500.00 ){
        is = 1000*0.08;
        is2 = 1500*0.18;
        is3 = (rend-4500)*0.28;
        ist = is+is2+is3;
        printf("R$ %.2lf\n", ist);

    }
return 0;
}
