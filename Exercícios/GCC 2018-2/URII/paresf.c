#include <stdio.h>

int main(void){
	int valor1 = 0;
	int valor2 = 0;
	int valor3 = 0;
	int valor4 = 0;

	int vet[5] = {0};

	for(int i = 0; i < 5; i++){
		scanf("%d",&vet[i]);
		if(vet[i] % 2 == 0){
			valor1=  valor1 + 1;
		}
		if(vet[i] % 2 != 0){
			valor2 = valor2 + 1;
 		}
 		if(vet[i] > 0){
 			valor3 = valor3 + 1;
 		}
 		if(vet[i] < 0){
 			valor4 = valor4 + 1;
 		}
	}

	printf("%d valor(es) par(es)\n",valor1);
	printf("%d valor(es) impar(es)\n",valor2); 
	printf("%d valor(es) positivo(s)\n",valor3);
	printf("%d valor(es) negativo(s)\n",valor4);
return 0;
}	