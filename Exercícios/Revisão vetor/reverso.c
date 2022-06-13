#include <stdio.h>


int main(void){
	int numMax = 0;
	int TAM_MAX = 0;
	printf("Digite a quantidade máxima de números que você quer ler: ");
	scanf("%d", & TAM_MAX);

	int numeros[TAM_MAX];

	printf("Você pode entrar com até %d inteiros. \n", TAM_MAX);
	printf("Quantos inteiros você quer entrar?\n" );
	scanf("%d", &numMax);

if(numMax > TAM_MAX){
	numMax = TAM_MAX;
} // limite ao tamanho do arranjo

printf("\nDigite seus números: \n");

for(int i = 0; i <numMax; i++){
	scanf("%d", &numeros[i]);
}// preenche o arranjo

printf("\nSeus números revertidos são : \n");
for(int i = numMax - 1, numImpressos = 0; i >= 0; i--){
	printf("%3d", numeros[i]);
	if (numImpressos < 9){// limita o numero de colunas
		numImpressos++; 
	}else{// neste caso o numero de colunas é maior do que 9
		printf("\n");
		numImpressos = 0;//zera o número de colunas e reinica aa contagem
	}
}
printf("\n");

return 0;
}
