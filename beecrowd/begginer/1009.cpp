#include <stdio.h>

int main() {

  char VENDEDOR[100];
  double SALARIO, MONTANTE, TOTAL;
  scanf("%s", &VENDEDOR);
  scanf("%lf", &SALARIO);
  scanf("%lf", &MONTANTE);
  TOTAL = SALARIO+0.15*MONTANTE;
  printf("TOTAL = R$ %.2lf\n", TOTAL);

  return 0;


}