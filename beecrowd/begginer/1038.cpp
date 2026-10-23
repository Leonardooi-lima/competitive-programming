#include <stdio.h>


int main(){
	double codigo, quantidade, valor;
	scanf("%lf %lf", &codigo, &quantidade);
	if(codigo == 1){
		printf("Total: R$% .2lf\n", 4*quantidade);
	}
	else if(codigo == 2){
		printf("Total: R$% .2lf\n", 4.50*quantidade);
	}
			else if(codigo == 3){
		printf("Total: R$% .2lf\n", 5*quantidade);
	}
			else if(codigo == 4){
		printf("Total: R$% .2lf\n", 2*quantidade);
	}
			else if(codigo == 5){
		printf("Total: R$% .2lf\n", 1.50*quantidade);
	}
		return 0;

	}
	