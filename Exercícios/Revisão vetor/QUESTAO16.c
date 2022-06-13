// Passagem de um arranjo todo variavel para uma função
#include <stdio.h>

double media_aritmetica(int tamanho, double vet[tamanho]){
	double soma = 0.0;

	for(int i = 0; i < tamanho; i++){
		soma = soma + vet[i];
	}// realiza a soma 
   
   return (soma / (double) tamanho);
}



int main(void){
	int tamanho = 0;
    printf("Quantos números devo ler: ");
	scanf("%d", &tamanho);

	double numeros[tamanho];

	for(int i = 0; i < tamanho; i++){
		vet[i] = 0;
		scanf("%lf", & numeros[i]);
	}

	
	double media = 0.0;

	media = media_aritmetica(tamanho, numeros);
	printf("A média aritmetica é : %lf\n", media);	

return 0;
}