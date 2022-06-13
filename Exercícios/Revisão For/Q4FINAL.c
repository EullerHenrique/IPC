#include <stdio.h>
#define TAM_MAX 9

int main(void){
	int vet[TAM_MAX] = {0};

	int numerosmimpressos = 1;

	for(int i = 0; i < TAM_MAX; i++){ // lê todos os valores
		scanf("%d", &vet[i]);
	}


	for(int i = 0; i < TAM_MAX; i++){ // imprime todos os vetores
		printf("%d", vet[i]);
		if(numerosmimpressos > 2){
			printf("\n");
			numerosmimpressos = 1;
		}else{
		numerosmimpressos =  numerosmimpressos + 1;
		printf(", ");
		}
	}	
return 0;
}