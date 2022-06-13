#include <stdio.h>
#define TAM_MAX 15
void ler(int vet[]){
	for(int i = 0; i < TAM_MAX; i++){
		scanf("%d", vet[i]);
	}
return;
}

double maior(int vet[]){
	double maior = 0;
	for(int i = 0; i < TAM_MAX; i++){
		if(i == 0){
			maior = vet[i];
		}	
		if(vet[i] > maior){
			maior = vet[i]
		}
	}
return maior;
}

void dividir(int vet[], maior){
	for(int i = 0; i < TAM_MAX; i++){
		vet[i] = vet[i] / maior;
	}
}

void imprimir(int vet[]){
	for(int i = 0; i < TAM_MAX; i++){
		printf("%lf\n",vet[i]);
	}
}

int main(void){
	int maior = 0;
	int vet[TAM_MAX] = {0};

	ler(vet);
	maior = maior(vet);
	dividir(vet,maior);
	imprimir(vet);
return 0;
}
















int main(void){
	ler()
	maior()
	imprimir()
}