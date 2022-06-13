#include <stdio.h>
double media_aritmetica(double vet[]){
	double soma = 0;

	for(int i = 0; i < 5; i++){
		soma = soma + vet[i];
	}
	return (soma / 5.0); 
}

int main(void){
	double media = 0.0;
	double numeros [] = {3.2,7.5,2.3,4.2,5.0};

	media = media_aritmetica(numeros);
	printf("A média é %.2lf\n", media);

	return 0;

}

