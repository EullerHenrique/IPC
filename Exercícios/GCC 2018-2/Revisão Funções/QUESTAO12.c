#include <stdio.h>

int primeiroDigito(int num){
	return (num % 10);
}

int segundoDigito(int num){
	int resultado = 0;
	resultado = (num / 10) % 10;
	return resultado;
}

int main(void){
	int numero = 0;
	int soma = 0;
	printf("Digite um inteiro: ");
	scanf("%d",&numero);

	soma = primeiroDigito(numero) + segundoDigito(numero);
	printf("A soma dos dois digitos menos significativos é %d\n", soma);

return 0;

}
