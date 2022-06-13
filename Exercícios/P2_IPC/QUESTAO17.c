#include <stdio.h>

void multiplica2(int vet[]){
	for(int i = 0; i < 5; i++){
		vet[i] = vet[i] * 2;
	}// altera os valores do arranjo, tal alteração nâo precisa de nenhum metodo especial para ser enviada, pois a alteração foi feita diretamente no arranjo
	return;
}


int main(void){
	int numeros []= {3,7,2,4,5};

	multiplica2(numeros);

	printf("O arranjo agora contém: ");
	for(int i = 0; i < 5; i++){
		printf("%d ",numeros[i]);// imprime o novo arranjo
	}
	printf("\n");

	return 0;
}
