// Passagem um arranjo todo fixo para uma função

#include <stdio.h>
double media_aritmetica(int vet[]){
	int soma = 0;

	for(int i = 0; i < 5; i++){
		soma = soma + vet[i];
	}
	return (soma / 5.0); 
}

int main(void){
	double media = 0.0;
	int numeros [] = {3,7,2,4,5};

	media = media_aritmetica(numeros);
	printf("A média é %lf\n", media);

	return 0;

}

