// triangulodescente

#include <stdio.h>

int main(void){
	int numlinhas = 0;
	scanf("%d", &numlinhas);
if(numlinhas >= 1 && numlinhas <= 9){
	for(int linha = numlinhas; linha >= 1; linha --){
		for(int coluna = 1; coluna <= linha; coluna ++){
			printf("%d", coluna);// imprime elemento por elemento na linha
		}
		printf("\n");
	}
}
return 0;
}