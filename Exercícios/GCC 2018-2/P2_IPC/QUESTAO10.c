#include <stdio.h>
#define LINHA 3
#define COLUNA 5

int main(void){
	for(int linha = 1; linha <= LINHA; linha++){
		printf("Linha %d : ",linha);
		for(int coluna = 1; coluna <= COLUNA; coluna++){
			printf("%d",coluna);
		}
		printf("\n");
	}
return 0;
}