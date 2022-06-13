#include <stdio.h>
void ler(int* x, int* y){
	printf("Digite o valor da base e o valor da altura: ");
	scanf("%d %d",x,y);
return;
}


int area(int x, int y){
	int resultado = 0;
	resultado = x * y / 2;
	return resultado;
}


int perimetro(int x, int y){
	int resultado2 = 0;
	resultado2 = 2 * (x + y);
	return resultado2;
}


void imprimir(int x, int y){
	printf("A área é %d e o perimetro é %d\n", x,y);
}

int main(void){
	int x = 0;
	int y = 0;

	int a = 0;
	int b = 0;

	ler(&x,&y);
	a = area(x,y);
	b = perimetro(x,y);
	imprimir(a,b);
return 0;
}