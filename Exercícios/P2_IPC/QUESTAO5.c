#include <stdio.h>
#define TAM_MAX 9

int main(void){
	int vet[TAM_MAX] = {0};

	int numerosimpressos = 1;

	for(int i = 0; i < TAM_MAX; i++){ // lê todos os valores
		scanf("%d", &vet[i]);
	}


	for(int i = 0; i < TAM_MAX; i++){ // imprime todos os valores
		printf("%d", vet[i]);
		if(numerosimpressos > 2){
			printf("\n");
			numerosimpressos = 1;
		}else{
		numerosimpressos =  numerosimpressos + 1;
		printf(", ");
		}
	}	
return 0;
}