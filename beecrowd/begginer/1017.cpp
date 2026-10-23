#include <stdio.h>
int main(){
  int HORAS, VELOCIDADE;
  double LITROS, MEDIA;
  scanf("%d %d", &HORAS, &VELOCIDADE);
  MEDIA = 12;
  LITROS = (HORAS*VELOCIDADE)/MEDIA;
  printf("%.3lf\n", LITROS);
  return 0;




}