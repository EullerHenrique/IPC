// Triangulo crescente

#include <stdio.h>

int main(void){
	int numlinhas = 0;
	scanf("%d", &numlinhas);
if(numlinhas >= 1 && numlinhas <= 9){
	for(int linha = 1; linha <= numlinhas; linha++){
		for(int coluna = 1; coluna <= linha; coluna++){
			printf("%d", coluna);
		}
		printf("\n");
    }
}
return 0;
}