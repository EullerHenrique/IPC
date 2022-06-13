#include <stdio.h>

int menornumero (int vet[], int n, int *posicao){
	int menor = 0;
	*posicao = 0;

	for(int i = 0; i < n; i++){
		if(i == 0){
			menor = vet[i];
			*posicao = i;
		}
		if(vet[i] < menor){
			menor = vet[i];
			*posicao = i;
		}
	}
return menor;
}


int main(void){
	int n = 0;
	int pos = 0;
	int menor = 0;

	scanf("%d", &n);

	int vet[1000] = {0};

	for(int i = 0; i < n; i++){ // lê cada elemento do vetor
		scanf("%d", &vet[i]);
	}

	menor = menornumero(vet,n, &pos);

	printf("Menor valor: %d\n",menor);
	printf("Posicao: %d\n",pos);
return 0;
}

