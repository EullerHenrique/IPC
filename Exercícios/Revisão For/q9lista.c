#include <stdio.h>

int main(void){
	float grau = 0;
	float radianos = 0;

	scanf("%f", &grau);

	radianos = grau * 0.0174533;

	printf("%f graus é %f radianos",grau, radianos);
	return 0;
}