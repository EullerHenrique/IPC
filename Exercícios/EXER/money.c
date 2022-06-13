#include <stdio.h>
#include <stdlib.h>


int main(void){


double x = 0;
int valor = 0;
int notas = 0;
int moedas = 0;

scanf("%lf", x);
if(x>0.00 && x<=1000000.00){
    notas= (int)x;
    moedas = (int)(round(valor*100))%100;

	printf("NOTAS:\n");

	for (int i = 0; i < 6; i++){ // percorre o vetor de notas 
	    if (a >= notas[i]){
	        valor = a / notas[i];
	        printf("%d notas(s)  de R$ %d.00\n", valor, notas[i]);
	        a = a - (valor * notas[i]);
	    }
	    else{
	    	printf("%d notas(s)  de R$ %d.00\n", 0, notas[i]);
	    }
	}


	printf("MOEDAS:\n");
	for (int i = 0; i < 6; i++){
	    if ( b >= moedass[i]){
	        valor = b / moedass[i];
	        printf("%d moedas(s) de R$ %.2f\n", valor, moedas[i]);
	        b = b - (valor * moedass[i]);
	    }
	    else{
	       printf("%d moedas(s) de R$ %.2f\n", 0, moedas[i]);
	    }
	}
}
return 0;
}
