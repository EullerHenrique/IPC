#include <stdio.h>

void imprimeComEspaco(long num){
	int milhares = 0;
	int centenas = 0;

	milhares = num / 1000;
	centenas = num % 1000;

    printf("O numero digitado é : \t%03d \t%03d\n", milhares, centenas);
    return;
}

int main(void){
	long int numero = 0;

	printf("Digite um inteiro com até 6 dígitos: ");
    scanf("%ld", &numero);
	imprimeComEspaco(numero);

	return 0;
}


