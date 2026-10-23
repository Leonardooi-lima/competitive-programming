#include <stdio.h>

int main() {
    int x, y, a, b;
    int h1, m1;
    
    scanf("%d %d %d %d", &x, &a, &y, &b);

    int inicio = x * 60 + a;
    int fim = y * 60 + b;
    
    
    if (fim <= inicio) {
        fim += 24 * 60;
    }
    
    int duracao = fim - inicio;
    h1 = duracao / 60;
    m1 = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h1, m1);

    return 0;
}