#include <stdio.h>

int fun(int tamanho, int vetf[tamanho]){
	int soma = 0;

	for(int i = 0; i < tamanho; i++){
		soma = soma + vetf[i]; 
	}

return soma;
}

int main(void){
	int tamanho = 0;
	scanf("%d",&tamanho);
	int vet[tamanho];

	for(int i = 0; i < tamanho; i++){
		scanf("%d", &vet[i]);
	}// preche o vetor

	int soma = 0;
	soma = fun(tamanho,vet);

	printf("%d\n",soma);
    
}