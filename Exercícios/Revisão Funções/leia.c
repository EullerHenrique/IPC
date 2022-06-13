#include <stdio.h>

int leiaQuantidade(void){
    int x = 0;

    printf("Digite a quantidade: ");
    scanf("%d", &x);
    return x;
}

int main(void){
	int quant = 0;

	quant = leiaQuantidade();
	printf("%d\n", quant);
	return 0;
}








