#include <stdio.h>

int main(void){
	int a = 0;
	for(int soma = 0, i = 1; i <= 20; i++){
	printf("Digite um valor: ");
	scanf("%d", &a);
	soma += a;
	printf("A soma é: %d\n", soma);
	}

return 0;
}