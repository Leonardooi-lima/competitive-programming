#include <stdio.h>

int main() {

  int NUMBER, HORAS;
  double SALARY, VALOR;
  scanf("%d", &NUMBER);
  scanf("%d", &HORAS);
  scanf("%lf", &VALOR);
  SALARY = HORAS*VALOR;

  printf("NUMBER = %d\n", NUMBER);
  printf("SALARY = U$ %.2lf\n", SALARY);
  return 0;


}