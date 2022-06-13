#include <stdio.h>
#define TAM_MAX 15

void ler(double valores[]){
	for(int i = 0; i < TAM_MAX; i++){
		scanf("%lf", &valores[i]);
	}
return;
}

double maiornumero (double valores[]){
	
	double maior = 0;
    for(int i = 0; i < TAM_MAX; i++){                          
    	if(i == 0){
    	    maior = valores [i];
        }
        if(valores[i] >  maior){
            maior = valores[i];
        }
    }
return maior;
}

void divide(double valores[], double maior){
	for(int i = 0; i < TAM_MAX; i++){
		valores[i] = valores[i] / maior;
	}
return;
}

void imprime(double valores[]){
	for(int i = 0; i < TAM_MAX;i++){
		printf("%lf \n", valores[i]);
	}
return;
}

int main(void){
	double maior = 0;
	double valores[TAM_MAX] = {0};
	ler(valores);
	maior = maiornumero(valores);
	divide(valores,maior);
	imprime(valores);
return 0;
}