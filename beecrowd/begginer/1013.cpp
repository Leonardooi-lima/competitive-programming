#include <stdio.h>
#include <limits.h>
int main() {
    int valor, i, maior = INT_MIN;
    for(i = 0; i<3; i++){
      scanf("%d", &valor);
      if (valor > maior){
        maior = valor;
      }
    }
    printf("%d eh o maior\n", maior);
    return 0;
}
