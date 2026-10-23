#include <stdio.h>
#include <math.h>

int main(){
	double A, B, C, x1, x2, delta, divisao;
	scanf("%lf %lf %lf", &A, &B, &C);
	delta = (B*B)-4*A*C;
	divisao = 2*A;
	if(delta < 0 || divisao == 0 ){
		printf("Impossivel calcular\n");
		
	}
	else{

	x1 = (-B+sqrt(delta))/divisao;
	x2 = (-B-sqrt(delta))/divisao;
	printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
	
		}
	
	
	
	}
	