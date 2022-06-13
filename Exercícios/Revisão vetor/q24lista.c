#include <stdio.h>

int main(void){
	int numMax = 0;
	printf("Digite a quantidade de números que você quer ler: ");
	scanf("%d", & numMax);

	int numeros[numMax];

	for(int i = 0; i < numMax; i++){
		numeros[i] = 0;
	}

printf("\nDigite seus números: \n");

for(int i = 0; i <numMax; i++){
	scanf("%d", &numeros[i]);
}// preenche o arranjo

printf("\nSeus números revertidos são : \n");
for(int i = numMax - 1; i >= 0; i--){
	printf("%3d", numeros[i]);
}
printf("\n");

return 0;
}