#include <stdio.h>

int primeiroDigito(int num){
	return num % 10;
}

int main(void){
	int digito = 0;
	int numero = 0;
	scanf("%d", &numero);
	digito = primeiroDigito(numero);
	printf("O digito menos significativo é : %d \n", digito);
return 0;
}