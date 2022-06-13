// conte frequencia

#include<stdio.h>

#define TAM_MAX 10
#define INTERVALO_FREQ 101

void leia(int numeros[]){

	for(int i = 0;i < TAM_MAX;i++){
		scanf("%d",&numeros[i]);
	}
return;
}

void frequenciaf(int numeros[],int frequencia[]){

	for(int i = 0; i < TAM_MAX;i++){
		frequencia[numeros[i]]++;
	}
return;	
}

void imprima(int frequencia[]){

	for(int i = 0; i < INTERVALO_FREQ; i++){
		if(frequencia[i] > 1){
			printf("O numero %d aparece %d vezes.\n",i,frequencia[i]);
		}
	}
return;
}

int main(void){

	int numeros[TAM_MAX] = {0};
	int frequencia[INTERVALO_FREQ+1] = {0};

	leia(numeros);

	frequenciaf(numeros,frequencia);

	imprima(frequencia);
return 0;
}