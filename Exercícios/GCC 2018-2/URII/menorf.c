#include <stdio.h>

int main(void){
	int x = 0;
	int menor = 0;
	int posicao = 0;

	scanf("%d",&x);
	int vet[x];

	for(int i = 0; i < x; i++){
		scanf("%d", &vet[i]);
		if(i == 0){
			menor =  vet[i];
			posicao = i;
		}
		if(vet[i] < menor){
			menor = vet[i];
			posicao = i;
		}
	}

	printf("Menor valor: %d\n",menor);
	printf("Posicao: %d\n",posicao);

return 0;
}
