#include <stdio.h>
int main(){
	int x,y;
	int h1;
	
	
	scanf("%d %d", &x, &y);
	
	
	if(x == y){
		printf("O JOGO DUROU 24 HORA(S)\n");	
		}
	else if(x > y){
		
		
		h1 = (24-x)+y;	
        
		printf("O JOGO DUROU %d HORA(S)\n", h1);		
	
}
		
	    else{	
		    h1 = y - x;	
	        printf("O JOGO DUROU %d HORA(S)\n", h1);
}
	
	
return 0;
	

}	
