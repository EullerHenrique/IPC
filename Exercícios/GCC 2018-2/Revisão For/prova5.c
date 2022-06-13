// for aninhado

#include <stdio.h>

int main(void){
	int numLINHAS = 0;
	int numColunas = 0;
	scanf("%d", &numLINHAS);
	scanf("%d", &numColunas);

	for(int linha  = 1; linha <= numLINHAS; linha++){
		printf("Linha %d\n",linha);
		for(int coluna = 1; coluna <= numColunas; coluna++){
			printf("%d",coluna);
		}
		printf("\n");
	}

	return 0;
}

