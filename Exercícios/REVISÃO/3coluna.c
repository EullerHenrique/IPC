#include <stdio.h>
#define TAM_MAX 9

int main(void){
	int vet[TAM_MAX];
	int numerosimpressos = 1;

	for(int i = 0; i < TAM_MAX; i++){
		scanf("%d", &vet[i]);
	}

	for(int i = 0; i < TAM_MAX; i++){
		printf("%d",vet[i]);
		if( numerosimpressos > 2){
			printf("\n");
			numerosimpressos = 1;
		}else{
			printf(", ");
			numerosimpressos = numerosimpressos + 1;
		}
	}
return
}