#include <stdio.h>

int main(void){
	int x = 0;
	int y = 0;

	int  digito = 0;

	printf("Digite um número real: ");
	scanf("%d.%d", &x,&y);
	if(x >= 1 && y >= 1){
	digito = x % 10;

	printf("O digito menos significativo do número real lido é: %d\n", digito);
}
	return 0;
}

