#include <stdio.h>
#define TAM_MAX 5

double media_aritmetica(int vet[]){
	int soma = 0;
	for(int i = 0; i < TAM_MAX; i++)
	soma += vet[i];
	return (soma / (double) TAM_MAX);
}

int main() {
	int num[TAM_MAX] = {1,2,3,4,5};
	double media = 0.0;

	media = media_aritmetica(num);
	printf("%lf\n",media);


	return 0;
}