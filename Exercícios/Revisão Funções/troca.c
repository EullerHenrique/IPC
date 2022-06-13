#include <stdio.h>

void troca (int* ax, int* ay){
	int temp = 0;

	temp = *ax;
	
	*ax = *ay;
	*ay = temp;

    return;
}

int main(void){
	int a = 0;
	int b = 0;

	a = 5;
	b = 10;
	printf("a = %d b = %d\n",a,b);

	troca(&a,&b);
	printf("a = %d b = %d\n",a,b);

	return 0;
}