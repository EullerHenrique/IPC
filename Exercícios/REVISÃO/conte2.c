#include <stdio.h>
#define TAM_MAX 10
#define INTERVALO_FREQ 101


void ler(int numeros[]){
	for(int i = 0; i < TAM_MAX; i++){
		scanf("%d", &numero[i])
	}
return;
}

void frequenciaf(int numeros[], int frequencia[]){
	for(int i = 0; i < TAM_MAX; i++){
		frequencia[numeros[i]]++;
	}
return;
}

void imprima(int frequencia[]){
	for(int i = 0; i < INTERVALO_FREQ; i++){
		printf("O número %d aparece %d vezez\n",i, frequencia[i]);
	}
return;
}

int main(void){
	int numeros[TAM_MAX] = {0};
	int frequencia[INTERVALO_FREQ] = {0};

	ler(numeros);
	frequencia(numeros, frequencia);
	imprima(frequencia);

	return 0;
}	
