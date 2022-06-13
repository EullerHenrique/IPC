#include <stdio.h>

int primeiroDigito(int num){
	return (num % 10);
}

int segundoDigito(int num){
	return ((num / 10) % 10);
}

int main(void){
	int soma = 0;
	int numero = 0;
	scanf("%d", &numero);

	soma = primeiroDigito(numero) + segundoDigito(numero);
	printf("A soma dos digitos menos significativos é : %d\n", soma);

	return 0;
}