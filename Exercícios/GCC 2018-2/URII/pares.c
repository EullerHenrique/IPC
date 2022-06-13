#include <stdio.h>

int main(void){
	int numeros[5];
	int x = 0;
	int valor = 0;
	int valor2 = 0;
	int valor3 = 0;
	int valor4 = 0;

	for(int i = 0; i < 5; i++){
		scanf("%d", &numeros[i]);
	}

	for(int i = 0; i < 5; i++){
		x = numeros[i];
		if(x % 2 == 0){
			valor = valor + 1;
		}
		if(x % 2 != 0){
			valor2 = valor2 + 1;
		}
		if(x > 0){
			valor3 = valor3 + 1;
		}
		if(x < 0){
			valor4 = valor4 + 1;
		}
	}


	printf("%d valor(es) par(es)\n",valor);
	printf("%d valor(es) impar(es)\n",valor2);
	printf("%d valor(es) positivo(s)\n",valor3);
	printf("%d valor(es) negativo(s)\n",valor4);
return 0;
}