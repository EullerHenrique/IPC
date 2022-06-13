#include <stdio.h>

void divide (int dividendo, int divisor, int*aquoc, int*aresto){
	*aquoc = dividendo/divisor;
	*aresto = dividendo % divisor;
    return;
}

void obtemDados(int* adividendo, int* adivisor){
	printf("Digite dois inteiros e pressione enter: ");
	scanf("%d%d", adividendo, adivisor);
	return;
}

void imprime(int quoc, int resto){
	printf("Quociente : %3d\n",quoc);
	printf("Resto: %3d\n",resto);
	return;
}

int main(void){
	int dividendo = 0;
	int divisor = 0;
	int quoc = 0;
	int resto = 0;

	obtemDados(&dividendo, &divisor);
	divide(dividendo,divisor,&quoc,&resto);
	imprime(quoc,resto);

	return 0;
}






