#include <stdio.h>

int main() {
    double sal, x, y;
    scanf("%lf", &sal);

    int percentual;

    if (sal <= 400.00) {
        percentual = 15;
    } else if (sal <= 800.00) {
        percentual = 12;
    } else if (sal <= 1200.00) {
        percentual = 10;
    } else if (sal <= 2000.00) {
        percentual = 7;
    } else {
        percentual = 4;
    }

    x = sal * percentual / 100.0;
    y = sal + x;

    printf("Novo salario: %.2lf\n", y);
    printf("Reajuste ganho: %.2lf\n", x);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}
