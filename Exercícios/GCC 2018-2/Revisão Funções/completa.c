#include <stdio.h>

int leiaNum(void){
    int x = 0;

    printf("Digite a quantidade: ");
    scanf("%d", &x);
    return x;
}

int quadrado(int x){
    return x * x;
}

void imprimeInteiros(int x){
    printf("%d\n", x);
    return;
}

int main(void){
	int a = 0;
	int b = 0;

	a = leiaNum();
	b = quadrado(a);
	imprimeInteiros(b);

	return 0;
}







