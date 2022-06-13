#include <stdio.h>

void divide(int dividendo, int divisor, int* aquoc, int* aresto){
	*aquoc = dividendo / divisor;
	*aresto = dividendo % divisor;

	return;
}

int main(void){
	int a = 0;
	int b = 0;
	int quoc = 0;
	int resto = 0;

	a = 13;
	b = 5;
	divide(a, b, &quoc, &resto);
	printf("%d dividido por %d tem quociente %d e resto %d\n", a, b, quoc, resto);

	return 0;

}











