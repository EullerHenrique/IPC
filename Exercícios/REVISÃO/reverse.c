#include <stdio.h>

void reverse( int vet[], int tam){
	int temp = 0;
	int j = tam - 1;

	for(int i = 0; i < j; i++){
		temp  = vet[i];
		vet[i] = vet[j];
		vet[j] = temp;
		j--;
	}
return;
}

int main(void){
	int tam = 0;
	scanf("%d",&tam);
	int vet[tam];

	for(int i = 0; i < tam; i++){
		vet[i] = 0;
		scanf("%d", &vet[i]);
	}

	reverse(vet, tam);

	for(int i = 0; i < tam; i++){
		printf("%d ",vet[i]);
	}
	printf("\n");

return 0;
}