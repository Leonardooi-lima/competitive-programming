#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N > 0 && N < 1000000) {
        printf("%d\n", N);
        int notas[] = {100, 50, 20, 10, 5, 2, 1};
        int qtd_notas, i;
        
        for (i = 0; i < 7; i++) {
            qtd_notas = N / notas[i];
            printf("%d nota(s) de R$ %d,00\n", qtd_notas, notas[i]);
            N %= notas[i];
        }
    }
    return 0;
}