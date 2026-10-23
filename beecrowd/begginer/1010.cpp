#include <stdio.h>

int main() {

  int CODIGO1, QUANTIDADE1, CODIGO2, QUANTIDADE2;
  double VALOR1, VALOR2, TOTAL;
  scanf("%d %d %lf", &CODIGO1, &QUANTIDADE1, &VALOR1);
  scanf(" %d %d %lf", &CODIGO2, &QUANTIDADE2, &VALOR2);
  TOTAL = (QUANTIDADE1*VALOR1)+(QUANTIDADE2*VALOR2);
  printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);

  return 0;


}