#include <stdio.h>

int primeiroDigito(int num){
	return (num % 10);
}

int main(void){
	int numero = 0;
	int digito = 0;

   printf("Digite um inteiro: ");
   scanf("%d", &numero);

   digito = primeiroDigito(numero);
   printf("\n O dígito menos significativo é: %d\n", digito);

   return 0;
}





